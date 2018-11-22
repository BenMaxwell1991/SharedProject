#include "InputDataHandling.h"

ApplicationData::ApplicationData(){

};

// Initialises the input data to that of the solar system when main is run.
void ApplicationData::initialiseInputData() {
	CelestialBody aBody;

	aBody.Name = "Sun";
	aBody.Mass = 10;

	aBody.Velocity[0] = 0;
	aBody.Velocity[1] = 1000 * StellarObjects.size();
	aBody.Velocity[2] = 0;

	aBody.Acceleration[0] = 0;
	aBody.Acceleration[1] = 0;
	aBody.Acceleration[2] = 0;

	StellarObjects.push_back(aBody);

	std::cout << "Test Initialised" << std::endl <<
				 "Number of objects: " << StellarObjects.size() << std::endl;

	for (int i = 0; i < StellarObjects.size(); i++) {
		std::cout << "Object[" << i <<"] Velocity[1]: " << StellarObjects[i].Velocity[1] << std::endl;
	}	
};

// Will load an existing .json file of the correct format into the program.
void ApplicationData::loadData() {
	CelestialBody Sun, Earth;

	Sun.Name = "Burning Solar Boi";

	std::cout << "Test Load: #Data Loaded" << std::endl;
};

// Will eventually create a .json file with the data that exists within the table.
void ApplicationData::saveData() {
	CelestialBody Sun, Earth;

	Sun.Name = "Burning Solar Boi";

	std::cout << "Test Save: #Data Saved" << std::endl;
};


// Should simply clear the existing data within the program.
void ApplicationData::clearData() {
	CelestialBody Sun, Earth;

	Sun.Name = "Burning Solar Boi";

	std::cout << "Test Clear: #Goodbye Data" << std::endl;
};