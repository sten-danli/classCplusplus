#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
using namespace std;

class CGoods
{
private:
	string	Name;
	int		Amount;
	float	Price;
	float	Total_value;
public:
	void  RegisterGoods( string name, int amount, float price)
	{
		Name=name;
		Amount = amount;
		Price = price;
	}
	void  CountTotal(void)
	{
		Total_value = Price * Amount;
	}
	const std::string GetName()
	{
		return Name;
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
	cout << cg1.GetMount() << endl;
	cout << cg1.GetName() << endl;
	cout << cg1.GetTotal() << endl;



	return 0;

}
