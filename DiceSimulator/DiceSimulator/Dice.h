//pragma once

#ifndef DICE_H
#define DICE_H

#include<string>


class Dice {

private:
	const int value;
	std::string color;

public:
	Dice(const int value = 6, const std::string color = "blank");

	~Dice();

	//Accessors 
	inline const int& getValue() const { return this->value; }
	inline const std::string& getColor() const { return this->color; }

	//Modifiers
	inline void setColor(const std::string color) { this->color = color; }

	//Functions
	const int toss() const;

};

#endif