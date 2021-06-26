// Merge Sort: is an efficient, general-purpose, and comparison-based sorting algorithm

#include<iostream>

using namespace std;

void  combine(int a[ ] , int len_a , int b[ ] , int len_b , int c[ ])
{
    int i = 0, j = 0, k = 0;

    while((i < len_a) && (j < len_b)){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++;
        } else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while( i < len_a){
        c[k] = a[i];
        i++;
        k++;
    }

    while( j < len_b){
        c[k] = b[j];
        j++;
        k++;
    }

    return;

}


void mergeSort(int x[], int len)
{
    int temp[len];

    if (len <= 1)
      return;

    else{
        int middle = len/2;
        int *left = new int[middle];
        int *right = new int[len - middle];
        for(int i = 0; i < len; i++){
            if(i < middle)
                left[i] = x[i];
            else right[i - middle] = x[i];
        }
		mergeSort(left, middle);
		mergeSort(right, len - middle);

		combine(left, middle, right, len - middle, temp);

        for (int k = 0; k < len; k++){
            x[k] = temp[k];
            cout<<x[k]<<" ";
        }
        cout<<endl;
    }
}



int main()
{

    int n;

    cin>>n;

    int *x=new int[n];

    for(int i=0;i<n;i++)
      cin>>x[i];

    mergeSort(x,n);
}

