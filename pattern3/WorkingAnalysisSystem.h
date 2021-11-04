
#include "AnalysisSystem.h"
#include <vector>
#include <iostream>
using namespace std;
#include "MeasuringDevice.h"

typedef MeasuringDevice* typeDevice;

class WorkingAnalysisSystem : public  AnalysisSystem
{
private:
	vector<typeDevice> listDevices;
public:
	void addDevice(MeasuringDevice* newDevice);
	void getAllMeasurements();
	WorkingAnalysisSystem() { listDevices.clear(); }
	~WorkingAnalysisSystem() { listDevices.clear(); };
};