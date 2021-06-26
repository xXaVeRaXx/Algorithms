//Buuble Sort: sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order

#include <iostream>
#include <cstring>

using namespace std;

void order_array_bubble(int *array, int num){
    int temp = 0;

    for(int i = 1; i < num-1; i++){
       for(int j = 0; j < num-i-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
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

	order_array_bubble(array, num);

    return 0;
}



