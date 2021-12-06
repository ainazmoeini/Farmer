#ifndef FARMER_H
#define FARMER_H

#include "Person.h"
#include "Tool.h"
#include "Seed.h"
#include <vector>
#include "Land.h"

class Farmer : public Person
{
private:
	vector<Tool*> tools;
	vector<Seed*> seeds;
	vector<Land*> lands;
	double balance;
public:
	Farmer(string n, int a) :Person(n, a) { balance = 0; }
	Farmer() :Person() { balance = 0; }
	bool addBalance(double);
	bool buySeed(Seed*);
	bool buyLand(Land*);
	bool buyTool(Tool*);
	void print() 
	{ 
		cout << "Farmer: " << name << ", " << age << endl; 
		cout << "Lands:" << endl;
		for (int i = 0; i < lands.size(); i++)
		{
			lands[i]->print();
		}
		cout << "Tools:" << endl;
		for (int i = 0; i < tools.size(); i++)
		{
			tools[i]->print();
		}
		cout << "Seeds:" << endl;
		for (int i = 0; i < seeds.size(); i++)
		{
			seeds[i]->print();
		}
	}
};

bool Farmer::addBalance(double amount) 
{
	if (amount <= 0)
		return false;
	balance += amount;
	return true;
}
bool Farmer::buySeed(Seed* seed)
{
	if (seed->getTotalPrice() <= balance)
	{
		balance -= seed->getTotalPrice();
		
		seeds.push_back(seed);
		return true;
	}
	return false;
}
bool Farmer::buyLand(Land* land)
{
	if (land->getTotalPrice() <= balance)
	{
		balance -= land->getTotalPrice();
		
		lands.push_back(land);
		return true;
	}
	return false;
}
bool Farmer::buyTool(Tool* tool)
{
	if (tool->getPrice() <= balance)
	{
		balance -= tool->getPrice();
		
		tools.push_back(tool);
		return true;
	}
	return false;
}


#endif 