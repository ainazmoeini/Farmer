#include "Scope.h"
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
