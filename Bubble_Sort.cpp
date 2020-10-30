// Bubble Sort

# include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int n;
    cout << "Enter size of array :";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : " << endl;

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    //iterate over the array
    for(int i=0; i<n; i++){

        // n-1-i elements are sorted
        for (int j=0; j<n-1-i; j++){

            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << "Sorted array : " << endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}