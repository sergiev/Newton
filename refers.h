//
// Created by s3 on 03.04.18.
//
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;
const double EPS = 1e-4;

vector<double> gMethod(vector<vector<double>>, vector<double>);
void showmatrix(vector<vector<double>>);
void showvector(vector<double>);
vector<vector<double>> monm(vector<vector<double>>,vector<vector<double>>);
vector<vector<double>> transpone(vector<vector<double>>);
double f(double x);
double df(double x);
double norma(vector<double>,vector<double>);
vector<double> sum (vector<double>, vector<double>);