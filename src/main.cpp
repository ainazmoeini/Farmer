#include <iostream>
#include <string>
#include "Farmer.h"
#include "Land.h"
#include "Scope.h"
#include "Seed.h"
#include "Tool.h"

using namespace std;

int main()
{
	Farmer farmer("Ainaz",20);
	Land land1(100, 100, 10);
	Seed seed1("Beans", 1.5, 200);
	Seed seed2("Lentil", 1, 120);
	Seed seed3("Wheat", 0.5, 400);
	Seed seed4("Barley", 3, 85);
	Tool tool1("Shovel", 1500);
	Tool tool2("Tractor", 30000);
	Tool tool3("Sickle", 800);
	Tool tool4("Rope", 1500);
	farmer.addBalance(1000000);
	farmer.buyLand(&land1);
	farmer.buySeed(&seed1);
	farmer.buySeed(&seed2);
	farmer.buySeed(&seed3);
	farmer.buySeed(&seed4);
	farmer.buyTool(&tool4);
	farmer.buyTool(&tool3);
	farmer.buyTool(&tool2);
	farmer.buyTool(&tool1);
	farmer.print();
	return 0;
}