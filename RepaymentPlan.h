#pragma once
#include "Loan.h"
#include <vector>
#include<iostream>

class RepaymentPlan
{
public:
	RepaymentPlan(Loan loan) :m_Loan(loan) {}
	void printPlan();
	std::vector<double> calculateMonthlyInterestRate();
	double roundToTwoDecimalPlaces(double value);

private:
	Loan m_Loan;
	std::vector<double> m_MonthlyInterestRates;
};