/*
 * Cow.cpp
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */
#include <stdlib.h>
#include <ctime>
#include <random>
#include "Cow.h"
#include "Animal.h"
#include "FirstPlanning.h"
#include "SecondPlanning.h"
const int BorderStrategy = 50;
const int RandomBounder = 4;
Cow::~Cow(){
	delete strategy;
}
Cow::Cow(const Cow& c){
	age = c.age;
	strategy = nullptr;
}
Cow& Cow::operator=(const Cow& c){
	age = c.age;
	strategy = nullptr;
	return *this;
}
int Cow::eat(){
  int grassAmount = rand() % RandomBounder;
  grassAmount += age;
  return grassAmount;
}
void Cow::useStrategy(){
  strategy = new FirstPlanning;
  if(age > BorderStrategy){
	  strategy = new SecondPlanning;
  }
  strategy->planning();
}
void Cow::increaseAge(){
	age++;
}
