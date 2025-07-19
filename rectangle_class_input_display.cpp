/* 
📘 Problem: Rectangle Class – Geometric Properties

Design a class `Rectangle` to model a 2D rectangle.

Features:
- Constructor to initialize length and breadth
- Function to calculate area
- Function to calculate perimeter
- Function to display all dimensions and computed values
- Read input for 2 rectangle objects
- Display their dimensions, area, and perimeter
*/

#include <iostream>
using namespace std;

class Rectangle {
    float length;
    float breadth;

public:
    void input();
    int area();
    int perimeter();
    void display();
};

// Take input
void Rectangle::input() {
    cout << "Enter the length: " << endl;
    cin >> length;
    cout << "Enter the breadth: " << endl;
    cin >> breadth;
}

// Calculate area
int Rectangle::area() {
    return length * breadth;
}

// Calculate perimeter
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}

// Display dimensions and results
void Rectangle::display() {
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    Rectangle room1, room2;

    cout << "🟦 Enter details for Room 1:" << endl;
    room1.input();

    cout << endl << "🟦 Enter details for Room 2:" << endl;
    room2.input();

    cout << endl << "📋 Rectangle Details:" << endl;
    room1.display();
    room2.display();

    return 0;
}
