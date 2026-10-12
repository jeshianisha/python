#include<iostream>
using namespace std;
class Shapes
{
int type;
float d1,d2,d3;
float tsa,vol;
public:
	
void get()
{
	cout<<"1. CUBE 2. CUBOID 3. SPHERE 4. EXIT \n Enter your option:";
	cin>>type;
	if (type==1)
	  f1();
	else
	
	if (type==2)
	  f2();
	else
	
	if (type==3)
	  f3();
	else
	
	if (type==4)
	  exit(0);
	else
	  cout<<"Give option as 1,2,3,4 and try again \n";
}

void f1()
{
	cout<<"Enter the side of the cone:";
	cin>>d1;
	tsa=6*d1*d1;
	vol=d1*d1*d1;
	cout<<"Total Surface Area of the cone="<<tsa<<endl;
	cout<<"Volume of the cone="<<vol<<endl;
}

void f2()
{
cout<<"Enter the lenth, width and height of the cuboid:";
cin>>d1>>d2>>d3;
tsa=2*(d1*d2+d2*d3+d1*d3);
vol=d1*d2*d3;
cout<<"Total Surface Area of the cuboid="<<tsa<<endl;
cout<<"Volume of the cuboid="<<vol<<endl;	
}

void f3()
{
cout<<"Enter the radius of the sphere:";
cin>>d1;
tsa=4*3.14*d1*d1;
vol=4/3*3.14*d1*d1*d1;
cout<<"Total Surface Area of the cuboid="<<tsa<<endl;
cout<<"Volume of the cuboid="<<vol<<endl;	
}
};


int main()
{
Shapes s;
s.get();
return 0;
}


