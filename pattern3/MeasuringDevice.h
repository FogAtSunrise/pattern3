
#ifndef _MEASURE 
#define _MEASURE

// интерфейс измерительных устройств
class MeasuringDevice
{
public:
	virtual void getMeasurement() = 0;
};
#endif