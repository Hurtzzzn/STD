#include "stackk.h"

using namespace std;

void createStack(Stack &S){
    S.Top = 0;

}

void push(Stack &S, infotype P){
    if (!isFull(S)){
        S.Top++;
        S.info[S.Top] = P;
    }
}

void pop(Stack &S, infotype &P){
    if (!isEmpty(S)){
        P = S.info[S.Top];
        S.Top--;
    }
}

bool isEmpty(Stack S){
    return S.Top == 0;
}

bool isFull(Stack S){
    return S.Top == NMAX;
}

/*void pushAscending(Stack &S, infotype P){
    infotype Q;
    Stack S2;
    if (isEmpty_103032330095(S) || P > S.info[S.Top]){
        push_103032330095(S, P);
    } else {
        /*i = 1;
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
        S2 = createStack_103032330095();
        while (S.info[S.Top] > P && !isEmpty_103032330095(S)){
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
    infotype Q;
    Stack S2;
    if (isEmpty_103032330095(S) || P < S.info[S.Top]){
        push_103032330095(S, P);
    } else {
        S2 = createStack_103032330095();
        while (S.info[S.Top] < P && !isEmpty_103032330095(S)){
            pop_103032330095(S, Q);
            push_103032330095(S2, Q);
        }
        push_103032330095(S, P);
        while (!isEmpty_103032330095(S2)){
            pop_103032330095(S2, Q);
            push_103032330095(S, Q);
        }
    }
}*/

void reverseStack(Stack &S){
    Stack S2;
    infotype P;
    createStack(S2);
    while (!isEmpty(S)){
        pop(S, P);
        push(S2, P);
    }
    S = S2;
}

void ascending(Stack &S){
    Stack S2;
    infotype P;
    infotype Q;
    Stack S3;
    createStack(S2);
    createStack(S3);
    while (!isEmpty(S)){
        pop(S, P);
        push(S2, P);
    }
    while (!isEmpty(S2)){
        pop(S2, P);
        if (isEmpty(S) || P > S.info[S.Top]){
            push(S, P);
        } else {
            while (S.info[S.Top] > P && !isEmpty(S)){
                pop(S, Q);
                push(S3, Q);
            }
            push(S, P);
            while (!isEmpty(S3)){
                pop(S3, Q);
                push(S, Q);
            }
        }
    }
}

void descending(Stack &S){
    Stack S2;
    infotype P;
    infotype Q;
    Stack S3;
    createStack(S2);
    createStack(S3);
    while (!isEmpty(S)){
        pop(S, P);
        push(S2, P);
    }
    while (!isEmpty(S2)){
        pop(S2, P);
        if (isEmpty(S) || P < S.info[S.Top]){
            push(S, P);
        } else {
            while (S.info[S.Top] < P && !isEmpty(S)){
                pop(S, Q);
                push(S3, Q);
            }
            push(S, P);
            while (!isEmpty(S3)){
                pop(S3, Q);
                push(S, Q);
            }
        }
    }
}

void stringToStack(Stack &S, const string &str){
    int i = 0;
    while (str[i] != '\0') {
        push(S, str[i]);
        i++;
    }

}


void printInfo(Stack S){
    for (int i = 1; i <= S.Top; i++){
        cout << S.info[i] << " ";
    }
    cout << endl;
}
