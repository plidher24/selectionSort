#include<iostream>

using namespace std;

//selectionSort function


void selectionSort(int *array, int length) {
    int i, j, imin;
    for(i = 0; i<length-1; i++) {
        imin = i;
        for(j = i+1; j<length; j++)
            if(array[j] < array[imin])
                imin = j;
        swap(array[i], array[imin]);
    }
}

void swaparray(int &x, int &y) {
    int temp;       //take each element of the array and write it in the variable temp(int)
    temp = x;
    x = y;
    y = temp;
}

void display(int *array, int length) {
    for(int i = 0;
        i<length; i++)
        cout << array[i] << " ";
    cout << endl;
}


//main function should put the numbers in the array
//call selection sort function
//display numbers after sorting
int main() {
    int n;
    cout << "Please Enter how many elements you are entering in the array!: "; cin >> n;


    int array[n];
    cout << "\nPlease type in digits to be sorted:" << endl;
    cout << "Separate Digits by spaces not commas!!!" << endl;


    for(int i = 0; i<n; i++) {
        cin >> array[i];
    }

    selectionSort(array, n);
    cout << "After Selection Sort: ";
    display(array, n);
}