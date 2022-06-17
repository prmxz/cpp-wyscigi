// POP 2017-12-15 projekt 1 Dembowski Lukasz EIT 1 171651         srodowisko  Code::Blocks 16.01  kompilator   GNU GCC Compiler

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


const int x=30;             // wymiary mapy
const int y=8;


char mapa1[y][x]={      {'x','x','S','T','A','R','T','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x'},
                        {'x',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x'},
                        {'x',' ',' ',' ',' ',' ',' ','x',' ',' ','x',' ',' ',' ',' ','x','x','x',' ','x','x','x','x','x','x','x','x','x',' ','x'},
                        {'x',' ',' ',' ','x','x','x','x',' ',' ',' ','x','x',' ',' ','x',' ','x',' ','x',' ',' ',' ',' ','x','x',' ','x',' ','x'},
                        {'x',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ','x',' ',' ','x',' ','x','x','x',' ',' ',' ',' ','x',' ',' ','x',' ','x'},
                        {'x','x',' ',' ',' ',' ',' ',' ',' ','x',' ',' ','x','x','x','x',' ',' ',' ','x',' ',' ','x',' ',' ',' ','x',' ',' ','x'},      //Plansza nr 1
                        {'x','x',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ','x'},
                        {'x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','M','E','T','A','x','x'}};

 char mapa2[y][x]={     {'x','x','S','T','A','R','T','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x'},
                        {'x',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ','x'},
                        {'x',' ',' ',' ',' ',' ','x',' ',' ',' ','x','x','x','x','x',' ',' ',' ','x',' ',' ','x',' ',' ',' ',' ','x',' ',' ','x'},
                        {'x',' ',' ',' ','x','x','x',' ',' ',' ',' ',' ','x','x','x',' ','x','x','x',' ',' ','x',' ',' ','x','x','x',' ',' ','x'},
                        {'x',' ',' ',' ','x','x','x',' ','x','x','x',' ','x','x','x',' ','x',' ',' ',' ','x','x',' ',' ','x',' ',' ',' ',' ','x'},
                        {'x','x',' ',' ',' ',' ',' ',' ','x',' ',' ',' ','x','x','x',' ','x',' ',' ','x','x',' ',' ','x','x',' ',' ','x','x','x'},      //Plansza nr 2
                        {'x','x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ','x'},
                        {'x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','M','E','T','A','x','x'}};


char mapa3[y][x]={      {'x','x','S','T','A','R','T','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x'},
                        {'x',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ',' ','x','x','x','x','x','x',' ',' ','x'},
                        {'x',' ',' ',' ',' ',' ',' ','x','x',' ',' ',' ','x',' ',' ',' ','x',' ',' ','x',' ',' ',' ','x',' ',' ',' ',' ',' ','x'},
                        {'x',' ',' ',' ',' ',' ',' ',' ','x','x',' ',' ','x','x',' ',' ','x','x',' ','x','x',' ',' ','x',' ','x','x','x',' ','x'},
                        {'x',' ',' ',' ',' ',' ',' ','x','x','x','x',' ',' ','x','x',' ',' ','x',' ',' ','x',' ',' ',' ',' ','x',' ',' ',' ','x'},
                        {'x',' ',' ',' ',' ',' ',' ','x',' ',' ','x','x',' ','x','x','x',' ','x',' ','x','x',' ',' ','x','x','x',' ',' ',' ','x'},      //Plansza nr 3
                        {'x',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','x',' ',' ',' ','x',' ',' ',' ','x',' ',' ',' ',' ',' ','x'},
                        {'x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','x','M','E','T','A','x','x'}};

char mapa4[y][x]={      {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},      //Plansza pusta, sluzy do generowania losowej
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}};



const char granica='x';     //znak granicy(sciany)
const int x1_start=4;       // startowe wspolrzedne obu pojazdow
const int y1_start=1;
const int x2_start=2;
const int y2_start=1;
const int v1_start=1;
const int v2_start=1;
const int y_meta=7;
const int x_meta1=24;
const int x_meta2=25;               // wspolrzedne mety
const int x_meta3=26;
const int x_meta4=27;
const string k1="p";           // lista komend
const string k2="p-";
const string k3="p+";
const string k4="d";
const string k5="d-";
const string k6="d+";
const string k7="g";
const string k8="g-";
const string k9="g+";
const string k10="l";
const string k11="l-";
const string k12="l+";
const string k13="dp";
const string k14="dp-";
const string k15="dp+";
const string k16="dl";
const string k17="dl-";
const string k18="dl+";
const string k19="gp";
const string k20="gp-";
const string k21="gp+";
const string k22="gl";
const string k23="gl-";
const string k24="gl+";


void intro()                                                    //ekran powitalny
{
    cout << "WITAJCIE W WYSCIGACH!" << endl <<  "W TEJ GRZE STOCZYCIE WALKE O ZWYCIESTWO I TYTUL KROLA WYSCIGOW!" <<endl;
    cout << "Zasady: " << endl << "Zwycieza zawodnik, ktory jako pierwszy umiesci swoj pionek na jednej z liter pola 'META'" << endl << "Kazdy z zawodnikow ma okreslona predkosc (zaczyna od 1 kratki na ture)" << endl << "podczas wykonania ruchu moze ja zwiekszyc (dodajac + na koncu komendy ruchu)/zmniejszyc" << endl << "(odpowiednio -) o 1 jednostke lub pozostawic bez zmian." << endl << "Jesli wpadniesz na sciane(znak 'x')/ wyjdziesz za mape, wracasz na 'START'.";
    cout << endl << "Sterowanie: " << endl << "g - gora" << endl << "p - prawo" << endl << "d - dol" << endl << "l - lewo" << endl << "odpowiednio polaczenie dwoch sasiadujacych kierunkow pozwala na ruch po skosie" << endl << "(np. gp - do gory i w prawo)." << endl;
    cout << endl << "P O W O D Z E N I A ! ! !" << endl;
}

 void wypisz(char mapa1[y][x])
 {

      for (int i=0;i<y;i++) // wypisanie planszy
    {
        cout << endl;
        for (int j=0;j<x;j++)
        {
            cout << mapa1[i][j];
        }
    }
}


void ruch_g1(int & v1, char mapa1[y][x], int & x1, int & y1, bool & zwyciestwo1)                            // funkcja wywolujaca ture gracza 1
{
    string ruch1;
    cout << endl << endl;
    cout << endl << "Graczu 1, podaj ruch, jaki chcesz wykonac (twoja predkosc to " << v1 <<"): ";  cin >> ruch1;
    mapa1[y1][x1]=' ';
    if (ruch1 != k1 && ruch1 != k2 && ruch1 != k3 && ruch1 != k4 && ruch1 != k5 && ruch1 != k6 && ruch1 != k7 && ruch1 != k8 && ruch1 != k9 && ruch1 != k10 && ruch1 != k11 && ruch1 != k12 && ruch1 != k13 && ruch1 != k14 && ruch1 != k15 && ruch1 != k16 && ruch1 != k17 && ruch1 != k18 && ruch1 != k19 && ruch1 != k20 && ruch1 != k21 && ruch1 != k22 && ruch1 != k23 && ruch1 != k24)
    {
        do
        {
            cout << "Graczu 1: Bledna komenda! Sprobuj ponownie: "; cin >> ruch1;
        }
        while (ruch1 != k1 && ruch1 != k2 && ruch1 != k3 && ruch1 != k4 && ruch1 != k5 && ruch1 != k6 && ruch1 != k7 && ruch1 != k8 && ruch1 != k9 && ruch1 != k10 && ruch1 != k11 && ruch1 != k12 && ruch1 != k13 && ruch1 != k14 && ruch1 != k15 && ruch1 != k16 && ruch1 != k17 && ruch1 != k18 && ruch1 != k19 && ruch1 != k20 && ruch1 != k21 && ruch1 != k22 && ruch1 != k23 && ruch1 != k24);
    }
    if (ruch1==k1) {x1=v1+x1;}
    if (ruch1==k2) {v1=v1-1; x1=v1+x1;}
    if (ruch1==k3) {v1=v1+1; x1=v1+x1;}
    if (ruch1==k4) {y1=v1+y1;}
    if (ruch1==k5) {v1=v1-1; y1=v1+y1;}
    if (ruch1==k6) {v1=v1+1; y1=v1+y1;}
    if (ruch1==k7) {y1=y1-v1;}
    if (ruch1==k8) {v1=v1-1; y1=y1-v1;}
    if (ruch1==k9) {v1=v1+1; y1=y1-v1;}
    if (ruch1==k10) {x1=x1-v1;}
    if (ruch1==k11) {v1=v1-1; x1=x1-v1;}
    if (ruch1==k12) {v1=v1+1; x1=x1-v1;}
    if (ruch1==k13) {x1=v1+x1; y1=v1+y1;}                                       // zmiany wspolrzednych pionka przy poszczegolnych ruchach
    if (ruch1==k14) {v1=v1-1; x1=v1+x1; y1=v1+y1;}
    if (ruch1==k15) {v1=v1+1; x1=v1+x1; y1=v1+y1;}
    if (ruch1==k16) {y1=v1+y1; x1=x1-v1;}
    if (ruch1==k17) {v1=v1-1; y1=v1+y1; x1=x1-v1;}
    if (ruch1==k18) {v1=v1+1; y1=v1+y1; x1=x1-v1;}
    if (ruch1==k19) {y1=y1-v1; x1=v1+x1;}
    if (ruch1==k20) {v1=v1-1; y1=y1-v1; x1=v1+x1;}
    if (ruch1==k21) {v1=v1+1; y1=y1-v1; x1=v1+x1;}
    if (ruch1==k22) {y1=y1-v1; x1=x1-v1;}
    if (ruch1==k23) {v1=v1-1; y1=y1-v1; x1=x1-v1;}
    if (ruch1==k24) {v1=v1+1; y1=y1-v1; x1=x1-v1;}
    if (y1>=y || x1 >=x || mapa1[y1][x1]==granica || y1<=0 || x1<=0)            //uderzenie w sciane / wyjscie za mape gracza 1
    {
        y1=y1_start;
        x1=x1_start;                                        //  cofniecie na start
        v1=v1_start;

    }
    mapa1[y1][x1]='1';
    if ((y1==y_meta)&&(x1==x_meta1 || x1==x_meta2 || x1==x_meta3 || x1==x_meta4))               // jesli gracz znajdzie sie na jednej z liter pola 'META', wtedy odnosi on zwyciestwo
        {
            zwyciestwo1=true;                                                                   // jesli gracz zwyciezy
            cout << "WYGRYWA GRACZ 1 !";
        }

}


void ruch_g2(int & v2, char mapa1[y][x], int & x2, int & y2,bool & zwyciestwo2)
{
    string ruch2;
    cout << endl << endl;
    cout << endl << "Graczu 2, podaj ruch, jaki chcesz wykonac (twoja predkosc to " << v2 << "): "; cin >> ruch2;
    mapa1[y2][x2]=' ';
    if (ruch2 != k1 && ruch2 != k2 && ruch2 != k3 && ruch2 != k4 && ruch2 != k5 && ruch2 != k6 && ruch2 != k7 && ruch2 != k8 && ruch2 != k9 && ruch2 != k10 && ruch2 != k11 && ruch2 != k12 && ruch2 != k13 && ruch2 != k14 && ruch2 != k15 && ruch2 != k16 && ruch2 != k17 && ruch2 != k18 && ruch2 != k19 && ruch2 != k20 && ruch2 != k21 && ruch2 != k22 && ruch2 != k23 && ruch2 != k24)
    {
        do
        {
            cout << "Graczu 2: Bledna komenda! Sprobuj ponownie: "; cin >> ruch2;
        }
        while (ruch2 != k1 && ruch2 != k2 && ruch2 != k3 && ruch2 != k4 && ruch2 != k5 && ruch2 != k6 && ruch2 != k7 && ruch2 != k8 && ruch2 != k9 && ruch2 != k10 && ruch2 != k11 && ruch2 != k12 && ruch2 != k13 && ruch2 != k14 && ruch2 != k15 && ruch2 != k16 && ruch2 != k17 && ruch2 != k18 && ruch2 != k19 && ruch2 != k20 && ruch2 != k21 && ruch2 != k22 && ruch2 != k23 && ruch2 != k24);
    }
    if (ruch2==k1) {x2=v2+x2;}
    if (ruch2==k2) {v2=v2-1; x2=v2+x2;}
    if (ruch2==k3) {v2=v2+1; x2=v2+x2;}
    if (ruch2==k4) {y2=v2+y2;}
    if (ruch2==k5) {v2=v2-1; y2=v2+y2;}
    if (ruch2==k6) {v2=v2+1; y2=v2+y2;}
    if (ruch2==k7) {y2=y2-v2;}
    if (ruch2==k8) {v2=v2-1; y2=y2-v2;}
    if (ruch2==k9) {v2=v2+1; y2=y2-v2;}
    if (ruch2==k10) {x2=x2-v2;}
    if (ruch2==k11) {v2=v2-1; x2=x2-v2;}
    if (ruch2==k12) {v2=v2+1; x2=x2-v2;}
    if (ruch2==k13) {x2=v2+x2; y2=v2+y2;}
    if (ruch2==k14) {v2=v2-1; x2=v2+x2; y2=v2+y2;}
    if (ruch2==k15) {v2=v2+1; x2=v2+x2; y2=v2+y2;}
    if (ruch2==k16) {y2=v2+y2; x2=x2-v2;}
    if (ruch2==k17) {v2=v2-1; y2=v2+y2; x2=x2-v2;}
    if (ruch2==k18) {v2=v2+1; y2=v2+y2; x2=x2-v2;}
    if (ruch2==k19) {y2=y2-v2; x2=v2+x2;}
    if (ruch2==k20) {v2=v2-1; y2=y2-v2; x2=v2+x2;}
    if (ruch2==k21) {v2=v2+1; y2=y2-v2; x2=v2+x2;}
    if (ruch2==k22) {y2=y2-v2; x2=x2-v2;}
    if (ruch2==k23) {v2=v2-1; y2=y2-v2; x2=x2-v2;}
    if (ruch2==k24) {v2=v2+1; y2=y2-v2; x2=x2-v2;}
    if ((y2>=y || x2 >=x || mapa1[y2][x2]==granica || y2<=0 || x2<=0))
    {
        y2=y2_start;
        x2=x2_start;
        v2=v2_start;

    }
    mapa1[y2][x2]='2';
    if ((y2==y_meta)&&(x2==x_meta1 || x2==x_meta2 || x2==x_meta3 || x2==x_meta4))
        {
            zwyciestwo2=true;
            cout << "WYGRYWA GRACZ 2 !";
        }

}


void losowa_mapa(int & wybor_mapy)
{
    wybor_mapy=rand()%4 + 1;                                // wybiera opcje od 1 do 4 w menu glownym(losowo)

}

 void generuj(char mapa[y][x])
 {

      for (int i=0;i<y;i++)
    {
        for (int j=0;j<x;j++)
        {
            if (i==0 || i==7)
                mapa[i][j]='x';
            else if (j==0 || j==29)                                         // obramowanie mapy
                mapa[i][j]='x';
            else
                if ((rand()%2==1) && ((mapa[i-1][j]==' ') && (mapa[i+1][j]==' ') && (mapa[i][j+1]==' ') && (mapa[i][j-2]==' ') && (mapa[i+1][j+1]==' ') ))                  //funkcja generuje losowa mape (tak aby umozliwic dotarcie do mety)
                    mapa[i][j]='x';
        }
    }
    mapa[0][2]='S';
    mapa[0][3]='T';
    mapa[0][4]='A';
    mapa[0][5]='R';
    mapa[0][6]='T';
    mapa[7][24]='M';
    mapa[7][25]='E';
    mapa[7][26]='T';
    mapa[7][27]='A';
}


int main()
{
    srand(time(NULL));
    intro();
    int wybor_mapy=0;
    int x1=x1_start; int y1=y1_start;
    int x2=x2_start; int y2=y2_start;                               // ustawienie startowe pionkow oraz ich predkosci
    int v1=v1_start;
    int v2=v2_start;
    bool zwyciestwo1=false;                 // czy gracz 1 wygral?
    bool zwyciestwo2=false;                 // czy gracz 2 wygral?
    cout << "Wybierz mape, na ktorej chcesz przeprowadzic rozgrywke" << endl << " (1 - latwa; 2 - trudniejsza; 3 - najtrudniejsza; 4 - losowa(generowana automat.); " << endl << "5 - losowa(wybrana jedna z reszty opcji)): ";
    cin >> wybor_mapy;

    if (wybor_mapy!=1 && wybor_mapy!=2 && wybor_mapy!=3 && wybor_mapy!=4 && wybor_mapy!=5)                                              // jesli podano bledna opcje
    {
        do
        {
            cout << "Podales bledny nr mapy, sprobuj jeszcze raz: ";
            cin >> wybor_mapy;
        }
        while (wybor_mapy!=1 && wybor_mapy!=2 && wybor_mapy!=3 && wybor_mapy!=4 && wybor_mapy!=5);                                  // dopoki nie zostanie podana prawidlowa opcja
    }

    if (wybor_mapy==5)
        losowa_mapa(wybor_mapy);

    if (wybor_mapy==1)                                          // jesli wybrano opcje 1
        {
                mapa1[y1_start][x1_start]='1';
                mapa1[y2_start][x2_start]='2';
        wypisz(mapa1);                                          //wyswietl mape
    while(zwyciestwo1==false && zwyciestwo2==false)// dopoki ktos nie wygra rozpoczynaj kolejne tury
            {
    ruch_g1(v1,mapa1,x1,y1,zwyciestwo1);
    if(zwyciestwo1==true) break;                    // zwyciestwo konczy gre natychmiastowo
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl; // przejrzystosc rozgrywki (widac tylko jedna mape - najbardziej aktualna)
    wypisz(mapa1);                                  // wyswietl mape po wykonaniu ruchu przez gracza
    ruch_g2(v2,mapa1,x2,y2,zwyciestwo2);
    if(zwyciestwo2==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa1);
            }
             }

    if (wybor_mapy==2)
        {
                mapa2[y1_start][x1_start]='1';
                mapa2[y2_start][x2_start]='2';
            wypisz(mapa2);
    while(zwyciestwo1==false && zwyciestwo2==false)
            {
    ruch_g1(v1,mapa2,x1,y1,zwyciestwo1);
    if(zwyciestwo1==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa2);
    ruch_g2(v2,mapa2,x2,y2,zwyciestwo2);
    if(zwyciestwo2==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa2);
            }
            }

    if (wybor_mapy==3)
        {
                mapa3[y1_start][x1_start]='1';
                mapa3[y2_start][x2_start]='2';
            wypisz(mapa3);
    while(zwyciestwo1==false && zwyciestwo2==false)
            {
    ruch_g1(v1,mapa3,x1,y1,zwyciestwo1);
    if(zwyciestwo1==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa3);
    ruch_g2(v2,mapa3,x2,y2,zwyciestwo2);
    if(zwyciestwo2==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa3);
            }
            }

    if (wybor_mapy==4)
        {
            generuj(mapa4);
                mapa4[y1_start][x1_start]='1';
                mapa4[y2_start][x2_start]='2';
            wypisz(mapa4);
    while(zwyciestwo1==false && zwyciestwo2==false)
            {
    ruch_g1(v1,mapa4,x1,y1,zwyciestwo1);
    if(zwyciestwo1==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa4);
    ruch_g2(v2,mapa4,x2,y2,zwyciestwo2);
    if(zwyciestwo2==true) break;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    wypisz(mapa4);
            }
            }


    return 0;

}
