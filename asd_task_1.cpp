/**
    NAMA  :Baginda Praka Ginting
    NIM   :1301154113
    KELAS :39-01
**/
#include <iostream>
using namespace std;
int nilai,uasp,utsp,tubesp,a,b,c,d,e,hasil;

void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
    int pilihan;
    do
    {
        cout << "MAIN MENU"<<endl<< "1. Set Standar index nilai"<<endl << "2. Set Proporsi Nilai" << endl << "3. Input Nilai" <<endl<<"4. Keluar"<<endl<<"Pilihan : ";
        cin >> pilihan ;cout<<endl;
        switch (pilihan)
        {
        case 1 :
            set_standar();break;
        case 2 :
            set_proporsi_nilai();break;
        case 3 :
            input_nilai();break;
        }
    }
    while(pilihan !=4);
    thank_you();
}
void set_proporsi_nilai()
{do
    {
        cout <<"Masukkan prosentase UTS : ";cin >> utsp;
        cout <<"Masukkan prisentase UAS : ";cin >> uasp;
        cout <<" Masukkan prosentase TUBES : ";cin >> tubesp;
        if (utsp + uasp + tubesp != 100)
        {
            cout << "Prosentase Harus 100,Silahkan input ulang"<<endl<<endl<<endl;
        }
    }
    while (utsp + uasp + tubesp != 100);
}
void set_standar()
{do
    {
        cout << "Masukkan nilai minimal A : ";cin >> a;
        cout << "Masukkan nilai minimal B : ";cin >> b;
        cout << "Masukkan nilai minimal C : ";cin >> c;
        cout << "Masukkan nilai minimal D : ";cin >> d;

        if ((a<=b)||(b<=c)||(c<=d)||(d<=e))
            cout << "Nilai yang diinputkan salah, input ulang";
    }
    while ((a<=b)||(b<=c)||(c<=d)||(d<=e));
}
char hitung_index(double uts, double uas, double tubes)
{
    char index;
    cout << "Nilai anda : ";
    hasil = (utsp*uts/100)+(uasp*uas/100)+(tubesp*tubes/100);
    if (hasil >= a)
        cout <<"A";
    else if (hasil >= b)
        cout <<"B";
    else if (hasil >= c)
        cout <<"C";
    else if (hasil >= d)
        cout <<"D";
    else
        cout << "E";
        cout<<endl<<endl;
    return index;
}
void input_nilai()
{
    double uas, uts, tubes;
    cout <<"Masukkan nilai UTS : ";
    cin >> uts;
    cout <<"Masukkan nilai UAS : ";
    cin >> uas;
    cout <<"Masukkan nilai TUBES : ";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
}
void thank_you()
{
    cout << "Thank You For Using This Simple Program" << endl << "Baginda Praka G" << endl <<"1301154113"<<endl<<endl;
}
