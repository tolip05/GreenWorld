/*
 * CellCollection.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Kosta
 */

#ifndef CELLCOLLECTION_H_
#define CELLCOLLECTION_H_
#include <vector>
#include "Cell.h"
class CellCollection {
public:
	CellCollection();
	CellCollection(const CellCollection&);
	CellCollection& operator=(const CellCollection&);
	Cell& operator[](int);
	int sizeVector();
   ~CellCollection();
   void addCell(Cell*);


private:
   std::vector<Cell*>cells;
};

#endif /* CELLCOLLECTION_H_ */
