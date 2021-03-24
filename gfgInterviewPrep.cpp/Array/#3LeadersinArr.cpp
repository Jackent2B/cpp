#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin>>n;
        arr[n];
        for (int j = 0; j < n; ++j)
            cin>>arr[j];

        int max_right = arr[n-1];
        for (int k = n-2; k>=0; k--)
        {
            if (arr[k]>max_right)
            {
                max_right=arr[k];
                cout<<max_right<<" ";
            }
        }
    }
    return 0;
}


//Method 2 (Naive approach)
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             }

        
//         for(int j=0;j<n-1;j++){
//             bool flag = true;
//             for (int k = j+1; k < n; k++)
//             {
//                 if(arr[j]>=arr[k])
//                     continue;
//                 else{
//                     flag=false;
//                     break;
//                 }
//             }

//             if (flag){
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<arr[n-1]<<endl;
//     }
//     return 0;
// }