#include <iostream>
#include <string>
#include <regex>

int main(int, char**) {
  const char *s = "11-05-2021";
  std::regex r(R"(\d\d\D\d\d\D\d\d\d\d)");
  std::cmatch c;
  std::cout << std::regex_match(s, c, r) << "\n";
  std::cout << c[0] << "\n";
}
