#include <iostream>
using namespace std;


struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    
    Color colors[5] = {
        {120, 200, 150},
        {45, 80, 220},
        {255, 100, 60},
        {10, 50, 90},
        {200, 180, 75}
    };

    
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    
    cout << "New RGB values after inversion:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << " -> "
             << "Red: " << colors[i].red << ", "
             << "Green: " << colors[i].green << ", "
             << "Blue: " << colors[i].blue << endl;
    }

    return 0;
}
