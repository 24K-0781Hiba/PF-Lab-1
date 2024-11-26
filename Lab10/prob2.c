#include <stdio.h>
#include <math.h>

struct Point {
    double x;
    double y;
};
double distance(struct Point p1, struct Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
int rectangle(struct Point p, struct Point topLeft, struct Point bottomRight) {
    return (p.x >= topLeft.x && p.x <= bottomRight.x && 
            p.y >= bottomRight.y && p.y <= topLeft.y);
}
int main() {
    struct Point p1 = {0.0, 0.0};
    struct Point p2 = {3.0, 4.0};
    struct Point topLeft = {-1.0, 5.0};
    struct Point bottomRight = {4.0, -2.0};
    struct Point testPoint = {2.0, 1.0};
    printf("Distance between points: %.2f\n", distance(p1, p2));
    if (rectangle(testPoint, topLeft, bottomRight)) {
        printf("Point (%.2f, %.2f) is within the rectangle.\n", testPoint.x, testPoint.y);
    } else {
        printf("Point (%.2f, %.2f) is not within the rectangle.\n", testPoint.x, testPoint.y);
    }

    return 0;
}
