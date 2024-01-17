1. #include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    int arr[5]; 
    cout<<"elemnts"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elemnts"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
  
    
  
    
    return 0; 
}







2. #include <iostream> 
using namespace std; 
  
int main() 
{ 
   int n;
   cout<<"eneter value of n"<<endl;
   cin>>n;
    int arr[n]; 
    cout<<"elemnts"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elemnts"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
  
    
  
    
    return 0; 
}
3. #include <iostream> 
using namespace std; 
  
int main() 
{ 
    int a[3][3];
    cout<<"elements"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"elements"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
  
    

