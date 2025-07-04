#pragma once
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
class Products
{
private:
	string name;
	double price,weight;
	int quantity;
	bool shipping, expirable;
public:
	//Ex:card
	Products(string name,double price,int quantity):name(name),price(price),quantity(quantity), weight(0),
		shipping(false),  expirable(false) {}
	//ex:Tv
	Products(string name, double price, int quantity,double weight,bool shipping) :
		name(name), price(price), quantity(quantity), weight(weight),
		shipping(shipping), expirable(false) {}
	// ex:cheese
	Products(string name, double price, int quantity, double weight, bool shipping,bool expirable) 
		:name(name), price(price), quantity(quantity), weight(weight),
		shipping(shipping), expirable(expirable) {}

	

	string getName() { return name; }
	
	double getPrice() { return price; }
	void setQuantity(int quantity) { this->quantity = quantity; }
	int getQuantity() { return quantity; }
	double getWeight() { return weight; }
	bool isShippable() {
		return shipping;
	}
	void reduceQuantity(int amount) {
		

		if (amount > quantity||amount<=0) {
			throw invalid_argument("Cannot reduce more than available quantity!\n");
			
			return;
		}

		quantity -= amount;
	}
	bool isExpirable() { return expirable; }
	void printDetails()const {
		cout << "Name: " << name << "\n Price: " << price
			<< "\n Quantity: " << quantity << endl;
		if (shipping)
			cout << "Shippable | Weight: " << weight << " kg" << endl;
		if (expirable)
			cout << "Expirable product" << endl;
		cout << "--------------------------" << endl;
	}


};

