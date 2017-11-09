#include "Director.h"
#include "CarBuilderMiniOne.h"
#include "CarBuilderPassat.h"

int main()
{
	Director director;
	CarBuilderMiniOne miniOne;
	CarBuilderPassat passat;
	director.createCar(miniOne);
	director.createCar(passat);
	
	miniOne.getCar()->echo();
	passat.getCar()->echo();
	
	delete miniOne.getCar();
	delete passat.getCar();
	
	return 0;
}