#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;
#define Top(S) S.Top
#define info(S) S.info

 typedef char infotype;

 struct stack{
    infotype info[15];
    int Top;
 };

 void createStack_103032330095(stack &S);

 bool isEmpty_103032330095(stack S);

 bool isFull_103032330095(stack S);

 void push_103032330095(stack &S, infotype x);

 infotype pop_103032330095(stack &S);

 void printInfo_103032330095(stack S);


#endif // STACK_H_INCLUDED
