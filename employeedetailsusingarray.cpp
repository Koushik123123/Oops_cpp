#include<iostream>
using namespace std;
class employee
{
	int num,basic;
	long da,it,netsal,gsal;
	char name[20];
	public:
	void read();
	void disp();
	void calc();
};
void employee::read()
{
	cout<<"enter employee id,name &basic salary\n";
	cin>>num>>name>>basic;
}
void employee::calc()
{
	da=(0.52)*basic;
	gsal=da+basic;
	it=(0.3)*gsal;
	netsal=basic+da-it;
}
void employee::disp()
{
	cout<<"\t"<<num<<"\t"<<name<<"\t\t"<<basic<<"\t\t\t"<<da<<"\t\t"<<it<<"\t\t\t"<<gsal<<"\t\t"<<netsal<<"\n";
}
int main()
{
	int n;
	cout<<"enter the no:of employee \n";
	cin>>n;
	employee e[n];
	for(int i=0;i<n;i++)
	{
		e[i].read();
		e[i].calc();
	}
	cout<<"sl no. eid\tname\t\tbasic salary\t\tDA\t\tincome tax\t\tgross salary\tnet salary\n";
	for(int i=0;i<n;i++)
	{
		e[i].disp();
	}
	return 0;
}	
