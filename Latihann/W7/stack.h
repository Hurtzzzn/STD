#include <iostream>

using namespace std;

const int NMAX = 10;

typedef int infotype;

typedef int index;

struct Stack{
    infotype info[NMAX];
    index Top;
};

Stack createStack_103032330095();

void push_103032330095(Stack &S, infotype P);

void pop_103032330095(Stack &S, infotype &P);

bool isEmpty_103032330095(Stack S);

bool isFull_103032330095(Stack S);

void pushAscending_103032330095(Stack &S, infotype P);

void pushDescending_103032330095(Stack &S, infotype P);

void reverseStack_103032330095(Stack &S);

void stringToChar_103032330095(Stack &S);

void printStack_103032330095(Stack S);




