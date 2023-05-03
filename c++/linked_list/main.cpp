#include "linked_list.hpp"
#include <iostream>
#include <string>

int main() {
  pizza::LinkedList<std::string> list;
  list.push_back("123");
  list.push_back("abc");
  while(list.size()) {
    std::cout << list.pop_back() << '\n';
  }
  return 0;
}