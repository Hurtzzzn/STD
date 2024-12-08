#ifndef STACKK_H_INCLUDED
#define STACKK_H_INCLUDED
#include <iostream>

using namespace std;

const int NMAX = 10;

typedef char infotype;

typedef int index;

struct Stack{
    infotype info[NMAX];
    index Top;
};

void createStack(Stack &S);

void push(Stack &S, infotype P);

void pop(Stack &S, infotype &P);

bool isEmpty(Stack S);

bool isFull(Stack S);

void ascending(Stack &S);

void descending(Stack &S);

void reverseStack(Stack &S);

void stringToStack(Stack &S, const string &str);

void printInfo(Stack S);

#endif // STACKK_H_INCLUDED
