#include <iostream>
#include <iomanip>

using namespace std;

void Filling(int* list, const int size, const int Low, const int High);
void Calculate(int* list, const int size, int& count);
void Output(int* list, const int size);

int main()
{

    srand((unsigned)time(NULL));

    const int n = 10;
    int c[n] = { 1 };

    int Min = -100;
    int Max = 100;

    int sum = 0;
    int count = 0;

    cout << "rec" << endl;
    cout << endl;

    Filling(c, n, Min, Max);
    cout << "Masive: "; Output(c, n);

    Calculate(c, n, count);
    cout << "Count: " << setw(4) << count << endl;

    int minmod = abs(c[0]);
    int minmodn;
    for (int i = 0; i < n; i++) {
        if (minmod > abs(c[i])) {
            minmod = abs(c[i]);
            minmodn = i;
        }
    }
    cout << "Minimal mod: " << minmod << endl;
    cout << "Minimal mod number: " << minmodn << endl;
    int sumn = 0;
    for (int i = minmodn + 1; i < n; i++) {
        sumn = sumn + abs(c[i]);
    }
    cout << sumn << endl;


}

void Filling(int* list, const int size, const int Min, const int Max)
{
    for (int i = 0; i < size; i++)
        list[i] = rand() % (Max - Min + 1) + Min; // де Min - ліва межа, а Max - права
}

void Calculate(int* list, const int size, int& count) {
    for (int i = 0; i < size; i++)
    {
        if (list[i] < 0) {
            count++;
        }
    }
}

void Output(int* list, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(3) << list[i];
    cout << endl;
}

