#include <iostream>
using namespace std;


double recur(double N, double y)

{
    y = y * (N / (N - 1)) * (N / (N + 1));

    if (N > 2) { return recur(N - 2, y); }
    return y;
}
//---------------------------------------------------------------------------
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");

    int N;
    cout << "Введите четное число: ";
    cin >> N;

    cout << "y= " << recur(N, 1);
    return 0;
}