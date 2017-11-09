#pragma once
#include "CarBuilder.h"
#include "Car.h"

class CarBuilderMiniOne : public CarBuilder
{
private:
	Car * actualCar;
public:
	CarBuilderMiniOne();
	virtual void ConstructCar();
	virtual void ConstructMotor();
	virtual void ConstrucColor();
	virtual void ConstructType();
	
	virtual Car * getCar();
};