#include<iostream>
using namespace std;
class stud
{
	char usn[20],name[30];
	float marks[5];
	int i;
	public:
	float avg;
	void read();
	void calc(int);
	void disp();
};
void stud::read()
{
	cout<<"\n Enter usn. : ";
	cin>>usn;
	cout<<"\n Enter name : ";
	cin>>name;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the marks of subject "<<i+1<<" : ";
		cin>>marks[i];
	}
}
void stud::calc(int n)
{
	int sum=0,min=marks[0];
	for(i=0;i<n;i++)
	{
		sum+=marks[i];
		if(min>=marks[i])
		min=marks[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/n;
}
void stud::disp()
{
	cout<<usn<<"\t"<<name<<"\t";
	for(i=0;i<5;i++)
	cout<<marks[i]<<"\t";
	cout<<avg<<"\n";
}
int main()
{
	int n,topper,i,z;
	float max=0;
	cout<<"\n Enter the number of students: ";
	cin>>n;
	stud s[n];
	for(i=0;i<n;i++)
	{
		s[i].read();
		s[i].calc(n);
	}
	cout<<"usn\tname\t";
	for(i=0;i<5;i++)
	{
		cout<<"marks"<<i+1<<"\t";
	}
	cout<<"avg\n";
	for(i=0;i<n;i++)
	{
		s[i].disp();
	}
	for(i=0;i<n;i++)
	{
		if(max<s[i].avg)
		{
			max=s[i].avg;
			topper=i;
		}	
	}
	for(i=0;i<n;i++)
	{
		if(s[topper].avg==s[i].avg)
		{
			cout<<"\n the topper is "<<i+1<<":";
			cout<<"\n details \n";
			s[i].disp();
		}
	}
}
