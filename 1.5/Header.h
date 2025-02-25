#pragma once

#include<iostream>
#include <cmath> 

using namespace std;



double function(double x, double t);
double integrate(double a, double b, double t, double eps, int& k_iter);
