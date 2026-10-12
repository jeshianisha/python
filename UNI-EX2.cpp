#include<iostream>
#include<cmath>
using namespace std;

class Point
{
	int x,y;
	public:
		void set(int x1, int y1)
		{
			x = x1;
			y = y1;
		}
		int getx()
		{
			return x;
		}
			int gety()
		{
			return y;
		}
		void show()
		{
			cout<<endl<<"Point x: "<<x<<" and Point y:"<<y;
		}
		double distance(Point p, Point q)
		{
			return sqrt(pow(p.getx()-q.getx(),2) +
			pow(p.gety()-q.gety(),2));
		}
		bool checkequal (Point p, Point q)
	    {
	    	if ((p.getx() == q.getx()) && (p.gety() == q.gety()))
	    	     return true;
	    	else
	    	    return false;
		}
};

int main()
{
	Point p1,p2,p3,result;
	p1.set(2,3);
	p2.set(4,5);
	p3.set(4,5);
	p1.show();
	p2.show();
	p3.show();
	cout<<endl<<"Distance between two points: "<<result.
	    distance(p1,p2);
    cout<<endl<<"Check two points are equal: "<<result.
	    checkequal(p1,p2);
	cout<<endl<<"Check two points are equal: "<<result.
	    checkequal(p1,p3);
	return 0;
}
	    
