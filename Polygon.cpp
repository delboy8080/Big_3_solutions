#include "Polygon.h"



Polygon::Polygon(int numPoints)
{
    numberOfPoints = numPoints;
    points = new Point[numPoints];
}
void Polygon::setPoint(int position, Point p)
{
    if (position < numberOfPoints)
    {
        points[position] = p;
    }
}

Point Polygon::getPoint(int x) const
{
    return points[x];
}
ostream& operator<<(ostream& out, const Polygon &poly)
{
    for(int i = 0; i < poly.numberOfPoints;i++)
    {
        Point p = poly.getPoint(i);
        if(i!=0)
            out <<"->";
        out << "("<<p.x<<"," <<p.y<<")";
    }
    return out;
}



Polygon& Polygon::operator=(Polygon &other)
{
    if(&other == this)
    {
        return *this;
    }

    this->numberOfPoints = numberOfPoints;
    if(points != nullptr)
    {
        delete[] points;
        points = nullptr;
    }
    points = new Point[numberOfPoints];
    for(int i = 0; i < numberOfPoints;i++)
    {
        points[i] = other.points[i];
    }
    return *this;
}
Polygon::Polygon(Polygon &other)
{
    this->numberOfPoints = numberOfPoints;

    points = new Point[numberOfPoints];
    for(int i = 0; i < numberOfPoints;i++)
    {
        points[i] = other.points[i];
    }
}

Polygon::~Polygon()
{
    delete[] points;
}