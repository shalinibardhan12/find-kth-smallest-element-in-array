 #include<iostream>
 #include<array>
using namespace std;

int FindKthMin( array<int,10> arr,int n,int k)
{
    int smallest;
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    smallest = arr.at(k-1);
    return smallest;
}
int main()
{
    int smallest , k;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter kth element to find"<<endl;
    cin>>k;
    array<int,10> arr ;
    cout<<"enter the element of array"<<endl;
    
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
   smallest= FindKthMin(arr,n,k);
    cout<< k<<" smallest element in this array is:  "<<smallest<<endl;
    return 0;
}