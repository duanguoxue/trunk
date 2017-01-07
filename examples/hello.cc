#include <ctime>
#include "base/build_info.h"
#include "glog/logging.h"
#include "gflags/gflags.h"
#include <folly/futures/Future.h>
#include <iostream>

DECLARE_bool(logtostderr);

using namespace folly;
using namespace std;
void foo(int x) {
  // do something with x
  cout << "foo(" << x << ")" << endl;
}

int main(int argc, char *argv[]) {
  FLAGS_logtostderr = true;
  google::InstallFailureSignalHandler();
  gflags::SetUsageMessage("hello");
  gflags::ParseCommandLineFlags(&argc, &argv, false);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Hello World!";
  char timestamp[32];
  std::strftime(timestamp, sizeof(timestamp), "%c",
                std::localtime(&kBuildTimestamp));
  LOG(INFO) << "Built by " << kBuildUser << "@" << kBuildHost
            << " as " << kBazelTargetName
            << " on " << timestamp
            << " as " << kBazelTargetName
            << " with git revision @" << kBuildScmRevision;
  // fb future
  cout << "making Promise" << endl;
  Promise<int> p;
  Future<int> f = p.getFuture();
  f.then(foo);
  cout << "Future chain made" << endl;
  // ... now perhaps in another event callback
  cout << "fulfilling Promise" << endl;
  p.setValue(42);
  cout << "Promise fulfilled" << endl;
  return 0;
}
