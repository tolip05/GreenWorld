/*
 * Farm.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef FARM_H_
#define FARM_H_
#include "Animal.h"
#include <string>
class Farm {
public:
	Farm();
   ~Farm();
   Animal* makeAnimal(std::string typeAnimal);
private:
   Animal *animal;
};

#endif /* FARM_H_ */
