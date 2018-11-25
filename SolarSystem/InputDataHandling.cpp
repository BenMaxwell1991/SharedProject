#include "InputDataHandling.h"

ApplicationData::ApplicationData(){

};

// Will load an existing .json file of the correct format into the program.
void ApplicationData::loadData() {

	std::cout << "Test Load: #Data Loaded" << std::endl;
};

// Will eventually create a .json file with the data that exists within the table.
void ApplicationData::saveData() {

	std::cout << "Test Save: #Data Saved" << std::endl;
};


// Should simply clear the existing data within the program.
void ApplicationData::clearData() {

	std::cout << "Test Clear: #Goodbye Data" << std::endl;
};

// Prints out InputData to the debug window
void ApplicationData::printInputData() {

	std::cout << "Test Initialised" << std::endl <<
		"Number of objects: " << StellarObjects.size() << std::endl << std::endl;

	for (int i = 0; i < StellarObjects.size(); i++) {
		std::cout << "Object[" << i << "]:" << std::endl
			<< "	Name: " << StellarObjects[i].Name << std::endl
			<< "	Mass: " << StellarObjects[i].Mass << " (kg)" << std::endl
			<< "	X: " << StellarObjects[i].X << " (m)" << std::endl
			<< "	Y: " << StellarObjects[i].Y << " (m)" << std::endl
			<< "	Z: " << StellarObjects[i].Z << " (m)" << std::endl
			<< "	Vx: " << StellarObjects[i].Vx << " (m/s)" << std::endl
			<< "	Vy: " << StellarObjects[i].Vy << " (m/s)" << std::endl
			<< "	Vz: " << StellarObjects[i].Vz << " (m/s)" << std::endl;
	}
};

// Initialises the input data to that of the solar system when main is run.
void ApplicationData::initialiseInputData(System::Windows::Forms::DataGridView^  aDataGrid) {

	std::ifstream inFile("Solar_System.dat", std::ifstream::in);
	CelestialBody aBody = CelestialBody("", 0, 0, 0, 0, 0, 0, 0);
	std::string aLine, aHeader, aData;
	size_t pos;

	while (std::getline(inFile, aLine)) {

		// Find first non whitespace
		pos = aLine.find_first_not_of(" \t");
		
		// If pos is not end position then parse the line
		if (pos != std::string::npos) {

			// Get header for data
			aHeader = aLine.substr(pos);
			aHeader = aHeader.substr(0, aHeader.find_first_of(" \t"));

			// Data begins two characters after '='
			pos = aLine.find_first_of("=") + 2;

			// Get data
			aData = aLine.substr(pos);
			aData = aData.substr(0, aData.find_first_of(" \t"));

			if (aHeader == "Name") {
				aBody.Name = aData;
			}
			else if (aHeader == "Mass") {
				aBody.Mass = strtof(aData.c_str(), NULL);
			}
			else if (aHeader == "X") {
				aBody.X = strtof(aData.c_str(), NULL);
			}
			else if (aHeader == "Y") {
				aBody.Y = strtof(aData.c_str(), NULL);
			}
			else if (aHeader == "Z") {
				aBody.Z = strtof(aData.c_str(), NULL);
			}
			else if (aHeader == "Vx") {
				aBody.Vx = strtof(aData.c_str(), NULL);
			}
			else if (aHeader == "Vy") {
				aBody.Vy = strtof(aData.c_str(), NULL);
			}
			else if (aHeader == "Vz") {
				aBody.Vz = strtof(aData.c_str(), NULL);

				StellarObjects.push_back(aBody);
			};
		}
		else {
			// Line contains nothing but whitespace, skip to next line
			continue;
		};		
	};

	printInputData();

	for (int i = 0; i < StellarObjects.size(); i++) {

		aBody = StellarObjects[i];

		// To put string into data grid, must be a handle to a system string
		System::String^ sysString = gcnew System::String(aBody.Name.c_str());

	    aDataGrid->Rows->Add(sysString, aBody.Mass, aBody.X, aBody.Y, aBody.Z, aBody.Vx, aBody.Vy, aBody.Vz);
	}

	inFile.close();
};