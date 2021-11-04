#include "ProxyAnalysisSystem.h"
#include "Thermometer.h"
#include "Barometer.h"
#include "Dosimeter.h"
#include "windows.h"
#include <iostream>
using namespace std;

void test1(){
    //создаю две системы анализа
    WorkingAnalysisSystem* firstSystem = new WorkingAnalysisSystem();
    WorkingAnalysisSystem* secondSystem = new WorkingAnalysisSystem();

    //добавляю в первую систему термометр и барометр
    firstSystem->addDevice(new Thermometer());
    firstSystem->addDevice(new Barometer());

    //добавляю во вторую дозиметр, термометр и барометр
    secondSystem->addDevice(new Dosimeter());
    secondSystem->addDevice(new Thermometer());
    secondSystem->addDevice(new Barometer());

    //запрашиваю у систем показания измерений
    cout << "Опрос систем:\n" << endl;

    cout << "First Analysis System:" << endl;
    firstSystem->getAllMeasurements();

    cout << "\nSecond Analysis System:" << endl;
    secondSystem->getAllMeasurements();
}

void test2() {
    WorkingAnalysisSystem* newSystem = new WorkingAnalysisSystem();
    ProxyAnalysisSystem* proxySystem = new ProxyAnalysisSystem(newSystem);

    //добавляю через прокси дозиметр и барометр
    proxySystem->addDevice(new Dosimeter());
    proxySystem->addDevice(new Barometer());

    //вывожу данные системы напрямую и через прокси

    cout << "Analysis System:" << endl;
    newSystem->getAllMeasurements();

    cout << "\nProxy Analysis System:" << endl;
    proxySystem->getAllMeasurements();
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    test1();
    test2();
}