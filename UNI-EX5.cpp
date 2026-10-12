#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
private:
	long seconds;
	int hh,mi,ss;
public:
	void setTime(int h, int m, int s)
	{
		hh = h;
		mi = m;
		ss =s;
	}
	void displayTime(void)
	{
		cout<<"Time is = "<<setw(2)<<setfill('0')<<hh<<":"
		    <<setw(2)<<setfill('0')<<mi<<":"
		    <<setw(2)<<setfill('0')<<ss<<endl;
	}
	void converttoSeconds(void)
	{
		seconds = hh* 3600 + mi * 60 + ss;
		cout<<"Seconds = "<<seconds<<endl;
	}
	Time calculatetimedifference(Time t1, Time t2)
	{
		Time temp;
		if(t2.ss > t1.ss)
		{
			--t1.mi;
			t1.ss += 60;
		}
		temp.ss = t1.ss - t2.ss;
		if(t2.mi > t1.mi)
		{
			--t1.hh;
			t1.mi += 60;
		}
		temp.mi = t1.mi-t2.mi;
		temp.hh = t1.hh-t2.hh;
		return temp;
	}
	void addduration(int secs)
	{
		hh =hh + secs /3600;
		mi = mi + (secs % 3600) / 60;
		ss = ss + (secs % 3600) % 60;
	}
};
int main()
{
	Time T1, T2, Result;
	T1.setTime(15,15,35);
	T1.displayTime();
	T1.converttoSeconds();
	T2.setTime(10,10,20);
	T2.displayTime();
	Result = Result.calculatetimedifference(T1,T2);  //T1 -T2
	Result.displayTime();
	int seconds;
	cout<<"Enter duration to be added in seconds: ";
	cin>>seconds;
	T2.addduration(seconds);
	T2.displayTime();
	return 0;
}
