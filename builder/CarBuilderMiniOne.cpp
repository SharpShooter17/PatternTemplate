#include "CarBuilderMiniOne.h"

CarBuilderMiniOne::CarBuilderMiniOne() :
	actualCar(nullptr)
{
}

void CarBuilderMiniOne::ConstructCar()
{
	actualCar = new Car();
}	
void CarBuilderMiniOne::ConstructMotor()
{
	actualCar->setMotor(Car::MOTOR::PETROL);
}
void CarBuilderMiniOne::ConstrucColor()
{
	actualCar->setColor(Car::COLOR::GREEN);
}
void CarBuilderMiniOne::ConstructType()
{
	actualCar->setType(Car::TYPE::CABRIOLET);
}
Car * CarBuilderMiniOne::getCar()
{
	return this->actualCar;
}