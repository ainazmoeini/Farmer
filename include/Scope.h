#ifndef SCOPE_H
#define SCOPE_H
#include "Seed.h"

class Scope
{
private:
	int x0, y0, x1, y1;
	Seed *seed;
public:
	Scope(Seed *seed,int x0, int y0, int x1, int y1)
	{
		this->seed = seed;
		this->x0 = x0;
		this->y0 = y0;
		this->x1 = x1;
		this->y1 = y1;
	}
	Scope() {
		x0 = x1 = y0 = y1 = 0;
		seed = new Seed();
	}
	void setSeed(Seed*);
	void setStartingPosition(int, int);
	void setEndingPosition(int, int);
	int getX0() { return x0; }
	int getX1() { return x1; }
	int getY0() { return y0; }
	int getY1() { return y1; }
	Seed* getSeed() { return seed; }
	void print() {
		cout << "Scope:" << endl << "start: (" << x0 << "," << y0 << ") end: (" << x1 << "," << y1 << ") ";
		seed->print();
	}
};

void Scope::setSeed(Seed* seed) {
	this->seed = seed;
}
void Scope::setStartingPosition(int x, int y) {
	x0 = x;
	y0 = y;
}
void Scope::setEndingPosition(int x, int y) {
	x1 = x;
	y1 = y;
}

#endif