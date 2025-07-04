
#include <iostream>
using namespace std;
#include"Products.h"
#include"ProductManager.h"
#include"Cart.h"
#include"Customer.h"
#include"Shopping.h"
int main()
{
    ProductManager store;
    store.addProduct(Products("TV", 6000, 3, 10.0, true));
    store.addProduct(Products("Cheese", 50, 10, 0.5, true, true));
    store.addProduct(Products("Card", 100, 20));
   store.listProducts();
    cout << endl;
    Shopping shopping;
    shopping.run(store);
   // Customer ab nya("Aya", 10000);
    /*aya.addProductToCart(store.findProductByName("TV"), 1);
    aya.addProductToCart(store.findProductByName("Cheese"), 11);*/
   // aya.checkOut();

}


