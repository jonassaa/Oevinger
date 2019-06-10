#include "Car.h"

Car::Car(int seats)
{
	this->freeSeats = seats;
}

bool Car::hasFreeSeats() const {
	if (this->freeSeats > 0) {
		return true;
	}
	else {
		return false;
	}
}

void Car::reserveSeat() {
	--this->freeSeats;
}

