# include <iostream>
using namespace std;

int main(){
    int n, x, ans=0, i;
    cout << "Enter size of the array:" << endl;
    cin >> n;
    int arr[n];

    cout << "Enter array elements" << endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you want to search:" << endl;
    cin >> x;

    for(i=0; i<n; i++){
        if (arr[i]==x){
            ans += 1;
            break;
        }
    }
    if (ans==1){
        cout << "Element is present at index : " << i << endl;

    } else
        cout << "Element is not present in the array";

}