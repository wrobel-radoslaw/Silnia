#include <iostream>

using namespace std;

int main()
{
    int Liczba;
    cout << "Podaj liczbe z ktorej liczona bedzie silnia: ";
    cin >> Liczba;

    int silnia = 1;

    for (int i = 1; i <= Liczba; i++)
    {
        silnia *= i;
    }

    cout << "Silnia liczby " << Liczba << " wynosi: " << silnia << endl;

    return 0;
}