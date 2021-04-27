#include <iostream>

using namespace std;
//kelimenin içerisindeki harflerin alfabetik olarak sıralanması
int main()
{

    string dizi;
    int sayac=0;
    int temp;

    cout<<"lutfen bir kelime giriniz"<<endl;
    cin>>dizi;

    while(dizi[sayac] !='\0'){

        sayac++;
    }

     int i=0,j=0;

     while(i<sayac)
     {
         j=i+1;
         while(j<sayac)
         {
             if(dizi[i]>dizi[j]){
                temp= dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
             }
             j++;
        }
        i++;
     }

     cout<<dizi<<endl;

    return 0;
}
