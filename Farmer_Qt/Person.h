#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person(string n, int a) { name = n; age = a; }
	Person() {
		name = "unknown";
		age = 0;
	}
	void setName(string);
	void setAge(int);
	string getName() { return name; }
	int getAge() { return age; }
	virtual void print() { cout << "Person: " << name << ", " << age << endl; }
};

#endif