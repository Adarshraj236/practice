#include <iostream>
using namespace std;

int main()
{
    int n,i,j,c1=0,c2=0,c3=-1,d=0,k,temp=0;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array\n";
    for(i=0;i<n;i++)
    cin>>arr[i];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    k=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]!=k){
            d++;
        }
        for(j=0;j<n;j++){
            if(arr[i]==arr[j])
            {
                c1++;
            }
        }
        if(c1!=c2){
            c3++;
        }
        c2=c1;
        c1=0;
        k=arr[i];
    }
    if(c3==k)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}
