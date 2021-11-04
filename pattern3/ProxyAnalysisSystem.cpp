
#include "ProxyAnalysisSystem.h"

void  ProxyAnalysisSystem::addDevice(MeasuringDevice* newDevice) {
	Prox->addDevice(newDevice);
}


void  ProxyAnalysisSystem::getAllMeasurements() {
	Prox->getAllMeasurements();
}
