#include "Director.h"

void Director::createCar(CarBuilder & builder)
{
	builder.ConstructCar();
	builder.ConstructMotor();
	builder.ConstrucColor();
	builder.ConstructType();
}