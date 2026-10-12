#include<iostream>
#include<cmath>
using namespace std;
class AP
{
	float a; // first term
	int d; // common difference
	public:
		void assign(float firstterm, int difference)
		{
			a = firstterm;
			d = difference;
		}
		friend void generateapsequence(AP obj, int n);
};

class HP
{
	float a;
	int d;
	public:
		void assign(float firstterm, int difference)
		{
			a = firstterm;
			d = difference;
		}
	    void generatesequence( int n)
	    {
	    	cout<<endl<<"HP Sequence terms: "<<endl;
	    	for (int i=0; i<n; i++)
	    	{
	    		cout<<1<<"/"<<(a+i*d);
	    		if (i < n-1)
	    		  cout<<",";
			}
			cout<<endl;
		}
		void generatenthterm(int n)
		{
		   cout<<endl<<"HP nth term: "<<endl;
		   cout<<1<<"/"<<(a+(n-1)*d);
		   cout<<endl;
		}
			void sumnterms(int n)
		{
		   cout<<endl<<"HP sum of n terms: "<<endl;
		   cout<<( (1.0/d) * log(2.0*a + (2.0*n-1) * d) / (2.0*a-d));
		   cout<<endl;
		}
		friend void generateapsequence(AP obj, int n)
		{
		   cout<<endl<<"AP Sequence terms: "<<endl;
	    	for (int i=0; i<n; i++)
	    	{
	    		cout<<(obj.a+i*obj.d);
	    		if (i < n-1)
	    		  cout<<",";
			}
			cout<<endl;
		}	
		
};

int main()
{
	HP h1;
	int first,numterms,apnumterms,nth;
	float diff;
	cout<<endl<<"Enter firstterm and difference for HP: "<<endl;
	cin>>first>>diff;
	h1.assign(first,diff);
	cout<<endl<<"Enter number of term:";
	cin>>numterms;
	h1.generatesequence(numterms);
	apnumterms = numterms;
	cout<<endl<<"Enter term to display:";
	cin>>nth;
	h1.generatenthterm(nth);
	cout<<endl<<"Enter the number of terms to sum:";
	cin>>numterms;
	h1.sumnterms(numterms);
	AP a1;
	a1 .assign(first,diff);
	generateapsequence(a1,numterms);
	return 0;
}
