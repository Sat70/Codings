#include<iostream>
using namespace std;
class Invoice
{
    private:
        string partNumber;
        string partDescription;
        int quantity;
        double price_per_item;
        public:
            Invoice(string partN,string partD,int q,double price)
            {
                partNumber=partN;
                partDescription=partD;
                quantity=q;
                price_per_item=price;
            }
            double getInvoiceAmount()
            {
                double amount=0;
                if(quantity<=0 || price_per_item<=0)
                {
                    return 0.0;
                }
                amount=price_per_item*quantity;
                return amount;
            }
            void display()
            {
                cout<<"\n";
                cout<<"The part description is : "<<partDescription;
                cout<<"\n";
                cout<<"The part number is : "<<partNumber;
                cout<<"\n";
                cout<<"Quantity purchased : "<<quantity;
                cout<<"\n";
                cout<<"The total bill is : "<<getInvoiceAmount();
            }
};
int main()
{
    Invoice obj("01W123S","Screw",9,12.5);
    obj.display();
    return 0;
}