#pragma once
#include <string>
#include <array>


class CelestialBody 
{
	public:

		CelestialBody(std::string Name, float Mass, float X, float Y, float Z, float Vx, float Vy, float Vz);

		std::string Name;
		float Mass;
		float X, Y, Z;
		float Vx, Vy, Vz;		
};