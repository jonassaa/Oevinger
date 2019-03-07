#pragma once
class Car
{
private:
	int freeSeats;
public:
	Car(int);
	bool hasFreeSeats() const ;
	void reserveSeat();
};

