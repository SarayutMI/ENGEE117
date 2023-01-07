#include <stdio.h>

// Define a struct for a point
struct point {
 int x;
 int y;
};
// Function that takes a point by reference
void move_point(struct point *p) {
 // Modify the x and y values of the point
 p->x = p->x + 1;
 p->y = p->y + 1;
}

int main(void) {
 // Create a point
 struct point p = {1, 2};

 // Print the point's initial x and y values
 printf("Initial point: (%d, %d)\n", p.x, p.y);

 // Call the function to move the point
 move_point(&p);

 // Print the point's x and y values after the function call
 printf("Moved point: (%d, %d)\n", p.x, p.y);

 return 0;
}