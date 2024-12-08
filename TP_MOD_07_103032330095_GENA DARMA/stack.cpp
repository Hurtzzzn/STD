#include "stack.h"

 void createStack_103032330095(stack &S){
    Top(S) = 0;
 }

 bool isEmpty_103032330095(stack S){
    return Top(S) == 0;
 }

 bool isFull_103032330095(stack S){
    return Top(S) == 15;
 }

 void push_103032330095(stack &S, infotype x){
    if (!isFull_103032330095(S)) {
        Top(S)++;
        info(S)[Top(S)] = x;
    }
 }

 infotype pop_103032330095(stack &S){
    infotype x;
    if (!isEmpty_103032330095(S)){
        x = info(S)[Top(S)];
        Top(S)--;
    }
    return x;
 }

 void printInfo_103032330095(stack S){
    int i;
    for (i = Top(S); i >= 1; i--){
        cout << info(S)[i] << " ";
    }
    cout << endl;
 }
