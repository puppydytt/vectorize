#include <stdio.h>
#include "vector/vector.h"

void a(void * test) {
    void ** ptr2 = test;

    //explanation when you passing (structure, char *, array) you're passing the address pointing to first element in it.
    //as it's void type compiler does not how to represent this memory in my case I stored the "mem" address to double ptr.
    //this instruction tells the compiler that the initial pointer of first element in struct points to other address that points to value

    ///ILLUSTRATION
    //struct abc = {1, 2, 3}
    //&abc -> points to address that stores 1(as it's first element in struct)
    //if you'll store that address in double pointer compiler will interpret the value of it's address as other address
    //it will grab 8 bytes of memory that stores in address &abc, because the address size is 8 bytes
    //tyring to reference the address that stores in double pointer through *ptr, will give you address, for the struct it will be 0x 02 00 00 00 03
    //as you can see it's grabbed 8bytes starting from initial address and compiler represented it as address that can be referenced with **ptr;
    //why this address has value not 0x03 00 00 00 02, because INTEL processor stores it as little endian, so address is reverse

    //0x6ef04--> 0x050403 -> value;


}




int main() {
    vector_string abc = initializeString();

    typedef struct {
        int a;
        int b;
        int c;
    } cb;

    cb test = {3, 2, 3};

    a(&test);



    pushString(&abc, "blyat");
    pushString(&abc, "suka");
    pushString(&abc, "pidor");
    pushString(&abc, "hui putin suka");
    pushString(&abc, "cba");


    pop(&abc);
    outString(&abc);

    return 0;
}


