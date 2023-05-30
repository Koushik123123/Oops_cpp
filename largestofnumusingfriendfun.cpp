#include<iostream>
using namespace std;
class largest
{
	private:
	int x,y,z;
	public:
	void input()
	{
		cout<<"enter the three number\n";
		cin>>x>>y>>z;
	}
	friend void find(largest n);
};
void find(largest n)
{
	if(n.x>n.y&&n.x>n.z)
	{
		cout<<"largest is: "<<n.x;	
	}
	else if(n.y>n.z)
	{
		cout<<"largest is: "<<n.y;	
	}
	else
	{
		cout<<"largest is: "<<n.z;
	}	
}
int main()
{
	largest n;
	n.input();
	find(n);
	return 0;
}
