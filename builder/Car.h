#pragma once

class Car
{
public:
	enum class MOTOR { DIESEL, PETROL, ELECTRIC };
	enum class COLOR { BLACK, WHITE, BLUE, ORANGE, GREY, GREEN, PINK, YELLOW };
	enum class TYPE { SEDAN, CABRIOLET, LIMOUSINE};
	
private:
	MOTOR motor;
	COLOR color;
	TYPE type;
public:	
	Car();
	void setMotor(MOTOR motor);
	void setColor(COLOR color);
	void setType(TYPE type);
	
	void echo();
};