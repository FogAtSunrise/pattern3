#include "MeasuringDevice.h"
#include <iostream>
using namespace std;
class Dosimeter : public MeasuringDevice {
public:
	void getMeasurement() { cout << "Показания дозиметра получены" << endl; };
};