/*
 * Cow.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef COW_H_
#define COW_H_
#include "Animal.h"
#include "Strategy.h"
class Cow : public Animal{
public:
	Cow(int ag=0) :age(ag){
		strategy = nullptr;
	}
	Cow(const Cow&);
   ~Cow();
   Cow& operator=(const Cow&);
   int eat();
   void useStrategy();
   void increaseAge();
private:
   int age;
   Strategy *strategy;
};

#endif /* COW_H_ */
