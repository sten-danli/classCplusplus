#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;

class CGoods
{
private:
	char* Name[21];
	int		Amount;
	float	Price;
	float	Total_value;

public:
	void  RegisterGoods(char name[], int amount, float price)
	{
		strcpy_s(*Name,22, name);
		Amount = amount;
		Price = price;
	}
	void  CountTotal(void)
	{
		Total_value = Price * Amount;
	}
	void  GetName(char name[])
	{
		strcpy_s(name,22, *Name);

	}

	int GetMount(void)
	{
		return Amount;
	}

	float GetPrice(void)
	{
		return Price;
	}


	float GetTotal(void)
	{
		return Total_value;
	}
};

int  main() {

	CGoods cg1;
	cg1.RegisterGoods("c++", 23, 32);
	cout << cg1.GetPrice() << endl;
	cout << cg1.GetMount();



	return 0;

}
