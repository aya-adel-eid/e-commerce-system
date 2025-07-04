#pragma once
#include<vector>
#include"Products.h"
class ProductManager
{
   
    private:
        vector<Products> products;

    public:
        void addProduct(const Products& p) {
            products.push_back(p);
        }

        void listProducts() const {
            cout << "\n--- Available Products ---\n";
            for (const auto& p : products) {
                p.printDetails();
            }
        }

       Products* findProductByName(string name) {
            for (auto& p : products) {
                if (p.getName() == name) {
                    return &p;
                }
            }
            return nullptr;  
        }

    
};

