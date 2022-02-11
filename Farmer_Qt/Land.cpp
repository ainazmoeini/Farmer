#include "Land.h"

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