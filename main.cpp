#include <iostream>
#include "point_library.h"
#include "shape_library.h"

//using namespace std;

int main()
{
    Point::setNbCoordinates(3);
    Point::getNbCoordinates();
    Point O;
    O.print();
    //Point A('A');
    //int *c = new int [3] {0,8,0};
    //Point B('B', c);
    //delete c;
    //A.print();
    //B.print();

    //Line AB("AB",A,B);
    //AB.print();
    //AB.findLength();
    //AB.print();

    Triangle T;
    T.print();
    return 0;
}
