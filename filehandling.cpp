#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	char temp[20],name[20][20];
	int i,j,n;
	FILE *f;
	f=fopen("sort.txt","w");
	cout<<"Enter no of names";
	cin>>n;
	cout<<"enter "<<n<<"names";
	for(i=0;i<n;i++)
	{
		cin>>name[i];
		fprintf(f,"%s",name[i]);
	}
	fclose(f);
	f=fopen("sort.txt","r");
	if(f==NULL)
	{
		cout<<"file doesnt exist";
		return 0;
	}
	while(!feof(f))
	{
		fscanf(f,"%s",name[i]);
		i++;
	}
	n=i-1;
	cout<<"names before sorting : \n";
	for(i=0;i<n;i++)
		cout<<name[i]<<" ";
	cout<<"names after sorting: \n";
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	for(i=0;i<n;i++)
	cout<<name[i]<<"  ";
	return 0;
}
