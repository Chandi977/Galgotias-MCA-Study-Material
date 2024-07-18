#include <graphics.h>

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd, &gm, data);

    // Set color to blue
    setcolor(BLUE);

    // Draw a red rectangle
    rectangle(100, 100, 300, 300);

    // Draw a filled rectangle
    setfillstyle(SOLID_FILL, RED);
    floodfill(200, 200, BLUE);

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}
