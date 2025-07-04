#pragma once
#include"DataEntery.h"
#include"ProductManager.h"
#include"Customer.h"
#include <cstdlib>
class Shopping
{      

public:
    void show() {



        cout << "\nType 'done' when you finish shopping.\n";


    }

    void run(ProductManager& productManager) {
        string name = DataEntery::enterName();
        double balance = DataEntery::enterBalance();

        Customer customer(name, balance);
        cout << endl;
        show();

        while (true) {
            string nameProduct = DataEntery::enterNameproduct();
            if (nameProduct == "done") break;

            int quantity = DataEntery::enterQuantity();

            Products* p = productManager.findProductByName(nameProduct);
            if (!p) {
                cout << " Product not found!\n";
                continue;
            }

            customer.addProductToCart(p, quantity);
        }
        cout << "\n---------------------------------\n\n";
        customer.checkOut();
    }



};

