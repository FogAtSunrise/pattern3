#include "MeasuringDevice.h"
#include <iostream>
using namespace std;
class Barometer : public MeasuringDevice {
	public:
	void getMeasurement() { cout << "Показания барометра получены" << endl; };
};