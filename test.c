#include <stdio.h>
void swapValues(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
 

int main() {
    int a = 3, b = 7;
    swapValues(a, b);
    printf("a = %d b = %d", a, b);
    return 0;
}



