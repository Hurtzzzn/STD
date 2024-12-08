#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED
#include <iostream>
using namespace std;

typedef struct elm_jual *adr_jual;
typedef struct elm_sales *adr_sales;
struct sales {
    string gol, nama;
};
struct elm_jual{
    int info;
    adr_jual next;
};

struct elm_sales {
    sales info;
    adr_sales next;
    adr_jual nextJual;

};

struct mll {
    adr_sales first;
};

adr_sales Search_Sales_103032330153(mll List_Sales, string nama_Sales);
void insert_last_Sales_103032330153(mll &List_Sales, adr_sales S);
void createList_103032330153(mll &List_Sales);
void newElmSales_103032330153(sales info, adr_sales &S);
void newElmJual_103032330153(int info, adr_jual &J);
void insert_new_penjualan_103032330153(mll &List_Sales, adr_sales S, adr_jual J);
void Delete_First_Penjualan_103032330153(mll &List_Sales, adr_sales S, adr_jual &J);
void Show_data_sales_103032330153(mll List_Sales);
void Delete_Penjualan_103032330153(mll &List_Sales);
void Delete_Last_Penjualan_103032330153(mll List_Sales, adr_sales S, adr_jual &J);
void Delete_After_Penjualan_103032330153(mll &List_Sales, adr_sales S, adr_jual prec, adr_jual &J);







#endif // MLL_H_INCLUDED
