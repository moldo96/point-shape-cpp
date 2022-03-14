#include <iostream>
#include <math.h>
#include "point_library.h"

using namespace std;

Point::setNbCoordinates(int a)
{
    if(a!=0)
    nbCoordinates = a;
    else
        {
            cout<<"How many plans? 2D, 3D? Write the number: ";cin>>nbCoordinates;
        }
}

Point::Point()
{
    name="O";
    for(int i=0;i<nbCoordinates;i++)
        coordinate[i]=0;
}

Point::Point(char name)
{
    this->name=name;
    for(int i=0;i<nbCoordinates;i++)
        {
            cout<<"Coordinate "<<i+1<<" of point "<<name<<" is ";cin>>coordinate[i];
        }
}

Point::Point(char name, int *coord)
{
    this->name=name;
    //cout<<coord[0]<<coord[1]<<coord[2];
    //int length = (sizeof(coord)/sizeof(coord[0]));
    //cout<<length;
    //*
    //if(length==nbCoordinates)
        for(int i=0;i<nbCoordinates;i++)
            this->coordinate[i]=coord[i];
    //else
        //return;
        //*/
}

void Point::print()
{
    cout<<"The point "<<name<<" has the coordinates: ";
    for(int i=0;i<nbCoordinates;i++)
        cout<<coordinate[i]<<", ";
    cout<<".\n";
}

Line::Line(string name, Point A, Point B)
{
    this->name=name;
    P[0]=A;
    P[1]=B;
}

double lengthFormula(int a, int b)
{
    double px = double((a-b));
    px *= px;
    return px;
}

void Line::findLength()
{
    double sum = 0;
    //int i = 3;
    if(!length)
    {
        length = 100;
        /*
        while(i)
        {
            s +=
            i--;
        }
        double px = double((P[0].getX()-P[1].getX()));
        px *= px;
        double py = double((P[0].getY()-P[1].getY()));
        py *= py;
        double pz = double((P[0].getZ()-P[1].getZ()));
        pz *= pz;
        length = sqrt(px+py+pz);
        */
    }
}

void Line::print()
{
    if(!length)
        findLength();
    cout<<"The line "<<name<<" is composed by the points: "<<P[0].getName()<<" and "<<P[1].getName()<<", with length of "<<this->length<<".\n";
}
