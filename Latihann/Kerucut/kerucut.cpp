#include "kerucut.h"

float garisPelukis(float r, float t){
    return sqrt(pow(r,2) + pow(t,2));
}

float luasPermukaan(float r, float t){
    float s;
    s = garisPelukis(r, t);
    return (22.0/7.0) * r * (s + r);
}

float volumeKerucut(float r, float t){
    return (1.0/3.0) * (22.0/7.0) * pow(r,2) * t;
}

