/*
 * Cell.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef CELL_H_
#define CELL_H_
#include <vector>
#include "Animal.h"
#include "Cow.h"
class Cell {
public:
	Cell(int g = 0):grass(g){

	}
	Cell(const Cell&);
	Cell& operator=(const Cell&);
   ~Cell();
   void decreaseGrass(int);
   void addAnimal(Animal*);
   int getSizeAnimals();
   Animal* getAnimal(int n);
private:
   int grass;
   std::vector<Animal*> animals;
};

#endif /* CELL_H_ */
