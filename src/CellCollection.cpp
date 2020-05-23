/*
 * CellCollection.cpp
 *
 *  Created on: Feb 10, 2020
 *      Author: Kosta
 */

#include "CellCollection.h"

CellCollection::CellCollection() {
	// TODO Auto-generated constructor stub

}
CellCollection::CellCollection(const CellCollection& c){
	int n = cells.size();
	for(int i = 0; i < n; ++i){
		cells[i] = c.cells[i];
	}
}
CellCollection& CellCollection::operator=(const CellCollection& c){
	    int n = cells.size();
		for(int i = 0; i < n; ++i){
			cells[i] = c.cells[i];
		}
		return *this;
}
Cell& CellCollection::operator[](int n){
	 return *cells[n];
}
int CellCollection::sizeVector(){
	return cells.size();
}
CellCollection::~CellCollection() {
	// TODO Auto-generated destructor stub
}
void CellCollection::addCell(Cell *c){
	cells.push_back(c);
}
