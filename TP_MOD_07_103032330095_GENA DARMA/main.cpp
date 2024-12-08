#include "stack.h"

int main()
{
    stack S;
    createStack_103032330095(S);
    push_103032330095(S, 'G');
    push_103032330095(S, 'N');
    push_103032330095(S, 'U');
    push_103032330095(S, 'D');
    push_103032330095(S, 'N');
    push_103032330095(S, 'A');
    push_103032330095(S, 'B');
    push_103032330095(S, 'O');
    push_103032330095(S, 'L');
    push_103032330095(S, 'A');
    push_103032330095(S, 'H');

    cout << "Isi stack Awal : ";
    printInfo_103032330095(S);

    for(int i = 1; i <= 4; i++){
        pop_103032330095(S);
    }
    cout << "Isi stack sesudah pop : ";
    printInfo_103032330095(S);
}
