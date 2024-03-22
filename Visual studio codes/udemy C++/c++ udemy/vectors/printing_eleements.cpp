#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void print_vector(vector<int>w)
{
    cout<<"vecror is: "<<endl;
    for(int i=0;i<w.size();i++)
    {
        cout<<w[i];
    }
}


int main(){
    int n;
    cout<<"enter size: "<<endl;
    cin>>n;
    vector<int>w(n);
    for(int i=0;i<w.size();i++)
    {
        cin>>w[i];
        
    }
    print_vector(w);
    return 0;
}