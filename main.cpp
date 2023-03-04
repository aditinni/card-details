#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    string username;
    string password;
    int ch;
    string user;
    string pass;
    string name;
    string cardnumber;
    string cvv;
    int date;
    int month;
    int year;







        cout<<"-----SignUp Portal------"<<endl;
         ofstream out;
         out.open("user.txt");
         cout<<"Enter the username"<<endl;
         cin>>username;
         out<<username<<endl;
         cout<<"Enter password"<<endl;
         cin>>password;
         out<<password<<endl;
         out.close();

        cout<<"-----Login Portal-------"<<endl;
        ifstream in;
        in.open("user.txt");
        in>> user;
        cout<<"Enter your username"<<endl;
        cin>>username;
        if(username!=user)
        {

            cout<<"Invalid username"<<endl;
            cout<<"Enter again"<<endl;
            cin>>username;
        }
        in>>pass;

        cout<<"Enter your password"<<endl;
        cin>>password;
        if(password!=pass)
        {

            cout<<"Invalid password"<<endl;
            cout<<"Enter again"<<endl;
            cin>>password;
        }
        in.close();

        cout<<"-------SAVE YOUR CARD DETAILS-------"<<endl;

        out.open("Card.txt");
        cout<<"Enter the name on the card"<<endl;
        cin>>name;
        out<<name<<endl;
        cout<<"Enter the card number"<<endl;
        cin>>cardnumber;
        if(cardnumber.length()!=16)
        {

            cout<<"Enter the cardnumber again"<<endl;
            cin>>cardnumber;
        }
        out<<cardnumber<<endl;
        cout<<"Enter the cvv"<<endl;
        cin>>cvv;
        if(cvv.length()!=3)
        {

            cout<<"Enter 3 digit cvv number agian"<<endl;
            cin>>cvv;
        }
        out<<cvv<<endl;
        cout<<"Enter the expiry date"<<endl;
        cin>>date;
        if(date>31||date<1)
        {

            cout<<"Enter date again"<<endl;
            cin>>date;
        }
        out<<date<<endl;
        cout<<"Enter the expiry month"<<endl;
        cin>>month;
        if(month<0||month>12)
        {

            cout<<"Enter month again"<<endl;
            cin>>month;
        }
        out<<month<<endl;
        cout<<"Enter the expiry year"<<endl;
        cin>>year;
        if(year<2023)
        {

            cout<<"Enter again"<<endl;
            cin>>year;
        }
        out<<year<<endl;
        out.close();

        cout<<"--------PAYMENT PORTAL----------"<<endl;
        string n,cn,cv;
        int d,m,y;
        in.open("Card.txt");
        in >> n;
        cout<<"Enter your card Details"<<endl;
        cin>>name;
        if(n!=name)
        {

            cout<<"Invalid name "<<endl;
            cin>>name;
        }
        in >> cn;
        cout<<"Enter card number"<<endl;
        cin>>cardnumber;
        if(cardnumber!=cn)
        {

            cout<<"Invalid Card Number"<<endl;
            cin>>cardnumber;
        }
        in >> cv;
        cout<<"Enter your cvv"<<endl;

        cin>>cvv;
        if(cvv!=cv)
        {

            cout<<"Invalid cvv"<<endl;
            cin>>cvv;
        }

        in >> d;
        cout<<"Enter Expiry Date "<<endl;
        cin>>date;
        if(date!=d)
        {

            cout<<"Invalid Date"<<endl;
            cin>>date;
        }

        in >> m;
        cout<<"Enter Expiry Month "<<endl;
        cin>>month;
        if(month!=m)
        {

            cout<<"Invalid month"<<endl;
            cin>>month;
        }


        in >> y;
        cout<<"Enter Expiry Year "<<endl;
        cin>>year;
        if(year!=y)
        {

            cout<<"Invalid year"<<endl;
            cin>>year;
        }
        in.close();
















    return 0;
}
