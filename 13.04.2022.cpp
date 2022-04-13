#include <iostream>
#include <math.h>
using namespace std;

const size_t SIZE = 100;

class point
{
public:
	point();
	point(int x, int y);
	int get_x();
	int get_y();
	void show();
private:
	int _x;
	int _y;
};

point::point()
{
	_x = 0;
	_y = 0;
}

point::point(int x, int y)
{
	_x = x;
	_y = y;
}

int point::get_x()
{
	return _x;
}

int point::get_y()
{
	return _y;
}

void point::show()
{
	cout << _x << " - " << _y << endl;
}



class points
{
public:
	points();
	void set_point(point pnt);
	void show();
	void find();

private:
	
	point _points[SIZE];
	size_t _index;
};

points::points()
{
	_index = 0;
}

void points::set_point(point pnt)
{
	if (_index < SIZE) 
	{
		_points[_index] = pnt;
		_index++;
	}
}

void points::show()
{
	for (size_t i = 0; i < SIZE; i++)
	_points[i].show();
}

void points::find()
{
	int sum{ 0 };
	int x1, x2, y1, y2;
	int numl;
	int min{ 0 };
	point minCord;
	for (size_t i = 0; i < SIZE; i++)
	{
		x1 = _points[i].get_x();
		y1 = _points[i].get_y();
		for (size_t j = 0; j < SIZE; j++)
		{
			x2 = _points[j].get_x();
			y2 = _points[j].get_y();
			numl = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			sum += numl;
		}
		if (sum < min || i == 0) {
			min = sum;
			minCord = _points[i];
		}
	
	}
	minCord.show();
}

int main()
{
	srand(time(NULL));

	points pnts;
	
	for (size_t i = 0; i < SIZE; i++)
	{
		point pnt(rand() % SIZE, rand() % SIZE);
		pnts.set_point(pnt);
	}
	pnts.show();
	pnts.find();
}
