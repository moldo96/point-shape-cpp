#include <iostream>
#include <math.h>
#include "point_library.h"
#include "shape_library.h"

using namespace std;

Triangle::Triangle()
{
    name = "Triangle ABC";
    P[0] = Point('A');
    P[1] = Point('B');
    P[2] = Point('C');
}

Triangle::Triangle(string name)
{
    this->name = name;
    P[0] = Point('A');
    P[1] = Point('B');
    P[2] = Point('C');
}

Triangle::Triangle(string, Point *P)
{
    this->name = name;
    this->P[0] = P[0];
    this->P[1] = P[1];
    this->P[2] = P[2];
}

Triangle::Triangle(string name, Line *L)
{
    this->name = name;
    this->L[0] = L[0];
    this->L[1] = L[1];
    this->L[2] = L[2];
}

void Triangle::print()
{
    cout<<"The "<<name<<endl;
}
