#pragma once
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <list>
#include <fstream>
#include "CelestialBody.h"


class ApplicationData {

	public:
		std::vector<CelestialBody> StellarObjects;		

		ApplicationData();

		void loadData();
		void saveData();
		void clearData();

		void printInputData();
		void initialiseInputData(System::Windows::Forms::DataGridView^  aDataGrid);
};

