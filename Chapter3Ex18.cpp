/*
Title: Chapter 3 Exercise 18 - Interest Earned
File Name: Chatper3Ex18.cpp
Programmer: Tyler Hively
Date: 10/16/2024
Requirements:

Write a program that asks for the principal, the interest rate, 
and the number of times the interest is compounded.
It should display a report similar to:

Interest Rate:          4.25%
Times Compounded:       12
Principal:              $1000.00
Interest:               $43.34
Amount in Savings:      $1043.34
*/


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double accountPrincipal;
	double interestRate;
	double timesCompounded;
	double interestAccrued;
	double savingsAmount;

	cout << "------[Interest Account Earnings Calculator]-------" << endl;
	cout << endl;
	cout << "Please input your savings account balance: " << endl;
	cin >> accountPrincipal;
	cout << "Please input the interest rate for your account in decimal value: " << endl;
	cin >> interestRate;
	cout << "Please input the number of times your account is expected to compound: " << endl;
	cin >> timesCompounded;

	interestAccrued = accountPrincipal * interestRate;

	savingsAmount = accountPrincipal * pow(1 + interestRate / timesCompounded, timesCompounded);
	cout << endl;
	cout << "-------[Calculator Results]-------" << endl;
	cout << endl;
	cout << "Principal:          $" << accountPrincipal << endl;
	cout << "Interest Rate:       " << interestRate << "%" << endl;
	cout << "Times Compounded:    " << timesCompounded << endl;
	cout << "Interest Earned:    $" << interestAccrued << endl;
	cout << "Amount in Savings:  $" << savingsAmount << endl;



}
