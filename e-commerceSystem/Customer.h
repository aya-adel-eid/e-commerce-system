#pragma once
#include"Cart.h"
#include<stdexcept>

class Customer
{
	string name;
	Cart cart;
	double balance;
public:
	Customer():name("guest "),balance(0){}
	Customer(string name, double balance) :
		name(name) {
		setBalance(balance);
	}
	string getNameUser()const { return name; }
	double getBalance()const { return balance; }
	void addProductToCart(Products* product, int quantity) {
		if (balance < product->getPrice()) {
			cout << "Balance is insufficint\n";
			return;
		}

		cart.addToCart(product, quantity);
		
	}
	void setBalance(double balance) {
		if(balance<cart.getTotalAmount())throw invalid_argument("Balance less than Total Amount!");
		this->balance = balance;
	}
	void checkBalance() {
		cout << "Balance: " << balance  <<"EGP\n" << endl;
	}
	void processPayment() {
		balance -= cart.getTotalAmount();
	}
	//
	void setCart(const Cart& c) {
		cart = c;
	}
	void checkOut() {
		cout << "\n Checkout Receipt for " << name << "\n";
		cart.printCart();
		cout << "\n---------------------------------------\n";
		cout << "\n Paid: " << cart.getTotalAmount() << " EGP\n";
		processPayment();
		cout << "Balance: " << balance;
		cart.clearCart();
	}
	
};

