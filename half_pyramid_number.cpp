#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Your pyramid is : "<<endl;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;

        
    }


}
