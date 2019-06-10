#include"stdafx.h"
#include"iostream"
using namespace std;
class CBase
{
protected:
	int a;
public:
	CBase()
	{
		a = 0;
	}
	CBase(int c)
	{
		a = c;
	}
	void display()
	{
		cout<< "a=" << a << endl;
	}
};
class CDerived :public CBase
{
public:
	CDerived()
	{
		a = 0;
	}
	CDerived(int c)
	{
		a = c;
	}
};
int main()
{
	CDerived obj(100);
	obj.display();
	return 0;
}