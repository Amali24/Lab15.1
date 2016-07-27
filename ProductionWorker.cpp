#include "ProductionWorker.h"

void ProductionWorker::setShift(int shift)
{
	this->shift = shift;
}
void ProductionWorker::setHourlyPayRate(double rate)
{
	hourlyPayRate = rate;
}

ProductionWorker::ProductionWorker() {
	shift = 1;
	hourlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(int shift, double rate) {
	this->shift = shift;
	hourlyPayRate = rate;
}
