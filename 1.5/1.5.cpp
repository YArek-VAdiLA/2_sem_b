#include"Header.h"

double function(double x, double t) {
    if (x <= 0) {
        return NAN;
    }

    double log_value = log10(pow(x, t));
    double cos_value = pow(cos(pow(x, 1.0 / 3.0)), 2);


    if (log_value + cos_value == 0) {
        return NAN;
    }

    return x * x / (log_value + cos_value);
}


double integrate(double a, double b, double t, double eps, int& k_iter) {
    int n = 10, n_max = 100000;
    double prev_result = 0.0, result = 0.0;
    k_iter = 0;

    do {
        double h = (b - a) / n;
        prev_result = result;
        result = 0.0;


        for (int i = 1; i <= n; i++) {
            double x = a + i * h;
            double fx = function(x, t);
            if (isnan(fx)) {
                return NAN;
            }
            result += fx;
        }
        result *= h;

        n *= 2;
        k_iter++;
        if (n > n_max) break;
    } while (fabs(result - prev_result) > eps);

    return result;
}
