#include <stdlib.h>
#include <stdio.h>

#ifndef VECTORIZE_VECTOR_H
#define VECTORIZE_VECTOR_H


typedef unsigned int uint_32;


enum vectorInitTypes {
    INT,
    DOUBLE,
    CHAR,
    STRING
};

typedef struct {
    int *address;
    uint_32 type;
    uint_32 length;
} vector_int;

typedef struct {
    double *address;
    uint_32 type;
    uint_32 length;
} vector_double;

typedef struct {
    char *address;
    uint_32 type;
    uint_32 length;
} vector_char;

typedef struct {
    char ** address;
    uint_32 type;
    uint_32 length;
} vector_string;


__attribute__((unused)) vector_int initializeInt();

__attribute__((unused)) vector_double initializeDouble();

__attribute__((unused)) vector_char initializeChar();

__attribute__((unused)) vector_string initializeString();

__attribute__((unused)) void pushInt(vector_int *, int);

__attribute__((unused)) void pushDouble(vector_double *, double);

__attribute__((unused)) void pushChar(vector_char *, char);

__attribute__((unused)) void pushString(vector_string *, char *);

__attribute__((unused)) void pop(void *);

__attribute__((unused)) void outInt(vector_int *);

__attribute__((unused)) void outDouble(vector_double *);

__attribute__((unused)) void outChar(vector_char *);

__attribute__((unused)) void outString(vector_string *);


#endif //VECTORIZE_VECTOR_H