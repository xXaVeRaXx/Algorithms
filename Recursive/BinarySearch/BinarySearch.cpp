//Binary Search: search algorithm that finds the position of a target value within a sorted array

#include <iostream>

using namespace std;

int binary_search(int *num, int beggin, int end, int search){

    int control = (beggin + end)/2;

    if(beggin > end)
        return -1;
    else if(search == num[control])
        return control;
    else{
        if(num[control] > search)
            return binary_search(num, beggin, control - 1, search);
        else return binary_search(num, control + 1, end, search);
    }
}

int main()
{
    int n;

    cin >> n;

    int *num = new int[n];

    for (int i = 0; i < n; i ++)
        cin >> num[i];

    while(1){
        int number;
        cin >> number;

        if(number == -1)
            break;

        int result = binary_search(num, 0, n-1, number);
        cout << result << endl;
    }

    return 0;
}

