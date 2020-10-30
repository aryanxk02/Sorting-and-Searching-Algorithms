# include <iostream>
using namespace std;

//int BinarySearch(int arr, int mid, int low, int high, int x){
//    mid = (low+high)/2;
//    if (x==mid){
//        cout << "Element present at index " << mid;
//    }
//    else if(x>mid){
//        low = mid;
//        BinarySearch(arr, mid, low, high, x);
//    }
//    else{
//        high = mid;
//        BinarySearch(arr, mid, low, high, x);
//    }
//    return 0;
//}

int main(){
    int n;
    cout << "Enter size of the array :" << endl;
    cin >> n;
    int x;
    int low=1, high=n-1, mid;
    int arr[n];
    cout << "Enter elements in the sorted order" << endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "enter element to be searched :" << endl;
    cin >> x;

    do{
        mid = (low+high)/2;

        if (x>arr[mid]){
            low = mid;
        } else if (x<arr[mid])
        high = arr[mid];
        else if ((arr[mid]==arr[high]==arr[low])!=x){
            cout<<"Element not present in the array";
            break;}

    }while (x!=arr[mid]);
    if (x==arr[mid])
    cout << "Element found at index " << mid;
}