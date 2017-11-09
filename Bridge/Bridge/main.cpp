#include <iostream>
#include <exception>

class ImplVehicle {
public:
	virtual void enter() = 0;
	virtual void startMotor() = 0;
	virtual ~ImplVehicle() {};
protected:
	ImplVehicle() {};
};

class ImpMotocycle : public ImplVehicle {
public:
	ImpMotocycle() : ImplVehicle() {}
	virtual void enter() { std::cout << "Get on the motor\n"; }
	virtual void startMotor() { std::cout << "Brum brum\n"; }
	void makeWheele() { std::cout << "Make a stunt: wheele xD\n"; }
	virtual ~ImpMotocycle() {}
};

class ImpCar : public ImplVehicle {
public:
	ImpCar() : ImplVehicle() {}
	virtual void enter() { std::cout << "Get into the car\n"; }
	virtual void startMotor() { std::cout << "Wrum wrum\n"; }
	void horn() { std::cout << "Ti tit!\n"; }
	virtual ~ImpCar() {};
};

class Vehicle {
public:
	Vehicle() { setImpVehicle( nullptr ); }
	virtual void enter() { _ImpVehicle->enter(); }
	virtual void startMotor() { _ImpVehicle->startMotor(); }
	~Vehicle() 
	{
		if (_ImpVehicle != nullptr)
			delete _ImpVehicle; 
	}
protected:
	ImplVehicle * getImpVehicle() 
	{
		if (_ImpVehicle == nullptr)
			throw std::exception();
		return _ImpVehicle; 
	}
	void setImpVehicle(ImplVehicle * imp) { this->_ImpVehicle = imp; }
private:
	ImplVehicle * _ImpVehicle;
};

class Motocycle : public Vehicle {
public:
	Motocycle()
	{
		setImpVehicle(new ImpMotocycle);
	}
	
	void makeWheele() 
	{  
		ImpMotocycle * imp = dynamic_cast<ImpMotocycle*>(Vehicle::getImpVehicle());
		if (imp != nullptr)
			imp->makeWheele();
		else 
			throw std::exception();
	}
};

class Car : public Vehicle {
public:
	Car()
	{
		setImpVehicle(new ImpCar());
	}
	void horn() 
	{
		ImpCar * imp = dynamic_cast<ImpCar*>(Vehicle::getImpVehicle());
		if (imp != nullptr)
			imp->horn();
		else
			throw std::exception();
	}
};

int main()
{
	Vehicle * motocycle = new Motocycle();
	Vehicle * car = new Car();

	motocycle->enter();
	motocycle->startMotor();

	car->enter();
	car->startMotor();

	dynamic_cast<Motocycle*>(motocycle)->makeWheele();
	dynamic_cast<Car*>(car)->horn();

	delete car;
	delete motocycle;

	return 0;
}