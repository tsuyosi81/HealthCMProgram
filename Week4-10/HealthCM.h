#pragma once

class HealthCM
{
private:
	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;
	const double FANDF_RATE = 10.0;

	int choice;           // Menu choice
	int months;           // Number of months
	double charges;       // Monthly charges


public:
	void calcHCMFees();
	void showMenu();
	void displayFees();
};
