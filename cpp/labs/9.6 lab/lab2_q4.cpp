#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double yardLength, treeRadius, spaceBetweenTrees;
    
    // Prompt the user to enter yard length, tree radius, and space between trees
    cout << "Enter the length of the yard (in meters): ";
    cin >> yardLength;
    cout << "Enter the radius of a fully grown tree (in meters): ";
    cin >> treeRadius;
    cout << "Enter the required space between fully grown trees (in meters): ";
    cin >> spaceBetweenTrees;
    
    // Calculate the area occupied by one tree
    double treeArea = M_PI * pow(treeRadius, 2);
    
    // Calculate the area required per tree (including spacing)
    double totalAreaPerTree = treeArea + (M_PI * pow(spaceBetweenTrees + treeRadius, 2));
    
    // Calculate the number of trees that can be planted
    int numberOfTrees = static_cast<int>(yardLength / (totalAreaPerTree));
    
    // Calculate the total space occupied by the trees
    double totalSpaceOccupied = numberOfTrees * totalAreaPerTree;

    // Output the results
    cout << "Number of trees that can be planted: " << numberOfTrees << endl;
    cout << "Total space occupied by trees (in square meters): " << totalSpaceOccupied << endl;
    


    return 0;
}
