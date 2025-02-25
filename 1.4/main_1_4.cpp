/*Вычислить корень уравнения
f (x) = 0
на отрезке [a; b] с точностью  =10–6
,
используя заданный метод (М = 1 – метод половинного деления, М = 2 – метод
касательных, М = 3 – метод хорд) для заданных функций. Вычисление корня уравнения 
оформить в виде функции с функциональным параметром, параметры a, b,
, s – в виде аргументов по умолчанию.
Результат представить в виде таблицы (s – значение параметра,
х – вычисленный корень уравнения, f(x) – значение функции в найденной точке х,
k_iter – количество итераций цикла для получения корня с заданной точностью):*/

#include"Header.h"

int main() {
    double epsilon = 1e-6;
    double x0_1 = -3;
    cout << "\nTangent method for f1(x) =(x - 1)^2 - 5:" << endl;
    cout << "|    x     |   f(x)   | iter |" << endl;
    cout << "--------------------------------" << endl;

    int iter1;
    double root1 = tangent(f1, x0_1, epsilon, iter1);
    printResults(root1, f1(root1), iter1);


    double x0_2 = 0.7;
    cout << "\nTangent method for f2(x) = x^2 - sin(5x/5):" << endl;
    cout << "|    x     |   f(x)   | iter |" << endl;
    cout << "--------------------------------" << endl;

    int iter2;
    double root2 = tangent(f2, x0_2, epsilon, iter2);
    printResults(root2, f2(root2), iter2);
}
