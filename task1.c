#include <stdio.h>

int main(){

        int a = 25;
        char b = 'i';
        double c = 36.5;
        short d = 5;

        printf("size of int: %lu\n", sizeof(a));
        printf("size of char: %lu\n", sizeof(b));
        printf("size of double: %lu\n", sizeof(c));
        printf("size of short: %lu\n", sizeof(d));

        //type casting to a pointer
        printf("address of int: %p\n", (void *) &a);
        printf("address of char: %p\n", (void *) &b);
        printf("address of double: %p\n", (void *) &c);
        printf("address of short: %p\n", (void *) &d);

        return 0;
}
