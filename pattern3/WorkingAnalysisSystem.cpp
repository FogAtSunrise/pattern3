#include "WorkingAnalysisSystem.h"

void WorkingAnalysisSystem::addDevice(MeasuringDevice* newDevice) {
	listDevices.push_back(newDevice);
}


void WorkingAnalysisSystem::getAllMeasurements() {

	for (vector<typeDevice>::iterator it = listDevices.begin(); it != listDevices.end(); it++) {
		(*it)->getMeasurement();
	}
}

