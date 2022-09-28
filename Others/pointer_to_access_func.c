#include <stdio.h>

int change_val (int *m) {
    *m = 402;
}

int main() {
    
    int n = 98;
    printf("N is %d\n", n);
    
    change_val(&n);
    printf("N is now %d\n", n);
    
    return (0);
}
