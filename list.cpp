#include<iostream>
using namespace std;
struct nod
{
	int info;
	struct nod*next;
};
typedef struct nod node;
class list
{
	node *f;
	public:
		list()
		{
			f=NULL;
		}
		void ins(int num)
		{
			node *p=new node;
			p->info=num;
			p->next=f;
			f=p;
		}
		void del()
		{
			node *temp=f;
			if(f==NULL)
			cout<<"\n no elements r there to delete.\n";
			else
			{
				cout<<"\n the deleted elements is : \n"<<f->info;
				f=f->next;
				delete temp;
				cout<<"\n deletetion successful \n";
			}
			return;
		}
		void disp()
		{
			node *temp=f;
			if(f==NULL)
			cout<<"\n List is empty \n";
			else
			{
				cout<<"\n elements in the list are: \n";
				while(temp!=NULL)
				{
					cout<<" "<<temp->info;
					temp=temp->next;
				}
			}
		}
};
int main()
{
	int num,ch=1;
	list ob;
	cout<<"==========linear linked list==========\n";
	cout<<"1.insertion\n2.deletion\n3.exit\n";
	while(ch)
	{
		cout<<"\nenter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n enter no. to be inserted\n";
				    cin>>num;
				    ob.ins(num);
				    ob.disp();
				    break;
			case 2:ob.del();
			ob.disp();
			break;
			case 3:return 0;
			default:cout<<"invalid choice\n";
			break;
		}
	}
}	

