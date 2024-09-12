#include "helpers.h"
#include <cmath>


float Calculation::calculationSquere(float a) {
    float s = a * a;
    return s;
}

float Calculation::calculationRectangle(float a, float b) {
    float s = a * b;
    return s;
}

float Calculation::calculationParallelogram(float a, float b, float c){
    float s = a * b * sin(M_PI*c/180);
    return s;
}

float Calculation::calculationRhomb(float a, float b){
    float s = a * a * sin(M_PI*b/180);
    return s;
}

float Calculation::calculationTriangle(float a, float b, float c){
    float p = (a + b + c) / 2;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

float Calculation::calculationCircle(float a){
    float s = M_PI * pow(a, 2);
    return s;
}

float Calculation::calculationCircleSector(float a, float b){
    float s = (M_PI * pow(a, 2) * b) / 360;
    return s;
}

float Calculation::calculationTrapezoud(float a, float b, float c){
    float s = ((a + b) / 2)*c;
    return s;
}
