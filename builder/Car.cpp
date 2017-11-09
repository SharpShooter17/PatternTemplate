#include "Car.h"
#include <iostream>

Car::Car()
{
}

void Car::setMotor(Car::MOTOR motor)
{
	this->motor = motor;
}
void Car::setColor(Car::COLOR color)
{
	this->color = color;
}
void Car::setType(Car::TYPE type)
{
	this->type = type;
}

void Car::echo()
{
	switch (motor)
	{
	case Car::MOTOR::DIESEL: 
		std::cout << "Motor: Diesel";
		break;
	case Car::MOTOR::PETROL :
		std::cout << "Motor: Petrol";
		break;
	case Car::MOTOR::ELECTRIC:
		std::cout << "Motor: Electric";
		break;	
	}
	switch(color)
	{
	case Car::COLOR::GREEN:
		std::cout << ", Color: green";
		break;
	case Car::COLOR::BLACK:
		std::cout << ", Color: black";
		break;
	}
	switch(type)
	{
	case Car::TYPE::SEDAN:
		std::cout << ", type: sedan";
		break;
	case Car::TYPE::CABRIOLET:
		std::cout << ", type: cabriolet";
		break;
	case Car::TYPE::LIMOUSINE:
		std::cout << ", type: limousine";
		break;
	}
	std::cout << std::endl;
}