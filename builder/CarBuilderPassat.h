#pragma once
#include "CarBuilder.h"
#include "Car.h"

class CarBuilderPassat : public CarBuilder
{
private:
	Car * actualCar;
public:
	CarBuilderPassat();
	virtual void ConstructCar();
	virtual void ConstructMotor();
	virtual void ConstrucColor();
	virtual void ConstructType();
	
	virtual Car * getCar();
};