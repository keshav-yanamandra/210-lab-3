// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 3

#include <iostream>
using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisineType;
    double rating;
    bool hasReviews;
    int maxOccupancy;

    
};

//function prototype 
Restaurant createRestaurant();



int main() {

    Restaurant r1;

    r1 = createRestaurant();
    cout << r1.name;
    cout << r1.address;
    cout << r1.cuisineType;
    cout << r1.hasReviews;
    cout << r1.maxOccupancy;


    return 0;
}
//Write a function that will create a temporary struct, receive user input via the console to populate the struct's data, 
//and returns that struct to the main program.

Restaurant createRestaurant() {
    Restaurant tempRestaurant;

    cout << "Restaurant name: ";
    getline(cin, tempRestaurant.name);

    cout << "address: ";
    getline(cin, tempRestaurant.address);

    cout << "cuisineType: ";
    getline(cin, tempRestaurant.cuisineType);

    cout << "Max occupancy: ";
    cin >> tempRestaurant.maxOccupancy;

    cout << "rating: ";
    cin >> tempRestaurant.rating;

    cout << "hasReviews: ";
    cin >> tempRestaurant.hasReviews;


    return tempRestaurant;
}