#include "Employee.h"
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H

class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;

public:
	ProductionWorker();

	ProductionWorker(int shift, double rate);

	int getShift() { return shift; }
	double getHourlyPayRate() { return hourlyPayRate; }

	void setShift(int);
	void setHourlyPayRate(double);
};

#endif // !PRODUCTION_WORKER_H