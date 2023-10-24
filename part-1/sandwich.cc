// Huu Nguyen
// huunguyen25@csu.fullerton.edu
// @huunguyen25
// Partners: @jacob, @angel

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int expect_input{4};
  if (arguments.size() != expect_input) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }
  std::string protein{arguments.at(1)};
  std::string bread{arguments.at(2)};
  std::string condiment{arguments.at(3)};
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "\n";
  return 0;
}
