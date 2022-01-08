#include "hello_world/hello_world.h"

#include "gtest/gtest.h"

namespace hello_world {
namespace {

TEST(HelloWorldTest, GetHelloWorldStringWorks) {
  EXPECT_EQ(getHelloWorldString(), "Hello, World.");
}

<<<<<<< HEAD
}
}  // namespace hello_world
=======
} // namespace
} // namespace hello_world
>>>>>>> 2397928 (Update comments.)
