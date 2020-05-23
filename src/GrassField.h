/*
 * GrassField.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef GRASSFIELD_H_
#define GRASSFIELD_H_
#include <vector>
#include "Cell.h"
#include "Farm.h"
#include "CellCollection.h"
class GrassField {
public:
	GrassField(Farm*);
   ~GrassField();
   void initializeField(int);
   void randomSetAnimal(Animal*);
   void animalStartEat();

private:
   Farm * farm;
   CellCollection getCells(CellCollection&);
   std::vector<std::vector<Cell*> >field;
};

#endif /* GRASSFIELD_H_ */
