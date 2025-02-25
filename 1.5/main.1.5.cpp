#include"Header.h"

int main() {
    double s1 = 1, s2 = 10, ds = 3;
    double t1 = 1, t2 = 3, dt = 1;
    double a = 2.63, b = 3.1, eps = 1e-6;


    cout << "s\t t\t Int\t\t k_iter" << endl;
    for (double s = s1; s <= s2; s += ds) {

        for (double t = t1; t <= t2; t += dt) {
            int k_iter = 0;
            double result = integrate(a, b, t, eps, k_iter);

            cout << s << "\t" << t << "\t";
            if (isnan(result)) {
                cout << "error\t\t-" << endl;
            }
            else {
                cout << result << "\t" << "\t" << k_iter << endl;
            }
        }
    }

}
