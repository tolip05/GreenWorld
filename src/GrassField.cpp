/*
 * GrassField.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#include "GrassField.h"
#include "Cell.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#include <vector>
#include "CellCollection.h"

int const DefaultFieldSizeRows = 7;
int const DefaultResizeColsSize = 5;
GrassField::GrassField(Farm *f) {
 farm = f;
}

GrassField::~GrassField() {
	delete farm;
}
void GrassField::randomSetAnimal(Animal *animal){
 int rowSize = field.size();
 int colSize = rowSize + DefaultResizeColsSize;
 int row = rand() % (rowSize);
 int col = rand() % (colSize);
 field[row][col]->addAnimal(animal);
}
void GrassField::initializeField(int fieldSize = DefaultFieldSizeRows){
    int n = DefaultResizeColsSize + fieldSize;
    for(int i = 0;i < fieldSize; ++i){
    	field.push_back(std::vector<Cell*>());
    }
	for(int row = 0; row < fieldSize; ++row){
    	 for(int col = 0; col < n; ++col){
    		 Cell *c = new Cell(row + col);
    		 if(c != nullptr){
    			 field[row].push_back(c);
    		 }
    	 }
     }
}

void GrassField::animalStartEat(){
	CellCollection cells;
	int n = cells.sizeVector();
	for(int i = 0; i < n; ++i){
	  int sizeAnimals = cells[i].getSizeAnimals();
      if(sizeAnimals){
    	  for(int j = 0;j < sizeAnimals; ++sizeAnimals){
              Animal * a = cells[i].getAnimal(i);
              int amountOfEat = a->eat();
              a->increaseAge();
              cells[i].decreaseGrass(amountOfEat);
              a->useStrategy();
    	  }
      }
	}

}
CellCollection GrassField::getCells(CellCollection& c){
	     int fDimensionSize = field.size();
		 int sDimensionSize = DefaultResizeColsSize + fDimensionSize;
	     for(int row = 0;row < fDimensionSize; ++row){
	    	 for(int col = 0; col < sDimensionSize; ++col){
	    		 Cell *cell = field[row][col];
	    		 c.addCell(cell);
	    	 }
	     }
	     return c;
}
