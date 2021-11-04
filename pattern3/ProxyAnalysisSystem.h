#include "AnalysisSystem.h"
#include "WorkingAnalysisSystem.h"


class ProxyAnalysisSystem : public  AnalysisSystem
{
	WorkingAnalysisSystem* Prox;
public:
	void addDevice(MeasuringDevice* newDevice);
	void getAllMeasurements();
	ProxyAnalysisSystem(WorkingAnalysisSystem* newSystem) { Prox = newSystem; }
	~ProxyAnalysisSystem() { delete Prox; };
};