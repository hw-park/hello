#include <cstdlib>
#include <iostream>

#include "gflags/gflags.h"
#include "glog/logging.h"
#include "hello_world/hello_world.h"

int main(int argc, char** argv) {
  ::google::InitGoogleLogging(argv[0]);
  ::google::ParseCommandLineFlags(&argc, &argv, true);

  std::cout << ::hello_world::getHelloWorldString() << std::endl;

  LOG(INFO) << "Success.";

  return EXIT_SUCCESS;
}
