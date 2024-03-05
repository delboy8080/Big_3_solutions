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

Point Polygon::getPoint(int x)
{
    return points[x];
}

Polygon::~Polygon()
{
}