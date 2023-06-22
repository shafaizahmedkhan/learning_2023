#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculateVolumeAndSurfaceArea(struct Box* boxPtr, double* volumePtr, double* surfaceAreaPtr) {
    *volumePtr = boxPtr->length * boxPtr->width * boxPtr->height;
    *surfaceAreaPtr = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    
    boxPtr->length = 5.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

    
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);

    printf("Volume (Using Arrow Operator): %.2f\n", volume);
    printf("Surface Area (Using Arrow Operator): %.2f\n", surfaceArea);

    double volume2, surfaceArea2;
    calculateVolumeAndSurfaceArea(boxPtr, &volume2, &surfaceArea2);

    printf("Volume (Using Function with Arrow Operator): %.2f\n", volume2);
    printf("Surface Area (Using Function with Arrow Operator): %.2f\n", surfaceArea2);

    return 0;
}
