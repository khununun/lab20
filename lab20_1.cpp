#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2)
{
	double Right = min(R1.x + R1.w, R2.x + R2.w);
	double Left = max(R1.x, R2.x);
	double Up = min(R1.y, R2.y);
	double Down = max(R1.y - R1.h, R2.y - R2.h);
	double area = (Right - Left) * (Up - Down);
	if (area > 0)
	{
		return (Right - Left) * (Up - Down);
	}
	else
	{
		return 0;
	}
}
