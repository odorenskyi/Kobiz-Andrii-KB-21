#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

float s_calculation(int x,int y,int z){
    float x1 = x;
    float y1 = y;
    float z1 = z;
    float s = pow((x1+y1+z1),2) - (6.28*sqrt(z1/3));
    s = round(s*100)/100;
    return s;
}
