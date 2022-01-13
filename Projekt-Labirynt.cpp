#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
string labirynt[10][20] = { {"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","@","#","#","#"},
                            {"#"," "," "," "," "," ","#"," "," ","#"," "," "," "," ","#","#"," ","#"," ","#"},
                            {"#"," ","#","#","#"," "," "," ","#","#"," ","#","#"," ","#","#"," ","#"," ","#"} ,
                            {"#"," ","#","#"," ","#","#"," "," ","#"," ","#","#"," ","#","#"," "," "," ","#"} ,
                            {"#"," "," ","#"," "," ","#","#","#","#"," ","#","#"," ","#","#","#","#"," ","#"} ,
                            {"#","#"," ","#","#"," ","#","#"," "," "," ","#","#"," ","#","#","#","#"," ","#"} ,
                            {"#"," "," "," "," "," ","#","#"," ","#"," ","#","#"," "," "," "," "," "," ","#"} ,
                            {"#"," ","#"," ","#"," ","#"," "," ","#"," ","#","#","#","#","#","#","#","#","#"} ,
                            {"$"," ","#"," ","#"," "," "," ","#","#"," "," "," "," "," "," "," "," ","#","#"} ,
                            {"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"} , };

void gg()
{
    string koniec[10][20] = {{"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"},
                             {"#"," "," "," "," "," ","#"," "," "," "," "," ","#"," ","#","#"," ","#"," ","#"},
                             {"#"," ","#","#","#","#","#"," ","#","#","#","#","#"," ","#","#"," ","#"," ","#"} ,
                             {"#"," ","#","#","#","#","#"," ","#","#","#","#","#"," ","#","#"," ","#"," ","#"} ,
                             {"#"," ","#","#","#","#","#"," ","#","#","#","#","#"," ","#","#"," ","#"," ","#"} ,
                             {"#"," ","#"," "," "," ","#"," ","#"," "," "," ","#"," ","#","#"," ","#"," ","#"} ,
                             {"#"," ","#","#","#"," ","#"," ","#","#","#"," ","#"," ","#","#"," ","#"," ","#"} ,
                             {"#"," ","#","#","#"," ","#"," ","#","#","#"," ","#","#","#","#","#","#","#","#"} ,
                             {"#"," "," "," "," "," ","#"," "," "," "," "," ","#"," ","#","#"," ","#"," ","#"} ,
                             {"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"} , };
    for (int i = 0; i < 10; i++)
    {
        for (int n = 0; n < 20; n++)
        {
            cout << koniec[i][n] << " ";
            if (n == 19) cout << "\n";
        }
    }
}
void start2()
{
    cout << "WITAJ W LABIRYNCIE!\n";
    cout << "Zasady sa proste: musisz dojsc do wyjscia\n Aby to wykonac bedziesz sie poslugiwac prostymi komendami:\n l - ruch w lewo\n p - ruch w prawo\n g - ruch w gore \n d - ruch w dol.\n";
    cout << "Kazda komenda musi byc potwierdzona\n";
    cout << "Legenda symboli;\n # - sciana \n ' ' - dostepna sciezka \n $ - poczatek labiryntu \n @ - wyjscie z labiryntu \n 0 - aktualna pozycja gracza (pojawi sie po pierwszym poprawnie wykonanym ruchu)\n";
    cout << "POWODZENIA";
}
void wypisz()
{
  
    for (int i = 0; i < 10; i++)
    {
        for (int n = 0; n < 20; n++)
        {
            cout << labirynt[i][n] << " ";
            if (n == 19) cout << "\n";
        }
    }
}
void sciana()
{
    int x;
    x = rand() % 5;
    if (x == 0) {
        cout << "Glowa muru nie przebijesz!\n";
    }
    if (x == 1) {
        cout << "BUM!! Alc, to musialo bolec.\n";
    }
    if (x == 2) {
        cout << "Checz sobie nabic guza czy co?\n";
    }
    if (x == 3) {
        cout << "Szybciej stad wyjdziesz idac droga a nie wbijajac sie w sciany.\n";
    }
    if (x == 4) {
        cout << "Tak, sciany sa z litej skaly, nie musisz tego sprawdzac swoja twarza\n";
    }
}
void droga() 
{
    int x;
    x = rand() % 5;
    if (x == 0) {
        cout << "Wykonano duzy krok ku wolnosci!\n";
    }
    if (x == 1) {
        cout << "Jestes coraz blizej.... chyba.\n";
    }
    if (x == 2) {
        cout << "To maly krok dla czlowieka, ale wielki dla krasnala.\n";
    }
    if (x == 3) {
        cout << "Cieplo, cieplej....\n";
    }
    if (x == 4) {
        cout << "Dobrze, naprawde dobrze ci idzie\n";
    }
}


int main()
{
    
    start2();
    cout << "\n-------------------\n";
    wypisz();
    cout << "\n";
    string znak;
    int x = 8;
    int y = 0;
    while (true)
    {
        cout << "Jaki ruch chcesz wykonac? (l-krok w lewo, p-krok w prawo, g - krok w gore, d - krok w dol): ";
        cin >> znak;
        cout << "\n";
        // w gore
        if (znak == "g")
        {
            if (labirynt[x][y] == "$")
            {
                if (labirynt[x - 1][y] == "#")
                {
                    sciana();
                }
                if (labirynt[x - 1][y] == " ")
                {
                    labirynt[x][y] = "#";
                    labirynt[x - 1][y] = "0";
                    x = x - 1;
                    droga();
                }
            }
            else 
            {
                if (labirynt[x - 1][y] == "@")
                {
                    labirynt[x - 1][y] = "0";
                    labirynt[x][y] = " ";
                    break;
                }
                if (labirynt[x - 1][y] == "#")
                {
                    sciana();
                }
                if (labirynt[x - 1][y] == " ")
                {
                    labirynt[x][y] = " ";
                    labirynt[x - 1][y] = "0";
                    x = x - 1;
                    droga();
                }
                
            }
        }
        // w dol
        else if (znak == "d")
        {
            if (labirynt[x][y] == "$")
            {
                if (labirynt[x + 1][y] == "#")
                {
                    sciana();
                }
                if (labirynt[x + 1][y] == " ")
                {
                    labirynt[x][y] = "#";
                    labirynt[x + 1][y] = "0";
                    x = x + 1;
                    droga();
                }
            }
                else
                {
                    if (labirynt[x + 1][y] == "@")
                    {
                        labirynt[x][y] = " ";
                        labirynt[x + 1][y] = "0";
                    break;
                    }
                    if (labirynt[x + 1][y] == "#")
                    {
                        sciana();
                    }
                    if (labirynt[x + 1][y] == " ")
                    {
                        labirynt[x][y] = " ";
                        labirynt[x + 1][y] = "0";
                        x = x + 1;
                        droga();
                    }
                   
                }
            }
        
        // w prawo
        else if (znak == "p")
        {
            if (labirynt[x][y] == "$")
            {
                if (labirynt[x][y + 1] == "#")
                {
                    sciana();
                }
                if (labirynt[x][y + 1] == " ")
                {
                    labirynt[x][y] = "#";
                    labirynt[x][y + 1] = "0";
                    y = y + 1;
                    droga();
                }
            }
            else
            {
                if (labirynt[x][y + 1] == "@")
                {
                    labirynt[x][y + 1] = "0";
                    labirynt[x][y] = " ";
                    break;
                }
                if (labirynt[x][y + 1] == "#")
                {
                    sciana();
                }
                if (labirynt[x][y + 1] == " ")
                {
                    labirynt[x][y] = " ";
                    labirynt[x][y + 1] = "0";
                    y = y + 1;
                    droga();
                }
                
            }
        }
        // w lewo
        else if (znak == "l")
        {
            if (labirynt[x][y - 1] == "$")
            {
                if (labirynt[x][y - 1] == "#")
                {
                    sciana();
                }
                if (labirynt[x][y - 1] == " ")
                {
                    labirynt[x][y] = "#";
                    labirynt[x][y - 1] = "0";
                    y = y - 1;
                    droga();
                }
            }
            else
            {
                if (labirynt[x][y - 1] == "@")
                {
                    labirynt[x][y - 1] = "0";
                    labirynt[x][y] = " ";
                    break;
                }
                if (labirynt[x][y - 1] == "#")
                {
                    sciana();
                }
                if (labirynt[x][y - 1] == " ")
                {
                    labirynt[x][y] = " ";
                    labirynt[x][y - 1] = "0";
                    y = y - 1;
                    droga();
                }

            }
        }
        else {
            cout << "Podano zla komende \n";
        }
        cout << "\n";
        wypisz();
        cout << "\n";
        
    }
    wypisz();
    cout << "\n";
    cout << "GRATULACJE\n";
    cout << "\n";
    gg();
    
    
    
    

    return 0;
}