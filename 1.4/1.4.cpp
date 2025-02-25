#include"Header.h"

double f1(double x) {
    return pow(x - 1, 2) - 5;
}

double f2(double x) {
    return pow(x, 2) - sin(5 * x / 5);
}

double tangent(double (*f)(double), double x0, double epsilon, int& iter) {
    iter = 0;
    double x1;

    do {
        double f_x0 = f(x0);
        double f_prime_x0 = 2 * x0;

        if (fabs(f_prime_x0) < 1e-10) {
            cout << "The derivative is close to zero" << endl;
            return x0;
        }

        x1 = x0 - f_x0 / f_prime_x0;
        iter++;
        x0 = x1;
    } while (fabs(f(x1)) >= epsilon);

    return x1;
}

void printResults(double x, double fx, int iter) {
    cout << "| " << x << " | "
        << fx << " | "
        << iter << " |" << endl;
}
