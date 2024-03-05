#pragma once
#include "Structures.h"
class Polygon
{
	Point *points;
	int numberOfPoints;
public:
	Polygon(int numPoints=1);
	void setPoint(int position, Point p);
	Point getPoint(int x) const;
    friend ostream& operator<<(ostream& out, const Polygon &poly);
	~Polygon();
};

