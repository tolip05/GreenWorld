/*
 * Animal.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_
class Animal{
public:
	Animal();
	virtual ~Animal()=default;
	virtual int eat() = 0;
    virtual void useStrategy();
    virtual void increaseAge() = 0;
};




#endif /* ANIMAL_H_ */
