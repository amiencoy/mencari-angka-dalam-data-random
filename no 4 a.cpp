#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(0));
    int cari,i,j,m,data[1000];
    int flag=0;
    int a=0;
    
	for (j=0;j<1000;j++)
    {
        data[j]=1+rand()%100;
    }
    
	cout<<"Masukan angka yang dicari = ";
	cin >>cari;
    
	for (i=0;i<1000;i++)
    {
        if(data[i] == cari)
        {
            flag=1;
            a++;
        }
    }
   /*
    if (flag==1)
    {
        cout << "Jumlah data = " << a;
    }
    
    else
        cout << "Data tidak ditemukan.";
   */
    for (m=0;m<1000;m++)
    {
		cout << data[m] <<" ";
    }
    cout<<endl;
    
   
    if (flag==1)
    {
        cout << "Jumlah angka pada data = " << a;
    }
	else
        cout << "Data tidak ditemukan.";
}