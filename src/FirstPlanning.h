/*
 * FirstPlanning.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef FIRSTPLANNING_H_
#define FIRSTPLANNING_H_
#include "Strategy.h"
class FirstPlanning : public Strategy{
public:
	FirstPlanning();
   ~FirstPlanning();
    void planning();
};

#endif /* FIRSTPLANNING_H_ */
