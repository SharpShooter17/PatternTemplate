#pragma once
#include "Car.h"

class CarBuilder
{
private:

protected:
public:
	virtual void ConstructCar() = 0;
	virtual void ConstructMotor() = 0;
	virtual void ConstrucColor() = 0;
	virtual void ConstructType() = 0;
	
	virtual Car * getCar() = 0;
};