#include<iostream>
using namespace std;
class rs 
{
	public: 
	float rs;
	virtual void conv()=0;
	void disp()
	{
		cout<<"Is equal to  "<<rs<<"INR\n";
	}
};
class doll:public rs 
{
	float dol;
	public:
	void conv()
	{
		cout<<"Enter currency in the doller \n";
		cin>>dol;
		rs=54.3*dol;
		cout<<" "<<dol<<" in doller\n";
		disp();
	}
};
class euro:public rs 
{
	float er;
	public:
	void conv()
	{
		cout<<"Enter currency in the euro \n";
		cin>>er;
		rs=70.2*er;
		cout<<" "<<er<<" in euro\n";
		disp();
	}
};
class pd:public rs 
{
	float pnd;
	public:
		void conv()
		{
			cout<<"Enter currency in the pound \n";
			cin>>pnd;
			rs=81.1*pnd;
			cout<<" "<<pnd<<" in pound\n";
			disp();
		}
};	
int main()
{
	int c;
	doll d;
	euro e;
	pd p;
	cout<<"\t\t\t currency conversion \n";
	while(1)
	{
		cout<<"1.$ to rs     2.euro to rs       3.pound to rs       4.exit";
		cin>>c;
		switch(c)
		{
			case 1:d.conv();
			break;
			case 2:e.conv();
			break;
			case 3:p.conv();
			break;
			default:return 0;
		}
	}
	return 0;
}
