#ifndef POINT_LIBRARY_H_INCLUDED
#define POINT_LIBRARY_H_INCLUDED

class Point
{
private:
    int coordinate[10];
    std::string name;
    inline static int nbCoordinates = 3;
public:
    static getNbCoordinates(){return nbCoordinates;}
    static setNbCoordinates(int);
    getCoordinate(int i){return coordinate[i];}
    std::string getName(){return name;}
    Point();
    Point(char name);
    Point(char, int *);
    void print();
};

class Line
{
private:
    int length = 0;
    std::string name;
    Point P[2];

public:
    Line(std::string, Point, Point);
    //double lengthFormula(int, int);
    void findLength();
    double getLength(){return length;}
    void print();
};

#endif // POINT_LIBRARY_H_INCLUDED
