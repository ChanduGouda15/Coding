#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number: "<<endl;
    cin >> n;
  
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum = sum + j;
            }
            
            
        }
        if(sum == i)
            {
                cout << i << endl;
            }
    }
    
    return 0;
}