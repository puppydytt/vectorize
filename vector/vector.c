#include "vector.h"

vector_int initializeInt() {
    return (vector_int) {calloc(1, sizeof(int)), INT, 0};
}

vector_double initializeDouble() {
    return (vector_double) {calloc(1, sizeof(double)), DOUBLE, 0};
}

vector_char initializeChar() {
    return (vector_char) {calloc(1, sizeof(char)), CHAR, 0};
}

vector_string initializeString() {
    return (vector_string) {calloc(1, sizeof(char *)), STRING, 0};
}

void pushInt(vector_int *mem, const int value) {
    if (mem->length == 0) (mem->address)[0] = value;
    else {
        mem->address = realloc(mem->address, (mem->length + 1) * sizeof(int));
        if (mem->address == NULL) {
            printf("Allocated mem failed on %d", mem->length);
            exit(198385);
        }
        mem->address[mem->length] = value;
    }
    /*   printf("element  = %d\n", (mem->address[mem->length]));
       printf("address  = %p\n", &(mem->address[mem->length]));*/
    mem->length += 1;
}

void pushDouble(vector_double *mem, const double value) {
    if (mem->length == 0) (mem->address)[0] = value;
    else {
        mem->address = realloc(mem->address, (mem->length + 1) * sizeof(double));
        if (mem->address == NULL) {
            printf("Allocated mem failed on %d", mem->length);
            exit(198385);
        }
        mem->address[mem->length] = value;
    }
    /*   printf("element  = %d\n", (mem->address[mem->length]));
       printf("address  = %p\n", &(mem->address[mem->length]));*/
    mem->length += 1;
}

void pushChar(vector_char *mem, const char value) {
    if (mem->length == 0) (mem->address)[0] = value;
    else {
        mem->address = realloc(mem->address, (mem->length + 1) * sizeof(char));
        if (mem->address == NULL) {
            printf("Allocated mem failed on %d", mem->length);
            exit(198385);
        }
        mem->address[mem->length] = value;
    }
    /*   printf("element  = %d\n", (mem->address[mem->length]));
       printf("address  = %p\n", &(mem->address[mem->length]));*/
    mem->length += 1;
}

void pushString(vector_string *mem, char *value) {
    if (mem->length == 0) (mem->address)[0] = value;
    else {
        mem->address = realloc(mem->address, (mem->length + 1) * sizeof(char *));
        if (mem->address == NULL) {
            printf("Allocated mem failed on %d", mem->length);
            exit(198385);
        }
        mem->address[mem->length] = value;
    }
    mem->length += 1;
}

void pop(void *restrict mem) {
    void **pVoid = mem;
    int sizeOfLocatedElement = 0;

    switch (*(uint_32 *) (mem + 8)) {
        case INT:
            sizeOfLocatedElement = sizeof(int);
            break;
        case DOUBLE:
            sizeOfLocatedElement = sizeof(double);
            break;
        case CHAR:
            sizeOfLocatedElement = sizeof(char);
            break;
        case STRING:
            sizeOfLocatedElement = sizeof(char *);
    }

    if (*(uint_32 *) (mem + 12) == 0) {
        printf("Cannot pop of unfulfilled vector\n");
        return;
    }
    (*(uint_32 *) (mem + 12)) -= 1;
    mem = realloc(*pVoid, (*(uint_32 *) (mem + 12)) * sizeOfLocatedElement);
}

void outInt(vector_int *layout) {
    for (uint_32 i = 0; i < layout->length; i++) {
        printf("%d\n", layout->address[i]);
    }
}

void outDouble(vector_double *layout) {
    for (uint_32 i = 0; i < layout->length; i++) {
        printf("%f\n", layout->address[i]);
    }
}

void outChar(vector_char *layout) {
    for (uint_32 i = 0; i < layout->length; i++) {
        printf("%c\n", layout->address[i]);
    }
}

void outString(vector_string *layout) {
    for (uint_32 i = 0; i < layout->length; i++) {
        printf("%s\n", layout->address[i]);
    }
}