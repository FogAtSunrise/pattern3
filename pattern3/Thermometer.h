#include "MeasuringDevice.h"
#include <iostream>
using namespace std;

class Thermometer : public MeasuringDevice {
public:
	void getMeasurement() { cout << "Показания термометра получены" << endl; };
};