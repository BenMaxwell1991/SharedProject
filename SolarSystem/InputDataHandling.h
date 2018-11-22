#pragma once
#include <iostream>
#include <vector>
#include <array>


struct CelestialBody {
	std::string Name;
	float Mass;
	std::array<float, 3> Velocity;
	std::array<float, 3> Acceleration;
};

class ApplicationData {

	private:

		std::vector<CelestialBody> StellarObjects;

	public:

		ApplicationData();

		void initialiseInputData();
		void loadData();
		void saveData();
		void clearData();
};

