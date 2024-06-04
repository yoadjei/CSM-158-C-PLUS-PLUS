#include <iostream>

using namespace std;

int main() {
      int numChildren;
    double REGULAR_RATE = 5.00;  // Regular pay per hour
    double OVERTIME_RATE = REGULAR_RATE * 1.5;  // Overtime pay per hour
    double INCOME_TAX_RATE = 0.15;
    double NATIONAL_HEALTH_CONTRIBUTION_RATE = 0.025;
    double DISTRICT_TAX_RATE = 0.01;
    double EDUCATIONAL_FUND_RATE = 0.50;  // Per child
    double hoursWorked; 
    double regularPay;
    double overtimePay;
    double grossPay;
  
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    // Calculation for regular pay
    if (hoursWorked <= 40) {
        regularPay = hoursWorked * REGULAR_RATE;
        overtimePay = 0.0;
    } else {
        regularPay = 40.0 * REGULAR_RATE;
        overtimePay = (hoursWorked - 40.0) * OVERTIME_RATE;
    }

    grossPay = regularPay + overtimePay;

    cout << "Enter the number of children (3 or more): ";
    cin >> numChildren;

    double educationalFund = (numChildren > 3) ? (numChildren - 3) * EDUCATIONAL_FUND_RATE : 0.0;

    // Calculation for deductions
    double incomeTax = grossPay * INCOME_TAX_RATE;
    double nationalHealthContribution = grossPay * NATIONAL_HEALTH_CONTRIBUTION_RATE;
    double districtTax = grossPay * DISTRICT_TAX_RATE;
    double totalDeductions = incomeTax + nationalHealthContribution + districtTax + educationalFund;

    // Calculation for net pay
    double netPay = grossPay - totalDeductions;

    // Display results
    cout << "\nEmployee Salary Calculation" << endl;
    cout << "Hours Worked:        " << hoursWorked << " hours" << endl;
    cout << "Regular Pay:        " << regularPay << " cedis" << endl;
    cout << "Overtime Pay:       " << overtimePay << " cedis" << endl;
    cout << "Gross Pay:          " << grossPay << " cedis" << endl;
    cout << "\nDeductions:" << endl;
    cout << "  Income Tax:       " << incomeTax << " cedis" << endl;
    cout << "  National Health:  " << nationalHealthContribution << " cedis" << endl;
    cout << "  District Tax:    " << districtTax << " cedis" << endl;
    cout << "  Educational Fund:" << educationalFund << " cedis" << endl;
    cout << "  Total Deductions: " << totalDeductions << " cedis" << endl;
    cout << "\nNet Pay:            " << netPay << " cedis" << endl;

    return 0;
}
