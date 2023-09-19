#include <cmath>
#include <iostream>
#include <tuple>

std::tuple<double, double> solve_quadratic_1(double a, double b, double c) {
  double x1 = (-b + std::sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
  double x2 = (-b - std::sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
  return std::make_tuple(x1, x2);
}

std::tuple<double, double> solve_quadratic_2(double a, double b, double c) {
  double sign_b = (b > 0.0) ? 1.0 : -1.0;
  double q = -0.5 * (b + sign_b * std::sqrt(b * b - 4.0 * a * c));
  double x1 = q / a;
  double x2 = c / q;
  return std::make_tuple(x1, x2);
}

int main() {
  auto result1 = solve_quadratic_1(1.0, 1.0, 1.0);
  std::cout << "Method 1: (1.0, 1.0, 1.0): x1 = " << std::get<0>(result1)
            << ", x2 = " << std::get<1>(result1) << std::endl;

  auto result2 = solve_quadratic_2(1.0, -2.0, 1.0);
  std::cout << "Method 2: (1.0, -2.0, 1.0): x1 = " << std::get<0>(result2)
            << ", x2 = " << std::get<1>(result2) << std::endl;

  auto result3 = solve_quadratic_1(1.0, 1.0e7, 1.0e-4);
  std::cout << "Method 1: (1.0, 1.0e7, 1.0e-4): x1 = " << std::get<0>(result3)
            << ", x2 = " << std::get<1>(result3) << std::endl;
  auto result4 = solve_quadratic_2(1.0, 1.0e7, 1.0e-4);
  std::cout << "Method 2: (1.0, 1.0e7, 1.0e-4): x1 = " << std::get<1>(result4)
            << ", x2 = " << std::get<0>(result4) << std::endl;
  return 0;
}
