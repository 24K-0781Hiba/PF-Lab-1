#include <stdio.h>
#define con 0.001

void convertAndCount(float meters) {
    static int callCount = 0;
    callCount++;
    printf("%.2f meters = %.2f kilometers. Called %d times.\n", meters, meters * con, callCount);
}

int main() {
	convertAndCount(1000);
    convertAndCount(500);
    convertAndCount(1500);
    return 0;
}
