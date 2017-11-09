#include "CarBuilderPassat.h"

CarBuilderPassat::CarBuilderPassat() :
	actualCar(nullptr)
{
}

void CarBuilderPassat::ConstructCar()
{
	actualCar = new Car();
}	
void CarBuilderPassat::ConstructMotor()
{
	actualCar->setMotor(Car::MOTOR::DIESEL);
}
void CarBuilderPassat::ConstrucColor()
{
	actualCar->setColor(Car::COLOR::BLACK);
}
void CarBuilderPassat::ConstructType()
{
	actualCar->setType(Car::TYPE::SEDAN);
}
Car * CarBuilderPassat::getCar()
{
	return this->actualCar;
}