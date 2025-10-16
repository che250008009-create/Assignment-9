#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

int main() {
    Point points[7];
    int countFirstQuadrant = 0;

    
    cout << "Enter x and y coordinates for 7 points:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << ":\n";
        cout << "x = ";
        cin >> points[i].x;
        cout << "y = ";
        cin >> points[i].y;
    }

    
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            countFirstQuadrant++;
        }
    }

    
    cout << "\nNumber of points in the first quadrant: " << countFirstQuadrant << endl;

    return 0;
}
