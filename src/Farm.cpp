/*
 * Farm.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#include "Farm.h"
#include "Animal.h"
#include "Cow.h"
#include <string>
const std::string ObjectTypeCow = "cow";
Farm::Farm() {
	// TODO Auto-generated constructor stub

}

Farm::~Farm() {
	// TODO Auto-generated destructor stub
}
Animal* Farm::makeAnimal(std::string typeAnimal){
	// TODO Exception!!!
	if(typeAnimal == ObjectTypeCow){
		animal = new Cow;
	}
    return animal;
}
