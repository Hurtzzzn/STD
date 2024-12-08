#include "stack.h"

using namespace std;

Stack createStack_103032330095(){
    Stack S;
    S.Top = 0;
    return S;
}

void push_103032330095(Stack &S, infotype P){
    if (!isFull_103032330095(S)){
        S.Top++;
        S.info[S.Top] = P;
    }
}

void pop_103032330095(Stack &S, infotype &P){
    if (!isEmpty_103032330095(S)){
        P = S.info[S.Top];
        S.Top--;
    }
}

bool isEmpty_103032330095(Stack S){
    return S.Top == 0;
}

bool isFull_103032330095(Stack S){
    return S.Top == NMAX;
}

void pushAscending_103032330095(Stack &S, infotype P){
    int i;
    infotype Q;
    Stack S2;
    if (isEmpty_103032330095 || P > S.info[S.Top]){
        push_103032330095(S, P);
    } else {
        i = 1;
        while (S.info[i] < P && i <= S.Top){
            i++;
        }
        while (S.Top >= i){
            pop_103032330095(S, Q);
            push_103032330095(S2, Q);
        }
        push_103032330095(S, P);
        while (!isEmpty_103032330095(S2)){
            pop_103032330095(S2, Q);
            push_103032330095(S, Q);
        }
    }
}

void pushDescending_103032330095(Stack &S, infotype P){
    int i;
    infotype Q;
    Stack S2;
    if (isEmpty_103032330095 || P < S.info[S.Top]){
        push_103032330095(S, P);
    } else {
        i = 1;
        while (S.info[i] > P && i <= S.Top){
            i++;
        }
        while (S.Top >= i){
            pop_103032330095(S, Q);
            push_103032330095(S2, Q);
        }
        push_103032330095(S, P);
        while (!isEmpty_103032330095(S2)){
            pop_103032330095(S2, Q);
            push_103032330095(S, Q);
        }
    }
}

void reverseStack_103032330095(Stack &S){
    Stack S2;
    infotype P;
    while (!isEmpty_103032330095(S)){
        pop_103032330095(S, P);
        push_103032330095(S2, P);
    }
    S = S2;
}

void stringToChar_103032330095(Stack &S);

void printStack_103032330095(Stack S){
    for (int i = 1; i <= S.Top; i++){
        cout << S.info[i] << " ";
    }
}
