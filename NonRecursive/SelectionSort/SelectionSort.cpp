// Selection Sort is an in-place comparison sorting algorithm
//Complexity: O(n^2)

#include <iostream>
#include <cstring>

using namespace std;

void order_array_selection(int *array, int num){
    int temp = 0;

    for(int i = 0; i < num-1; i++){
       for(int j = i+1; j < num; j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                temp = 0;
            }
        }

       for(int k = 0; k < num; k++){
           cout << array[k] << " ";
       }
       cout << endl;
    }

}

int main()
{
    int num = 0;
    int position_value = 0;

    cin >> num;
    cout << endl;

    int *array = new int[num];

    for (int i = 0; i < num; ++i){
        cin >> position_value;
        array[i] = position_value;
    }

	order_array_selection(array, num);

    return 0;
}

