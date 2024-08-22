#include "RepaymentPlan.h"
#include <iostream>
#include <iomanip>

double RepaymentPlan::roundToTwoDecimalPlaces(double value)
{
	return ceil(value * 100) / 100;
}

std::vector<double> RepaymentPlan::calculateMonthlyInterestRate()
{
	double principal = m_Loan.getPrincipal();
	double monthlyPayment = m_Loan.getMonthlyPayment();
	double annualInterestRate = m_Loan.getAnnualInterestRate();
	int totalMonths = m_Loan.getMonths();

	for (int i = 1; i <= totalMonths; i++)
	{
		double currentInterest = roundToTwoDecimalPlaces(principal *(annualInterestRate / 100 /12));
		double principalPayment = monthlyPayment - currentInterest;
		principal -= principalPayment;
		m_MonthlyInterestRates.push_back(currentInterest);
		std::cout << i << "      | " << std::fixed << std::setprecision(2) << currentInterest << std::endl;
	}
	return m_MonthlyInterestRates;
}

void RepaymentPlan::printPlan()
{
	calculateMonthlyInterestRate();
}