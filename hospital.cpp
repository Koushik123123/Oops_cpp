#include<iostream>
using namespace std;
struct data 
{
	int d;
	int m;
	int y;
};
class hospital 
{
	char name[100];
	struct data d_adm;
	struct data d_dis;
	protected:int age;
	public:
		void getdata()
		{
			cout<<"Enter the name of the patient\n";
			cin>>name;
			cout<<"Enter the age\n";
			cin>>age;
			cout<<"Enter date of admission\n";
			cin>>d_adm.d>>d_adm.m>>d_adm.y;
			cout<<"Enter date of discharge\n";
			cin>>d_dis.d>>d_dis.m>>d_dis.y;
		}
		void display() 
		{
			cout<<name<<"\t \t";
			cout<<age<<"\t \t";
			cout<<d_adm.d<<'-'<<d_adm.m<<'-'<<d_adm.y<<"\t  \t";
			cout<<d_dis.d<<'-'<<d_dis.m<<'-'<<d_dis.y;
		}
};
class pediatric_patient:public hospital 
{
	char vaccine[20];
	public: 
	void get() 
	{
		getdata();
		cout<<"Enter the name of the vaccine to be given \n";
		cin>>vaccine;
	}
	void put()
	{
		if(age<12) 
		{
			display();
			cout<<"\t"<<"\t";
			cout<<vaccine;
			cout<<"\n";
		}
		else
		cout<<"Age greater than 12 not a pediatric patient";
	}
};
int main()
{
	hospital h[5];
	int n;
	cout<<"Enter the number of patients \n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		h[i].getdata();
	}
	cout<<"Patient database\n";
	cout<<"Name"<<"\t \t"<<"Age"<<"\t \t"<<"Date_of_admission"<<"\t"<<"Date_of_Discharge\n";
	for(int i=0;i<n;i++)
	{
		h[i].display();
		cout<<"\n\n";
	}
	pediatric_patient a1[5];
	cout<<"Enter the number of pediatric patient\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a1[i].get();
	}
	cout<<"pediatric patient database\n";
	cout<<"Name"<<"\t \t"<<"Age"<<"\t \t"<<"Date_of_admission"<<"\t"<<"Date_of_Discharge"<<"\t"<<"Vaccine\n";
	for(int i=0;i<n;i++)
	{
		a1[i].put();
	}
	return 0;
}
		
