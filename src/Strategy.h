/*
 * Strategy.h
 *
 *  Created on: Feb 9, 2020
 *      Author: Kosta
 */

#ifndef STATE_H_
#define STATE_H_

class Strategy {
public:
	virtual ~Strategy() = default;
	Strategy();
	virtual void planning();
};

#endif /* STATE_H_ */
