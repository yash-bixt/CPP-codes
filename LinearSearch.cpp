#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){



}





int main(){
    
int arr[11]={2,-9-7,-4,6,9,4,5,-5,0,16};


cout<<"Enter the element to be searched"<<endl;

int key;
cin>>key;

bool found = search(arr,10,key);
if(found){
    cout<<"Element is present"<<endl;
}
else{

    cout<<"Element is absent"<<endl;
}

    return 0;
}