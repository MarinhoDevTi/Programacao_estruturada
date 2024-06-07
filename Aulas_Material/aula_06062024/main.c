#include <stdio.h>

void chinelinho (int n) {
    int temp;
    if (n % 2 == 0){
        temp = 9;
    } else {
        temp = 10;
    }
    for (int i = (n-temp); i < n; i+=2){
        printf("%d", i);
    }
    printf(" .%d. ", n);
    if( n % 2 == 0){
        n += 2;
    } else {
        n += 1;
    }
    


}