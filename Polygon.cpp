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
Polygon::~Polygon()
{
}