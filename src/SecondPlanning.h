/*
 * SecondPlanning.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef SECONDPLANNING_H_
#define SECONDPLANNING_H_
#include "Strategy.h"
class SecondPlanning : public Strategy{
public:
	SecondPlanning();
   ~SecondPlanning();
	void planning();
};

#endif /* SECONDPLANNING_H_ */
