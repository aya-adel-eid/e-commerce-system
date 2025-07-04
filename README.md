This is a simple e-commerce system implemented in C++ using Object-Oriented Programming (OOP).
It allows customers to buy products, some of which may expire or need shipping.
The system manages product data, a shopping cart, and customer checkout, calculating prices, shipping fees, and updating the balance after purchase.
**Main Features**
Define products with name, price, quantity, and optionally weight (for shipping) and expiry.

Add products to a cart with quantity validation.

Calculate total cost including shipping fees.

Ensure the customer has sufficient balance before checkout.

Print a full checkout receipt with cost breakdown and updated balance.
**Main Classes**
##DataEntery
A helper class used to get user input from the console in a clean, reusable way.

Functions:

enterName() – asks the customer to enter their name.

enterBalance() – prompts the customer to enter their initial balance.

enterNameproduct() – allows the user to enter the name of the product they want to buy.

enterQuantity() – gets the quantity of the product the customer wants to purchase.


##Products
Represents a single product in the store.

Attributes:

name, price, quantity, weight, shipping, expirable

Provides functions like:

getPrice(), getName(), getQuantity()

reduceQuantity(int qty)

isShippable(), isExpirable()

##Cart
Stores the customer's selected items.

Uses a list of CartItem objects.

 Methods:

addToCart(Products* product, int quantity)

getSubtotal(), getShippingFees(), getTotalAmount()

printCart() to show a detailed receipt

## CartItem
Represents one product entry in the cart.

Holds:

A pointer to the product

The quantity selected

Methods:

getTotalPrice()

getShippingWeight()

getQuantity(), getProduct()

 ##Customer
Holds customer name, balance, and cart.

Methods:

addProductToCart(Products*, quantity)

processPayment(), checkBalance(), checkOut()

Validates:
If balance is sufficient before checkout

##ProductManager
Manages the list of all products in the system.

Methods:

addProduct(Products*)

listProducts() — displays available items

findProductByName(string name) — used to search for items before adding to cart.