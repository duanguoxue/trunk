cc_library(
  name = "echohandler",
  srcs = ["EchoHandler.cpp"],
  hdrs = ["EchoHandler.h", "EchoStats.h"],
  deps = [
    "//third_party/gflags",
    "//third_party/glog",
    "//third_party/proxygen:httpserver",
  ],
)

cc_binary(
  name = "http_hello",
  srcs = [
    "EchoServer.cpp",
  ],
  includes = [
    ".",
    "examples/http",
  ],
  deps = [
    ":echohandler",
  ],
  stamp = 1,
)
