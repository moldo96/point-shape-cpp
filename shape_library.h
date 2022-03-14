#ifndef SHAPE_LIBRARY_H_INCLUDED
#define SHAPE_LIBRARY_H_INCLUDED

class Shape
{
protected:
    std::string name;
    Line *L;
    Point *P;

public:
    std::string getName(){return name;}
    void print();
    //virtual Shape(std::string name);
};

class Triangle:Shape
{
private:
    //Line L[3];
    //Point P[3];
    static const int nbPoints = 3;

public:
    Triangle();
    Triangle(std::string);
    Triangle(std::string,Point *P);
    Triangle(std::string,Line *L);
    void print();

};

class Quadrilateral:Shape
{
private:
    //Line L[4];
    //Point P[4];
    static const int nbPoints = 4;

public:
    Quadrilateral();
    Quadrilateral(std::string);
    void print();
};

double lengthFormula(int, int);


#endif // SHAPE_LIBRARY_H_INCLUDED
