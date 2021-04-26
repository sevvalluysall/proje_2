#include <iostream>

using namespace std;
//Ucgen iç açılarına göre tipini söyleyen program
int main()
{
    int ucgenAci1,ucgenAci2, ucgenAci3 ;

    cout << "lutfen ucgenin ic acilarini giriniz"<< endl;

    cin>> ucgenAci1 >> ucgenAci2 >> ucgenAci3;

    int ucgenAcilarToplami;

    ucgenAcilarToplami=ucgenAci1+ucgenAci2+ucgenAci3;

    if(ucgenAcilarToplami==180)
    {
        if(ucgenAci1==ucgenAci2)
        {
            cout<<"bu ucgen eskanar ucgendir"<< endl;
        }

        else if (ucgenAci1==ucgenAci2 && ucgenAci1 != ucgenAci3)
        {
            cout<<"bu ucgen ikizkenar ucgendir"<< endl;
        }
        else if (ucgenAci1==ucgenAci3 && ucgenAci2 != ucgenAci3)
        {
            cout<<"bu ucgen ikizkenar ucgendir"<< endl;
        }
        else if (ucgenAci3==ucgenAci2 && ucgenAci1 != ucgenAci3)
        {
            cout<<"bu ucgen ikizkenar ucgendir"<< endl;
        }
        else
        {
            cout<<"bu ucgen cesitkenar ucgendir"<< endl;
        }
    }
    else
    {
        cout<<"girdiginiz acilar 180 derece olmamaktadir"<< endl;
    }



    return 0;
}
