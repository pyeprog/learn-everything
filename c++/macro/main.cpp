#include <iostream>

//#define SHORT

#ifdef SHORT
void salute() { std::cout << "hi" << '\n'; }
#else
void salute() { std::cout << "hello" << '\n'; }
#endif

#define SALUTE(x) std::cout << "hi " << x << '\n'

int main() {
  SALUTE("john");
  return 0;
}