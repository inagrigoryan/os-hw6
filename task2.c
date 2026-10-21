#include <stdio.h>

struct first {
        char a;
        int b;
        double c;
};

struct second {
        double c;
        int b;
        char a;
};

int main(){

        struct first first;
        struct second second;

        printf("original struct\n");
        printf("size of struct: %lu\n", sizeof(first));
        printf("address of a: %p\n", (void *) &first.a);
        printf("address of b: %p\n", (void *) &first.b);
        printf("address of c: %p\n", (void *) &first.c);

        printf("modified struct\n");
        printf("size of struct: %lu\n", sizeof(second));
        printf("address of a: %p\n", (void *) &second.c);
        printf("address of b: %p\n", (void *) &second.b);
        printf("address of a: %p\n", (void *) &second.a);

        return 0;
}
