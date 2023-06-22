#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swap(Point *p1, Point *p2) {
    int tempX = p1->x;
    int tempY = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    Point p1, p2;

    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: x = %d, y = %d\n", p1.x, p1.y);
    printf("Point 2: x = %d, y = %d\n", p2.x, p2.y);

  
    swap(&p1, &p2);

    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", p1.x, p1.y);
    printf("Point 2: x = %d, y = %d\n", p2.x, p2.y);

    return 0;
}
