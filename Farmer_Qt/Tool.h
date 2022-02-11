#ifndef TOOL_H
#define TOOL_H
#include <iostream>
#include <string>

using namespace std;
class Tool
{
private:
	double price;
	string name;
public:
	Tool(string name, double price) {
		this->name = name;
		this->price = price;
	}
	Tool() {
		name = "unknown";
		price = 0;
	}
	void setName(string);
	void setPrice(double);
	double getPrice() { return price; }
	string getName() { return name; }
	void print() { cout << "Tool: " << name << ", " << price << "$"<<endl; }
};

#endif