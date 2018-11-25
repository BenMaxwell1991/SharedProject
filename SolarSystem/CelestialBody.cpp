#include "CelestialBody.h"


CelestialBody::CelestialBody(std::string Name, float Mass, float X, float Y, float Z, float Vx, float Vy, float Vz)
{
	this->Name = Name;
	this->Mass = Mass;
	this->X = X;
	this->Y = Y;
	this->Z = Z;
	this->Vx = Vz;
	this->Vy = Vy;
	this->Vz = Vz;
}