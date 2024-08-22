#include "RepaymentPlan.h"

using namespace std;

int main()
{
	int numberOfMonths = 0;
	double interestPerYear = 0.0f, currentInterest = 0.0f, monthlyPayment = 0.0f, principal = 0.0f;
	cout << "Type the interest per year: ";
	cin >> interestPerYear;
	cout << "Type the amount of the credit: ";
	cin >> principal;
	cout << "Write the number of months: ";
	cin >> numberOfMonths;
	cout << "Type the current monthly payment: ";
	cin >> monthlyPayment;

	cout << "Months | Interest" << endl;
	
	Loan loan(interestPerYear, principal, numberOfMonths, monthlyPayment);
	RepaymentPlan repaymentPlan(loan);

	repaymentPlan.printPlan();
	return 0;
}