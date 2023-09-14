#include<bits/stdc++.h>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) { counter=0; }
        void SetPrice(void);
        void DisplayPrice(void); 

};

void shop :: SetPrice(void){
    cout<<"enter ID of your item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of the item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: DisplayPrice(void){
    for (int i = 0; i < counter; i++)
 {
     cout<<"The price of item Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
 }
    
}

int main()
{
    shop dukkan;
    dukkan.initCounter();
    dukkan.SetPrice();
    dukkan.SetPrice();
    dukkan.SetPrice();
    dukkan.SetPrice();
    dukkan.DisplayPrice();
    return 0;
}










// #include <iostream>
// using namespace std;

// class shop
// {
// private:
//     int itemid[10];
//     int price[10];
//     int counter;
//     int sum = 0 ;
// public:
//     void counts(void) { counter = 0; }
//     void itemid_price(void);
//     void display(void);
//     void total_items(void);
//     void total_price(void);
// };

// void shop::itemid_price(void)
// {
//     cout<<"Enter the ID of item no "<< counter + 1<<endl;
//     cin>>itemid[counter];
//     cout<<"Enter the price of item\n";
//     cin>>price[counter];
//     counter++;
// }

// void shop::display(void)
// { for (int i = 0; i < counter; i++)
// {
//    cout<<"The price of item Id "<<itemid[i]<<" is "<<price[i]<<endl;
// }
// }
// void shop :: total_items(void){
//     cout<<"Total number of items are "<<counter<<endl;
// }
// void shop :: total_price(void){
//     for (int i = 0; i < counter; i++)
//     {
//         sum = sum + price[i];
//     }
//     cout<<"The total price is "<<sum; 
// }
// int main()
// {
//     shop s;
//     s.counts();
//     s.itemid_price();
//     s.itemid_price();
//     s.itemid_price();
//     s.display();
//     s.total_items();
//     s.total_price();
//     return 0;
// }