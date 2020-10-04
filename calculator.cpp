#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout<<"Selamat datang di program kalkulator\n";
    cout<< "Masukan Angka= ";
    cin>>a;
    cout<< "Masukan Operator +,-,/,*= ";
    cin>>aritmatika;
    cout<< "Masukan Angka= ";
    cin>>b;
    cout<<"\nHasil perhitungan: ";
    cout<< a<<aritmatika<<b;

    if (aritmatika=='+')
    {
    hasil=a+b;
    cout<<"-->"<<hasil;
    }

    else if(aritmatika=='-'){
    hasil=a-b;
    cout<<"-->"<<hasil;
    }
     else if(aritmatika=='*'){
    hasil=a*b;
    cout<<"-->"<<hasil;
    }
     else if(aritmatika=='/'){
     hasil=a/b;
     cout<<"-->"<<hasil;
    }
    else
    {
    cout << "Maaf Operator Yang Anda Masukan Salah" << endl;
    }





    return 0;
}