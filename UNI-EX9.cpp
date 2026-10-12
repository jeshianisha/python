#include<iostream>
using namespace std;

class Shape
{
	public: double a,b;
	  void get_data()
	  {
	  	cin>>a>>b;
	  }
	  virtual void calculate_area() = 0;
};

class Triangle:public Shape
{
	public: void calculate_area()
	{
		cout<<"Area of triangle "<<0.5*a*b<<endl;
	}
};

class Rectangle:public Shape
{
	public:void calculate_area()
	{
		cout<<"Area of rectangle "<<a*b<<endl;
	}
};

class Circle:public Shape
{
	int radius;
	public: void calculate_area()
	{
		cout<<endl<<"Enter radius:"<<endl;
		cin>>radius;
		cout<<"Area of Circle "<<3.14159 * radius * radius<<endl;
	}
};

int main()
{
	Triangle t;
	Shape *st = &t;
	cout<<"Enter base and altitude: ";
	st->get_data();
	st->calculate_area();
	Rectangle r;
	Shape *sr = &r;
	cout<<"Enter length and breadth: ";
	sr->get_data();
	sr->calculate_area();
	Circle c;
	Shape *sc = &c;
	sc->calculate_area();
	return 0;
}
