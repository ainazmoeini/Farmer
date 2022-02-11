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

#endif 