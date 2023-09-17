#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float salesTaxPercent, salesTaxDecimal, discount, taxAmount, discountPercent, totalDiscountedCost, total;
    int numOfRooms, daysBooked, totalCost;
    string event;

    int oneRoomCost = 100;

    cout << "Please enter the # of rooms booked, " << endl
         << "the # of days the rooms are booked, " << endl
         << "and the sales tax (as a percent)" << endl;

    cin >> numOfRooms >> daysBooked >> salesTaxPercent;

    salesTaxDecimal = salesTaxPercent / 100;

    if (numOfRooms < 10 && numOfRooms >= 0) {

        totalCost = oneRoomCost * numOfRooms * daysBooked;
        taxAmount = totalCost * salesTaxDecimal;

        total = totalCost + taxAmount;

        cout << "Cost of one room rent: $" << oneRoomCost << endl
             << "Discount applicable: none" << endl
             << "Number of rooms booked: " << numOfRooms << endl
             << "Number of days booked: " << daysBooked << endl
             << "Total cost of rooms: $" << totalCost << endl
             << "Sales tax: $" << taxAmount << endl
             << "Total billing: $" << total << endl;

    } else if (numOfRooms >= 10 && numOfRooms < 20) {

        if (daysBooked >= 3) {

            discount = 0.15;
            discountPercent = discount * 100;

            totalDiscountedCost = oneRoomCost * numOfRooms * daysBooked * 0.85;
            taxAmount = totalDiscountedCost * salesTaxDecimal;

            total = totalDiscountedCost + taxAmount;

            cout << "Cost of one room rent: $" << oneRoomCost << endl
                 << "Discount applicable: "<< discountPercent << "%" << endl
                 << "Number of rooms booked: " << numOfRooms << endl
                 << "Number of days booked: " << daysBooked << endl
                 << "Total cost of rooms: $" << totalDiscountedCost << endl
                 << "Sales tax: $" << taxAmount << endl
                 << "Total billing: $" << total << endl;

        } else {

            discount = 0.10;
            discountPercent = discount * 100;

            totalDiscountedCost = oneRoomCost * numOfRooms * daysBooked * 0.9;
            taxAmount = totalDiscountedCost * salesTaxDecimal;

            total = totalDiscountedCost + taxAmount;

            cout << "Cost of one room rent: $" << oneRoomCost << endl
                 << "Discount applicable: "<< discountPercent << "%" << endl
                 << "Number of rooms booked: " << numOfRooms << endl
                 << "Number of days booked: " << daysBooked << endl
                 << "Total cost of rooms: $" << totalDiscountedCost << endl
                 << "Sales tax: $" << taxAmount << endl
                 << "Total billing: $" << total << endl;

        }

    } else if (numOfRooms >= 20 && numOfRooms < 30) {

        if (daysBooked >= 3) {

            discount = 0.25;
            discountPercent = discount * 100;

            totalDiscountedCost = oneRoomCost * numOfRooms * daysBooked * 0.75;
            taxAmount = totalDiscountedCost * salesTaxDecimal;

            total = totalDiscountedCost + taxAmount;

            cout << "Cost of one room rent: $" << oneRoomCost << endl
                 << "Discount applicable: "<< discountPercent << "%" << endl
                 << "Number of rooms booked: " << numOfRooms << endl
                 << "Number of days booked: " << daysBooked << endl
                 << "Total cost of rooms: $" << totalDiscountedCost << endl
                 << "Sales tax: $" << taxAmount << endl
                 << "Total billing: $" << total << endl;

        } else {

            discount = 0.20;
            discountPercent = discount * 100;

            totalDiscountedCost = oneRoomCost * numOfRooms * daysBooked * 0.8;
            taxAmount = totalDiscountedCost * salesTaxDecimal;

            total = totalDiscountedCost + taxAmount;

            cout << "Cost of one room rent: $" << oneRoomCost << endl
                 << "Discount applicable: "<< discountPercent << "%" << endl
                 << "Number of rooms booked: " << numOfRooms << endl
                 << "Number of days booked: " << daysBooked << endl
                 << "Total cost of rooms: $" << totalDiscountedCost << endl
                 << "Sales tax: $" << taxAmount << endl
                 << "Total billing: $" << total << endl;

        }

    } else if (numOfRooms >= 30) {

        if (daysBooked >= 3) {

            discount = 0.35;
            discountPercent = discount * 100;

            totalDiscountedCost = oneRoomCost * numOfRooms * daysBooked * 0.65;
            taxAmount = totalDiscountedCost * salesTaxDecimal;

            total = totalDiscountedCost + taxAmount;

            cout << "Cost of one room rent: $" << oneRoomCost << endl
                 << "Discount applicable: "<< discountPercent << "%" << endl
                 << "Number of rooms booked: " << numOfRooms << endl
                 << "Number of days booked: " << daysBooked << endl
                 << "Total cost of rooms: $" << totalDiscountedCost << endl
                 << "Sales tax: $" << taxAmount << endl
                 << "Total billing: $" << total << endl;

        } else {

            discount = 0.30;
            discountPercent = discount * 100;

            totalDiscountedCost = oneRoomCost * numOfRooms * daysBooked * 0.7;
            taxAmount = totalDiscountedCost * salesTaxDecimal;

            total = totalDiscountedCost + taxAmount;

            cout << "Cost of one room rent: $" << oneRoomCost << endl
                 << "Discount applicable: "<< discountPercent << "%" << endl
                 << "Number of rooms booked: " << numOfRooms << endl
                 << "Number of days booked: " << daysBooked << endl
                 << "Total cost of rooms: $" << totalDiscountedCost << endl
                 << "Sales tax: $" << taxAmount << endl
                 << "Total billing: $" << total << endl;

        }

    } else {

        cout << "Invalid input." << endl;

    }

    return 0;

}