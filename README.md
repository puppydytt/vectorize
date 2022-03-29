#Vector implementation in C language
***
####Main purpose show the benefits OOP style over functional, exactly `Polymorphism in C++` and operators `new & delete`
##Available types.
1. `vector_int`
2. `vector_double`
3. `vector_string`
4. `vector_char`


##Usage
`main.c` drive code
```C
#include "vector/vector.h"

int main(int argc, char ** argv) {
    //goes creation of INT typed vector
    vector_int vectrInt = initializeInt();
    
    //pushing components to vector
    for (int i = 0; i < 10; i++) {
        pushInt(&vectrInt, i);
    }

    //changing component of vector by index
    vectrInt.address[0] = 10;
       
    outInt(&vectrInt);
}
```

##More exmaples in `main.c` file