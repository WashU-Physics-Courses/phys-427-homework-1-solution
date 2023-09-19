#include <limits>
#include <iostream>

int main() {
  std::cout << "float epsilon:       " << std::numeric_limits<float>::epsilon() << std::endl;
  std::cout << "double epsilon:      " << std::numeric_limits<double>::epsilon() << std::endl;
  std::cout << "long double epsilon: " << std::numeric_limits<long double>::epsilon() << std::endl;

  double eps = std::numeric_limits<double>::epsilon();
  std::cout << "1.0 + epsilon == 1.0: " << (1.0 + eps == 1.0) << std::endl;
  std::cout << "1.0 + epsilon / 2.0 == 1.0: " << (1.0 + eps * 0.5 == 1.0) << std::endl;
  return 0;
}
