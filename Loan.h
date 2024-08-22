#pragma once
#include <vector>

class Loan
{
public:
	Loan(double annualInterestRate, double principal, int totalMonths, double monthlyPayment) :
		m_AnnualInterestRate(annualInterestRate), m_Principal(principal), m_Months(totalMonths), m_MonthlyPayment(monthlyPayment){};

	double getPrincipal() const { return m_Principal; }
	double getAnnualInterestRate() const { return m_AnnualInterestRate; }
	int getMonths() const { return m_Months; }
	double getMonthlyPayment() const { return m_MonthlyPayment; }

	void applyAdvancedPayment(double amount, int month);

private:
	double m_Principal;
	double m_AnnualInterestRate;
	double m_MonthlyPayment;
	int m_Months;
};

