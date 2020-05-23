//============================================================================
// Name        : GreenWordB.cpp
// Author      : Kosta
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Farm.h"
#include "GrassField.h"
#include "Cow.h"
using namespace std;
const string AnimalType = "cow";
int main() {
	cout<<"Enter CBRI\n";
    Farm farm;
    GrassField grassField(&farm);
	int CBRI;
	cin>>CBRI;
	int fieldCount;
	cout<<"Enter sizeField"<<endl;
	cin>>fieldCount;
	grassField.initializeField(fieldCount);
	int countOfSteps;
	cout<<"Enter count of steps"<<endl;
	cin>>countOfSteps;
	int count = 0;
	while(countOfSteps > 0){
		if(count == CBRI){
          Animal* animal = farm.makeAnimal(AnimalType);
		  grassField.randomSetAnimal(animal);
		  count = 0;
		}
    //TODO
		count++;
		countOfSteps--;
	}
	return 0;
}
