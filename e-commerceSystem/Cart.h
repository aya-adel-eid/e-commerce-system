#pragma once
#include"CartItem.h"
#include<vector>
#include<stdexcept>

class Cart
{
private:
    vector<CartItem> items;

public:
    
    void addToCart(Products* product, int quantity) {
        if (quantity > product->getQuantity() || quantity == 0) {
            throw invalid_argument("Not Available!");
            
           
        }

        items.push_back(CartItem(product, quantity));
        product->reduceQuantity(quantity);  
        cout << "Added To Cart Successfully.\n";
    }

    bool isEmpty() const {
        return (items.empty());
    }

    double getSubtotal() const {
        double total = 0;
        for (const auto& item : items) {
            total += item.getTotalPrice();
        }
        return total;
    }

    double getShippingFees()const  {
        double totalWeight = 0;
        for (const auto& item : items) {
            totalWeight += item.getShippingWeight();
        }
        return totalWeight * 5;  
    }

    double getTotalAmount() const {
        return getSubtotal() + getShippingFees();
    }

    void printCart() const {
        cout << "\n***Shipment notice***\n";
        for (const auto& item : items) {
            cout << " x" << item.getQuantity()
                << "  " << item.getProduct()->getName()
                << "      " << item.getProduct()->getWeight() << " KG\n";
            
        }
        cout << "\n***CHECKOUT RECEIPT***\n";
        for (const auto& item : items) {
            cout << " x" << item.getQuantity()
                << "  " << item.getProduct()->getName()
                << "      " << item.getTotalPrice() << " EGP\n";
        }
        cout << "\n--------------------------------------------\n";
        cout << "Subtotal    " << getSubtotal() << " EGP\n";
        cout << "Shipping    " << getShippingFees() << " EGP\n";
        cout << "Amount      " << getTotalAmount() << " EGP\n";
    }

    void clearCart() {
        items.clear();
    }
};

