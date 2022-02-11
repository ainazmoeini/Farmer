#include "Farmer.h"

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
