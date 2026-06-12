#include "genboard.h"
using namespace ads;


double signboard::price() {
    return 1.25 * material * area();
}


ads::rectangleboard::rectangleboard(float l, float b, ads::rawmat medium) 
{
        material = medium;
        if (l>b){
            length = l;
            breadth = b;
        }
        else {
            length = b;
            breadth = l;
        }
    
}

ads::circleboard::circleboard(float r, ads::rawmat medium) 
{
    material = medium;
    radius = r;
    scrap = 0.4;
}

double ads::rectangleboard::area() {
    return length * breadth;
}

double ads::circleboard::area() {
    return 3.14 * radius * radius;
}

double ads::circleboard::loss() {
    return (1 - scrap) * material * (4 - 3.14) * radius * radius;
}