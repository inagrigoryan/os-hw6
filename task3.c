#include <stdio.h>

struct normal{
        char a;
        int b;
        double c;
};


#pragma pack(1)
struct packed1{
        char a;
        int b;
        double c;
};

#pragma pack(2)
struct packed2{
        char a;
        int b;
        double c;
};

#pragma pack(4)
struct packed4{
        char a;
        int b;
        double c;
};

int main(){

        struct normal s1;

        printf("normal struct\n");
        printf("size of struct: %lu\n", sizeof(s1));
        printf("address of a: %p\n", (void *) &s1.a);
        printf("address of b: %p\n", (void *) &s1.b);
        printf("address of c: %p\n", (void *) &s1.c);

        struct packed1 p1;
        printf("pack1 struct\n");
        printf("size of struct: %lu\n", sizeof(p1));
        printf("address of a: %p\n", (void *) &p1.a);
        printf("address of b: %p\n", (void *) &p1.b);
        printf("address of c: %p\n", (void *) &p1.c);

        struct packed2 p2;
        printf("pack2 struct\n");
        printf("size of struct: %lu\n", sizeof(p2));
        printf("address of a: %p\n", (void *) &p2.a);
        printf("address of b: %p\n", (void *) &p2.b);
        printf("address of c: %p\n", (void *) &p2.c);

        struct packed4 p4;
        printf("pack4 struct\n");
        printf("size of struct: %lu\n", sizeof(p4));
        printf("address of a: %p\n", (void *) &p4.a);
        printf("address of b: %p\n", (void *) &p4.b);
        printf("address of c: %p\n", (void *) &p4.c);


        return 0;
}

