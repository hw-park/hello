#include "hello_world/hello_world.h"

#include "absl/strings/str_cat.h"

namespace hello_world {

std::string getHelloWorldStrin() {
  return absl::StrCat("Hello, ", "World.");
}

}
