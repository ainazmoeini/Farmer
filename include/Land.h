#ifndef LAND_H
#define LAND_H
#include <vector>
#include <iostream>
#include "Scope.h"

using namespace std;

class Land
{
private:
	int length;
	int width;
	bool empty;
	double price;//price per length and width format (eg. meter)
	vector<Scope*> scopes;
public:
	Land(int l, int w,double p)
	{
		length = l;
		width = w;
		price = p;
		empty = true;
	}
	Land()
	{
		length = 0;
		width = 0;
		price = 0;
		empty = true;
	}
	void setLength(int);
	void setPrice(int);
	void setWidth(int);
	void addScope(Scope*);
	int getLength() { return length; }
	double getPrice() { return price; }
	double getTotalPrice() { return price * length * width; }
	int getWidth() { return width; }
	int getScopesCount() { return scopes.size(); }
	bool isEmpty() { return empty; }
	Scope* getScope(int);
	Scope* getLastScope() { isEmpty() ? nullptr : scopes[scopes.size() - 1]; }
	Scope* getFirstScope(){ isEmpty() ? nullptr : scopes[0]; }
	void print() 
	{ 
		cout << "Land: " << length << " x " << width << ", " << getTotalPrice() << "$" << endl << "Scopes details: " << endl;
		for (int i = 0; i < getScopesCount(); i++)
		{
			scopes[i]->print();
		}
	
	}
};

void Land::setLength(int l) {
	length = l;
}
void Land::setPrice(int p) {
	price = p;
}
void Land::setWidth(int w) {
	width = w;
}
void Land::addScope(Scope* scope) {
	scopes.push_back(scope);
	if (isEmpty())
		empty = false;
}
Scope* Land::getScope(int index) {
	if (index >= getScopesCount())
		return nullptr;
	return scopes[index];
}
#endif