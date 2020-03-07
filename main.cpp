#include <iostream>
#include <stdlib.h>
using namespace std;
struct student{
    string imie ;
    string nazwisko;
    string plec;
    string pesel;
    long double numer_ind;

};
void display_student(student &s);
void add_random (student &s);
void display_all_students(student s[], int n);
int main()
{
    student irena;
    /* cout<<"podaj imie"<<endl;
     cin>>irena.imie;
     cout<<"podaj nazwisko"<<endl;
     cin>>irena.nazwisko;
     cout<<"podaj plec ";
     cin>>irena.plec;
     cout<<"podaj pesel ";
     cin>>irena.pesel;
     cout<<"podaj nr indeksu ";
     cin>>irena.numer_ind;
     display_student(irena);*/

    student tablica[1000];
    for(int i=0; i <1000; i++)
    {
        add_random(tablica[i]);
    }
    display_all_students(tablica, 3);
    return 0;
}
void display_student(student &s)
{
    cout<<s.imie<<endl;
    cout<<s.nazwisko<<endl;
    cout<<s.pesel<<endl;
    cout<<s.plec<<endl;
    cout<<s.numer_ind<<endl;
}
void add_random (student &s) {
    string rodzaj[2];
    rodzaj[0] = "kobieta";
    rodzaj[1] = "mezczyzna";

    s.numer_ind = rand() % 1000000 + 100000;
    s.plec = rodzaj[rand() % 2];
    s.pesel = "000000000";
    s.imie = "irena";
    s.nazwisko = "nazwisko";
}
void display_all_students(student s[], int n)
{
    for(int i=0; i<n; i++)
    {
        display_student(s[i]);
        cout<<endl;
    }
}
