#ifndef SEED_H
#define SEED_H
#include <iostream>
#include <string>

using namespace std;
class Seed
{
private:
	double weight;
	double price;
	string name;
public:
	Seed(string name, double weight,double price) {
		this->name = name;
		this->weight = weight;
		this->price = price;
	}
	Seed() {
		name = "unknown";
		weight = 0;
		price = 0;
	}
	void setName(string);
	void setWeight(double);
	void setPrice(double);
	double getPrice() { return price; }
	double getWeight() { return weight; }
	string getName() { return name; }
	double getTotalPrice() { return price * weight; }
	void print() { cout << "Seed: " << name << ", " << weight << ", " << getTotalPrice() << "$" << endl; }
};

void Seed::setName(string name) {
	this->name = name;
}
void Seed::setWeight(double weight) {
	this->weight = weight;
}

void Seed::setPrice(double price) {
	this->price = price;
}
#endif