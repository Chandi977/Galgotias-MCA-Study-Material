#include <stdio.h>

// Define a struct for representing a point
struct Point {
    int x;
    int y;
};

// Define a struct for representing a rectangle
struct Rectangle {
    struct Point topLeft;
    struct Point bottomRight;
};

int main() {
    // Declare and initialize a point
    struct Point p1 = {10, 20};

    // Declare and initialize a rectangle
    struct Rectangle rect = {{5, 10}, {15, 5}};

    // Accessing members of nested structures
    printf("Coordinates of point: (%d, %d)\n", p1.x, p1.y);
    printf("Coordinates of top left corner of rectangle: (%d, %d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Coordinates of bottom right corner of rectangle: (%d, %d)\n", rect.bottomRight.x, rect.bottomRight.y);

    return 0;
}
