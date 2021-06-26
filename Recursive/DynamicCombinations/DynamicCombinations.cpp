//Dynamic Combinations: combination of n things taken r at a time without repetition. Is based on Tartaglia triangle


#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int combinations(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n = 0, r = 0;
    int tartaglia[10][10];

    for(int i = 0; i < 11; i ++){
        for(int j = 0; j <= i; j ++){
            if((j == 0) || (j == i))
                    tartaglia[i][j] = 1;
            else tartaglia[i][j] = combinations(i, j);
        }
    }

    while (n >= 0){
        cin >> n >> r;

        if ((n > 10) || (r > 10)){
            cout << "ERROR" << endl;
        }else if (n < r) {
              cout << "ERROR" << endl;
        }
        else cout << tartaglia[n][r]<< endl;
    }


    return 0;
}

