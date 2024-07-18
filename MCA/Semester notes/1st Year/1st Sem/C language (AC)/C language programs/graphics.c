#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set color to RED
    setcolor(RED);

    // Draw a line from (100, 100) to (300, 300)
    line(100, 100, 300, 300);

    // Set color to GREEN
    setcolor(GREEN);

    // Draw a rectangle
    rectangle(150, 150, 250, 250);

    // Set color to BLUE
    setcolor(BLUE);

    // Draw a circle
    circle(400, 200, 50);

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
