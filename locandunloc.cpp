#include<iostream>
using namespace std;
class resource
{
	static int res;
	public:
	static int getr();
	void free_res()
	{
		res=0;
	}
};
int resource::res;
int resource::getr()
{
	if(res)
		return 0;
	else
	{
		res=1;
		return 1;
	}
}
int main()
{
	resource a,b;
	if(resource::getr())
	cout<<"resource under use, object a is using \n";
	if(!resource::getr())
	cout<<"resource busy, object b is denied  \n";
	a.free_res();
	if(resource::getr())
	cout<<"resource can now be used by object b \n";
	return 0;
}
