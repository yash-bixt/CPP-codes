// #include <iostream>
// using namespace std;

// int main(){

// int n;
// cin>>n;                           //bubble sort!!
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// int c=1;
// while(c<n){

// for(int i=0;i<n-c;i++){

// if(arr[i]>arr[i+1]){

//     int temp=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=temp;
// }

// }
// c++;
// }

// cout<<"Sorted array:"<<endl;

// for(int i=0;i<n;i++){

//    cout<<arr[i]<<" ";
// }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n)
// {
//     int st=1;
//     while(n>st){
//     for(int i=0;i<n-st;i++){
//         if(arr[i]>arr[i+1]){
// swap(arr[i],arr[i+1]);
//             // int swap=arr[i];
//             // arr[i]=arr[i+1];
//             // arr[i+1]=swap;
//         }

//     }
//     st++;

//     }

// for(int i=0;i<n;i++){
//     cout<<" "<<arr[i];
// }

// }

// int main(){

// int kilo[8]={2,5,8,1,9,19,14,10};

// bubbleSort(kilo,8);

//     return 0;
// }

#include <iostream>
using namespace std;


void  bs(int arr[],int n){


for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }


}

for(int i=0;i<n;i++){

    cout<<" "<<arr[i];
}

}


    


int main()
{

 

int seat[7]={2,6,9,7,1,87,46};


bs(seat,7);

    return 0;
}

