# include <iostream>
using namespace std;

int main(){
    int n;
    int key, j;
    cout << "Enter size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int i=1; i<n; i++){
        key = arr[i];
        j = i-1;
        while (j>=0 and arr[j]>key){
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }

    cout << "Sorted Array" << endl;
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}