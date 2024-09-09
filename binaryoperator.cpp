#include <iostream>
using namespace std;

class memeberfunc {
public:
    int x, y;

    // Method to set data
    void getdata(int p, int y1) {
        x = p;
        y = y1;
    }

    // Overload + operator to add two memeberfunc objects
    memeberfunc operator+(const memeberfunc& p1) const {
        memeberfunc result;
        result.x = this->x + p1.x;
        result.y = this->y + p1.y;
        return result;
    }

    // Method to display the data
    void display() const {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    memeberfunc p2;
    p2.getdata(90, 67);

    memeberfunc p3;
    p3.getdata(10, 20);

    memeberfunc p4 = p2 + p3;  // Using the overloaded + operator

    p4.display();  // Displaying the result

    return 0;
}
