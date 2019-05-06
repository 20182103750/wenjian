#include "stdafx.h"
#include "iostream"
using namespace std;
class CBaiLiGa
{
private:
	int year;
	int month;
	int day;

public:
	CBaiLiGa();
	CBaiLiGa(int y, int m, int d);
	void printfCBaiLiGa();
};
CBaiLiGa::CBaiLiGa()
{
	year = 2019;
	month = 1;
	day = 1;
}
CBaiLiGa::CBaiLiGa(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CBaiLiGa::printfCBaiLiGa()
{
	cout << year << "Äê"<< month << "ÔÂ"<< day << "ÈÕ"<< endl;
}
int main()
{
	CBaiLiGa love(2019, 5, 6);
	love.printfCBaiLiGa();
	return 0;
}