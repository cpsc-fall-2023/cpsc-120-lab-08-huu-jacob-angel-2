// Huu Nguyen
// huunguyen25@csu.fullerton.edu
// @huunguyen25
// Partners: @jacob, @angel

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double avg{0};
  double sum{0};
  bool first{true};
  for (std::string argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double index{std::stod(argument)};
    sum += index;
    avg = sum / (arguments.size() - 1);
  }
  std::cout << "average = " << avg << "\n";
  return 0;
}
