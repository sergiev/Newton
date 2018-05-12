//
// Created by s3 on 02.05.18.
//
#include "refers.h"

double f(double x){
    return tan(x)-cos(x)+0.1;
}
double df(double x){
    return 1/cos(x)/cos(x)+sin(x);
}
