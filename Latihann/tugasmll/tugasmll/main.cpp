#include "mll.h"

using namespace std;

int main()
{
   mll List_Sales;
   string nama_Sales;
   sales X;
   int infoJ;
   adr_sales S;
   adr_jual J;
   int i;
   createList_103032330153(List_Sales);
   for (i = 1; i <= 5; i++){
        cout << "Nama: ";
        cin >> X.nama;
        cout << "Gol: ";
        cin >> X.gol;
        newElmSales_103032330153(X, S);
        insert_last_Sales_103032330153(List_Sales, S);
   }

   Show_data_sales_103032330153(List_Sales);

   S = Search_Sales_103032330153(List_Sales, "Siska");
   for (i = 1; i <=4; i++){
        cout << S->info.nama << endl;
        cout << "jumlah: ";
        cin >> infoJ;
        newElmJual_103032330153(infoJ, J);
        insert_new_penjualan_103032330153(List_Sales, S, J);
   }

   S = Search_Sales_103032330153(List_Sales, "Affan");
   for (i = 1; i <=2; i++){
        cout << S->info.nama << endl;
        cout << "jumlah: ";
        cin >> infoJ;
        newElmJual_103032330153(infoJ, J);
        insert_new_penjualan_103032330153(List_Sales, S, J);
   }

   S = Search_Sales_103032330153(List_Sales, "Cahya");
   for (i = 1; i <=3; i++){
        cout << S->info.nama << endl;
        cout << "jumlah: ";
        cin >> infoJ;
        newElmJual_103032330153(infoJ, J);
        insert_new_penjualan_103032330153(List_Sales, S, J);
   }

   S = Search_Sales_103032330153(List_Sales, "Hafidz");
   for (i = 1; i <=1; i++){
        cout << S->info.nama << endl;
        cout << "jumlah: ";
        cin >> infoJ;
        newElmJual_103032330153(infoJ, J);
        insert_new_penjualan_103032330153(List_Sales, S, J);
   }

   Show_data_sales_103032330153(List_Sales);

   cout << "cari nama: ";
   cin >> nama_Sales;
   S = Search_Sales_103032330153(List_Sales, nama_Sales);
   if (S == NULL){
        cout << "Gaketemu" << endl;
   } else {
        cout << S->info.nama << endl;
        cout << S->info.gol << endl;
   }

   cout << "delete data pertama penjualan" << endl;
   Delete_First_Penjualan_103032330153(List_Sales, S, J);
   Show_data_sales_103032330153(List_Sales);

   cout << "delete tertentu" << endl;
   Delete_Penjualan_103032330153(List_Sales);
   Show_data_sales_103032330153(List_Sales);

}
