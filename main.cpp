#include <iostream>

using namespace std;

void licz_netto(double brutto, double vat);
void licz_brutto(double netto, double vat);

int wybor;
double vat, brutto, netto;

int main()
{
    for (;;)
    {
    cout <<"\n"<< "Licz netto z kwoty brutto- Wybierz 1" << endl;
    cout << "--------------------------------------------------" << "\n";
    cout << "Licz brutto z kwoty netto- Wybierz 2" << endl;
    cout << "--------------------------------------------------" << "\n";
    cin>> wybor;

    if (wybor== 1)
    {
    system ("cls");
    cout << "Prosze wpisac kwote brutto:"<< endl;
    cin>> brutto;
    cout << "Prosze wpisac stawke vat:"<< endl;
    cin>> vat;
    licz_netto(brutto, vat);

    }

    else if (wybor==2)
    {
    system("cls");
    cout << "Prosze wpisac kwote netto:"<< endl;
    cin>> netto;
    cout << "Prosze wpisac stawke vat:"<< endl;
    cin>> vat;
    licz_brutto(netto, vat);
    }

    else
    {
        cout<< "\nDokonano niezgodnego wyboru. Wprowadz raz jeszcze."<< endl;
    }

    }
    return 0;
}

void licz_brutto(double netto, double vat)
{

brutto = netto*(1+(vat/100));
cout<< "\nWartosc brutto wprowadzonej kwoty dla stawki vat " <<vat<<"% wynosi: "<<brutto<< endl;
    cout<< "\nNacisnij enter, aby liczyc ponownie";
    getchar();
    getchar();
    system("cls");
}

void licz_netto(double brutto, double vat)
{

    netto = brutto/(1+(vat/100));
    cout<< "\nWartosc netto wprowadzonej kwoty dla stawki vat "<< vat<<"% wynosi: "<<netto<<endl;
    cout<< "\nNacisnij enter, aby liczyc ponownie";
    getchar();
    getchar();
    system("cls");


}


