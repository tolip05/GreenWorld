/*
 * Cell.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#include "Cell.h"
Cell::Cell(const Cell& c){
	int n = animals.size();
	grass = c.grass;
	for(int i = 0;i < n; ++i){
		animals[i] = c.animals[i];
	}
}
Cell& Cell::operator=(const Cell& c){
	    int n = animals.size();
		grass = c.grass;
		for(int i = 0;i < n; ++i){
			animals[i] = c.animals[i];
		}
		return *this;
}
Cell::~Cell() {
	// TODO Auto-generated destructor stub
}

void Cell::decreaseGrass(int num){
	grass -= num;
}
void Cell::addAnimal(Animal *animal){
	animals.push_back(animal);
}
int Cell::getSizeAnimals(){
	return animals.size();
}
Animal* Cell::getAnimal(int n){
	return animals[n];
}
