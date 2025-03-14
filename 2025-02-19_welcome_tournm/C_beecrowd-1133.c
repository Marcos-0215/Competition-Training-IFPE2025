#include <stdio.h>

int main() {
    
    int x, y;
    scanf("%d %d", &x, &y);
    
    if (y<x) {
        int temp = x;
        x = y;
        y = temp;
    }
    
    x++;
    
    for (x; x<y; x++) {
        if (x%5 == 3 || x%5 == 2) {
            printf("%d\n", x);
        }
    }

    return 0;
}