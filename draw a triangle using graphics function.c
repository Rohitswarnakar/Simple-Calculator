#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include"); // Change the path if needed
    
    // Coordinates of the triangle
    int x1 = 200, y1 = 100;
    int x2 = 150, y2 = 200;
    int x3 = 250, y3 = 200;
    
    // Draw the triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    
    getch(); // Wait for key press
    closegraph(); // Close graphics mode
    
    return 0;
}

