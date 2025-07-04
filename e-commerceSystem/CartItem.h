#pragma once
#include"Products.h"
class CartItem
{
private:
    Products* product;
    int quantity;

public:
    CartItem(Products* product, int quantity)
        : product(product), quantity(quantity) {
    }

    Products* getProduct() const { return product; }
    int getQuantity() const { return quantity; }

    double getTotalPrice() const {
        return product->getPrice() * quantity;
    }

    double getShippingWeight() const{
        return product->isShippable() ? product->getWeight() * quantity : 0;
    }
};

