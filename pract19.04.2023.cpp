#include iostream
#include string.h
 
using namespace std;

class ShopItemOrder
{
    private
    string name;
    double price;
    int NumberOfItems;

    public
    ShopItemOrder(string name, double price, int NumberOfItems);
    void set (string name, double price, int NumberOfItems);
    void get ();
    double total_price(double price, int NumberOfItems);
    void print ();
}
    ShopItemOrderShopItemOrder(string inputName, double price, int NumberOfItems){
        set(name, price, NumberOfItems);
        }
        
    void ShopItemOrderset(string inputName, double price, int NumberOfItems);{
        this - name = name;
        this - price = price;
        this - NumberOfItems = NumberOfItems;    
        } 
        
    void ShopItemOrderget(){
         cout  this - name   this - price  this - NumberOfItems;
        }    
       double ShopItemOrdertotal_price(double price, int NumberOfItems){
        return price  NumberOfItems; }
        
        void ShopItemOrderprint);{
        cout  this - name  '' this - price  '' 
        this - NumberOfItems  ''  'n' Total Price   total_price(this - price, this - name, this -NumberOfItems);
        }
int main() {
    ShopItemOrder bag1(Computer, 20000, 2); 
return 0;
}
