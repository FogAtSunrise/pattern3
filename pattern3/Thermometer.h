#include "MeasuringDevice.h"
#include <iostream>
using namespace std;

class Thermometer : public MeasuringDevice {
public:
	void getMeasurement() { cout << "��������� ���������� ��������" << endl; };
};