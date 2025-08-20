#include <map> 
#include <string> 
#include <vector> 
#include <iostream>
#include "AllEnemies.h";

using namespace std;



int getRand() {
	return rand() % 100 + 1;
}

int main()
{
	vector<Orc> allOrcs;
	vector<Wizard> allWizards;
	vector<Stormtrooper> allStormTroopers;



	/*for (int i = 0; i < 50; ++i) {
		allOrcs.emplace_back(getRand());
	}*/

	//for (int i = 0; i < 50; ++i) {
	//	allWizards.emplace_back(getRand());
	//}

	//for (int i = 0; i < 100; ++i) {
	//	allStormTroopers.emplace_back(getRand());
	//}


	//for (auto i : allWizards) {
	//	i.speak();
	//}

	std::cin.get();
}