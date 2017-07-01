/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include <proxygen/httpserver/RequestHandler.h>
#include <proxygen/httpserver/ResponseBuilder.h>
#include "EchoHandler.h"
#include "EchoStats.h"

using namespace proxygen;

namespace EchoService {

EchoHandler::EchoHandler(EchoStats* stats): stats_(stats) {
}

void EchoHandler::onRequest(std::unique_ptr<HTTPMessage> headers) noexcept {
  std::cout << "process http request msg." <<std::endl;
  std::cout << headers->getQueryParam("call") <<std::endl;
  std::cout << headers->getQueryParam("log") <<std::endl;
  stats_->recordRequest();
}

void EchoHandler::onBody(std::unique_ptr<folly::IOBuf> body) noexcept {
  if (body_) {
    body_->prependChain(std::move(body));
  } else {
    body_ = std::move(body);
  }
}

void EchoHandler::onEOM() noexcept {
  const char* rbody = "{\"key\":\"dgx\"}";
  ResponseBuilder(downstream_)
    .status(200, "OK")
    .header("Request-Number",
            folly::to<std::string>(stats_->getRequestCount()))
    .body(rbody)
    .sendWithEOM();
  std::cout << "send response,status:" << stats_->getRequestCount() << std::endl;
}

void EchoHandler::onUpgrade(UpgradeProtocol protocol) noexcept {
  // handler doesn't support upgrades
}

void EchoHandler::requestComplete() noexcept {
  std::cout << "request Complete." <<std::endl;
  delete this;
}

void EchoHandler::onError(ProxygenError err) noexcept {
  std::cout << "onError." <<std::endl;
  delete this;
}

}
