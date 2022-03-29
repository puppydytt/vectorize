#include <stdio.h>
#include "vector/vector.h"


int main() {
    //init section
    vector_int vectrInt = initializeInt();
    vector_char vectrChar = initializeChar();
    vector_string vectrString = initializeString();
    vector_double vectorDouble = initializeDouble();

    //filling up vector
    for (int i = 0; i < 10; i++) {
        pushInt(&vectrInt, i);
    }

    //changing component of vector by index
    vectrInt.address[0] = 10;
    pop(&vectrInt); //pops out last element of vector [LIFO structure]

    //printing vector
    outInt(&vectrInt);
    printf("End of vector int section\n");

    for (char i = 58; i < 68; i++) {
        pushChar(&vectrChar, i);
    }

    vectrChar.address[0] = 69;
    vectrChar.address[1] = 70;

    outChar(&vectrChar);

    printf("End of vector char section\n");

    for (double i = 0.0; i < 1; i += 0.1) {
        pushDouble(&vectorDouble, i);
    }


    pop(&vectorDouble);

    vectorDouble.address[1] = 127.50; //assigning value to specific component of the vector

    outDouble(&vectorDouble);



    //end of vector double example section
    printf("End of vector double section\n");


    pushString(&vectrString, "who");
    pushString(&vectrString, "cares");
    pushString(&vectrString, "about");
    pushString(&vectrString, "this");
    pushString(&vectrString, "text");
    pushString(&vectrString, "longlonglonglonglonglonglonglonglonglonglonglonglonglonglong................");

    vectrString.address[0][0] = 'h';
    vectrString.address[0][1] = 'u';
    vectrString.address[0][2] = 'i';


    pop(&vectrString);
    pop(&vectrString);
    outString(&vectrString);

    printf("End of vector string section\n");


    return 0;
}


