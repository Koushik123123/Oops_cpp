#include<iostream>
using namespace std;
class divide 
{
	int a,b;
	public: 
	void compute() 
	{
		cout<<"\n enter two integers \n";
		cin>>a>>b;
		try 
		{
			if(b!=0)
			cout<<a/b<<"\n";
			else
			throw b;
		}
		catch(...)
		{
			cout<<"\n division by zero(error) \n";
		}
	}
};
class neg 
{
	int a;
	public: 
	void scan()
	{
		cout<<"\n enter age\n";
		cin>>a;
		try 
		{
			if(a>=0)
			cout<<"\n age os the person is "<<a<<" \n";
			else
			throw a;
		}
		catch(...) 
		{
		cout<<" please enter the positive value for age\n";
		}
	}
};
int main()
{
	int c;
	divide d;
	neg n;
	while(1) 
	{
		cout<<"1.divide interers 2.enter age 3.exit \n";
		cin>>c;
		switch(c) 
		{
			case 1:d.compute();
			break;
			case 2:n.scan();
			break;
			default:return 0;
		}
	}
	return 0;
}
		
