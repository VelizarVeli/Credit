Interest and Repayment Plan Calculator
Overview
The Interest and Repayment Plan Calculator is a C++ console application designed to help users calculate and visualize a loan repayment plan based on annuity payments. The program takes user inputs such as the loan amount, annual interest rate, loan duration in months, and monthly payment amount to generate a detailed repayment schedule. The calculator also supports partial advanced payments and dynamically adjusts the repayment plan accordingly.

Features
Loan Calculation: Calculate the monthly interest and principal breakdown for a given loan based on user inputs.
Repayment Plan Generation: Generate a detailed repayment plan, including monthly interest, principal payment, and remaining balance for each month.
Partial Payment Adjustment: Apply advanced partial payments and recalculate the repayment plan accordingly.
Console Interface: Simple and intuitive console-based user interface for easy interaction.
Extensible Design: Built using Object-Oriented Programming (OOP) principles and design patterns for easy future enhancements, such as supporting different types of loans or localizations.
Project Structure

Loan Class:
Manages the core data and operations related to the loan, such as principal amount, interest rate, and monthly payment.
Provides methods to apply advanced payments and to calculate interest and principal breakdown.

RepaymentPlan Class:
Utilizes the Loan class to generate and print the repayment schedule.
Handles the calculation of monthly interest rates and adjusts the repayment plan dynamically if any advanced payments are made.

Main Program:
Handles user input and initiates the loan calculation and repayment plan generation processes.
Usage

Example
Here’s an example of the program in action:
Type the interest per year: 4.2
Type the amount of the credit: 22601.12
Write the number of months: 60
Type the current monthly payment: 424.69
Months | Interest
1      | 79.11
2      | 77.90
3      | 76.69
4      | 75.47
5      | 74.25
6      | 73.02
7      | 71.79
8      | 70.55
9      | 69.31
10      | 68.07
11      | 66.82
12      | 65.57
13      | 64.31
14      | 63.05
15      | 61.78
16      | 60.51
17      | 59.24
18      | 57.96
19      | 56.68
20      | 55.39
21      | 54.10
22      | 52.80
23      | 51.50
24      | 50.19
25      | 48.88
26      | 47.57
27      | 46.25
28      | 44.92
29      | 43.59
30      | 42.26
31      | 40.92
32      | 39.58
33      | 38.23
34      | 36.88
35      | 35.52
36      | 34.16
37      | 32.79
38      | 31.42
39      | 30.04
40      | 28.66
41      | 27.27
42      | 25.88
43      | 24.49
44      | 23.09
45      | 21.68
46      | 20.27
47      | 18.86
48      | 17.43
49      | 16.01
50      | 14.58
51      | 13.14
52      | 11.70
53      | 10.26
54      | 8.81
55      | 7.35
56      | 5.89
57      | 4.43
58      | 2.95
59      | 1.48
60      | -0.00
...
Future Enhancements
The project is designed with extensibility in mind, making it easy to add new features, such as:
Calculating the installment payment, early repayment and dates information.
Support for Different Loan Types: Extend the program to handle different types of loans, such as fixed-rate and adjustable-rate loans.
Localization: Add support for multiple languages to cater to a wider audience.
Graphical User Interface (GUI): Develop a GUI to enhance user experience and make the tool more user-friendly.
Contributing
Contributions are welcome! If you'd like to contribute, please fork the repository and use a feature branch. Pull requests are warmly welcome.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Contact
For any questions or suggestions, please contact me at velizar.velikov@gmail.com.
