#pragma once
using namespace std;
#include<string>
#include<iostream>
class DataEntery
{
public:
	static string enterNameproduct() {
		string nameProduct;
		cout << "Enter Product Name: ";
		cin.ignore();
		getline(cin, nameProduct);
		
		return nameProduct;
	}
	static int enterQuantity() {
		int quantity;
		cout << "\nEnter Quantity: ";
		cin>> quantity;
		cout << endl;
		return quantity;
	}
	static string enterName() {
		string name;
		cout << "Enter your Name: ";
		
		getline(cin, name);

		return name;
	}
	static double enterBalance() {
		double balance;
		cout << "\nEnter Balance: ";
		cin >> balance;
		
		return balance;
	}

};

