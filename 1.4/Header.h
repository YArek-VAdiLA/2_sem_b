#pragma once

#include <iostream>
#include <cmath>

using namespace std;


double f1(double x);
double f2(double x);
double tangent(double (*f)(double), double x0, double epsilon, int& iter);
void printResults(double x, double fx, int iter);