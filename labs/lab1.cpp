#include <cstdio>
#include <cmath>
#include <iomanip>

#define A -5.0
#define B 5.0
#define C 0.1

double func(double x) {
    const double t1 = x*exp(x);
    const double t2 = 2*sin(x);
    const double t3 = sqrt(std::abs(x*x*x - x*x));
    return t1 + t2 + t3;
}

void printValues() {
    const int n = ((B) - (A))/(C);
    for (int i = 0; i < n; ++i) {
        const double x = (B) + i*(C);
        const double y = func(x);
        printf("%2d: x = %4.1f, f(x) = %.4f\n", i, x, y);
    }
}

int main() {
    printValues();
    return 0;
}
