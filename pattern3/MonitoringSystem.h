#include "WorkingAnalysisSystem.h"

class MonitoringSystem
{
	vector<AnalysisSystem> listAnalysisSystem;
public:
	void addAnalysisSystem(AnalysisSystem* newAnalysisSystem);
	void getAllAnalysisResults();
	MonitoringSystem();
	~MonitoringSystem();
};