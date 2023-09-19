#include <iostream>
#include <cmath>

template <typename T>
T next(T phi_n, T phi_nm1) {
  return phi_nm1 - phi_n;
}

int main(int argc, char *argv[]) {
  double phi = 0.61803398;

  double phi0 = 1.0;
  double phi1 = phi;
  std::cout << "phi^1: " << phi1 << std::endl;
  for (int i = 2; i <= 30; i++) {
    double phi2 = next(phi1, phi0);
    std::cout << "phi^" << i << ": " << phi2 << " vs " << std::pow(phi, i) << std::endl;
    phi0 = phi1;
    phi1 = phi2;
  }

  return 0;
}
