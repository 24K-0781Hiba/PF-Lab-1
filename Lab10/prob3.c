#include <stdio.h>
#define MAX_TEMP 75

void checkTemp(int temp) {
    static int count = 0;
    if (temp > MAX_TEMP) {
        count++;
        printf("Temperature %d exceeds the limit. Total exceeds: %d\n", temp, count);
    } else {
        printf("Temperature %d is within the limit.\n", temp);
    }
}

int main() {
    checkTemp(80);
    checkTemp(40);
    checkTemp(100);
    return 0;
}
