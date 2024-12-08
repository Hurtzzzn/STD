#include "mll.h"

adr_sales Search_Sales_103032330153(mll List_Sales, string nama_Sales){
    adr_sales S;
    S = List_Sales.first;
    while (S != NULL){
        if (S->info.nama == nama_Sales){
            return S;
        }
        S = S->next;
    }
    return S;
}

void insert_last_Sales_103032330153(mll &List_Sales, adr_sales S){
    adr_sales Q;
    if (List_Sales.first == NULL){
        List_Sales.first = S;
    }else{
      Q = List_Sales.first;
      while (Q->next != NULL){
        Q = Q->next;
      }
      Q->next = S;
    }
}


void createList_103032330153(mll &List_Sales){
    List_Sales.first = NULL;
}

void newElmSales_103032330153(sales info, adr_sales &S){
    S = new elm_sales;
    S->next = NULL;
    S->nextJual = NULL;
    S->info = info;
}


void newElmJual_103032330153(int info, adr_jual &J){
    J = new elm_jual;
    J->next = NULL;
    J->info = info;
}


void insert_new_penjualan_103032330153(mll &List_Sales, adr_sales S, adr_jual J){
    adr_jual Q;
    if (S->nextJual == NULL){
        S->nextJual = J;
    }else {
        Q = S->nextJual;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = J;
    }

}

void Delete_First_Penjualan_103032330153(mll &List_Sales, adr_sales S, adr_jual &J){
    if (List_Sales.first != NULL){
        if (S->nextJual == NULL){
            J = NULL;
        }else if (S->nextJual->next == NULL){
            J = S->nextJual;
            S->nextJual = NULL;
        }else {
            J = S->nextJual;
            S->nextJual = J->next;
            J->next = NULL;
        }
    }else {
        cout << "List Sales Kosong" << endl;
    }
}

void Show_data_sales_103032330153(mll List_Sales){
    adr_sales P1;
    adr_jual P2;
    P1 = List_Sales.first;
    while (P1 != NULL){
        cout << "nama :" << P1->info.nama << endl;
        cout << "gol : " << P1->info.gol << endl;
        P2 = P1->nextJual;
        while (P2 != NULL){
            cout << P2->info << ", ";
            if (P2->next == NULL){
                cout << endl;
            }
            P2 = P2->next;
        }
        P1= P1->next;
    }



}

void Delete_Penjualan_103032330153(mll &List_Sales) {
    adr_sales P1;
    adr_jual P2, P3, prec;
    P1 = List_Sales.first;
    while (P1 != NULL) {
        P2 = P1->nextJual;
        prec = NULL;

        while (P2 != NULL) {
            P3 = P2->next;
            if (P2->info < 3) {
                if (P2 == P1->nextJual) {
                    Delete_First_Penjualan_103032330153(List_Sales, P1, P2);
                    P2 = P1->nextJual;  // Update pointer setelah penghapusan
                } else if (P2->next == NULL) {
                    Delete_Last_Penjualan_103032330153(List_Sales, P1, P2);
                    P2 = NULL;
                } else {
                    Delete_After_Penjualan_103032330153(List_Sales, P1, prec, P2);
                    P2 = prec->next;  // Update setelah penghapusan
                }
            } else {
                prec = P2;
                P2 = P3;
            }
        }
        P1 = P1->next;
    }
}

void Delete_Last_Penjualan_103032330153(mll List_Sales, adr_sales S, adr_jual &J){
    if (S->nextJual == NULL){
        J = NULL;
    }else if (S->nextJual->next == NULL){
        J = S->nextJual;
        S->nextJual = NULL;
    }else {
        adr_jual Q, R;
        Q = S->nextJual;
        while (Q->next != NULL){
            R = Q ;
            Q = Q->next;
        }
        J = R->next;
        R->next = NULL;
    }

}

void Delete_After_Penjualan_103032330153(mll &List_Sales, adr_sales S, adr_jual prec, adr_jual &J){
    J = prec->next;
    prec->next = J->next;
    J->next = NULL;
}
