#include <bits/stdc++.h>
using namespace std;

int main(){

    int *p, *q;
    int i;

    p = (int *)malloc(5*sizeof(int));
    q = (int *)malloc(10*sizeof(int));

    cout << p << " " << q << endl;
    cout << "----------------------------" << endl;

    for(i=0; i<5; i++){
        p[i] = i+1;
        cout << p[i] << endl;

        cout << "----------------------------" << endl;

        q[i] = p[i];
        cout << q[i] << endl;

        cout << "----------------------------" << endl;
    }

    cout << p << " " << q << endl;
    cout << "----------------------------" << endl; 

    if(p != NULL){
        free(p);
        p = NULL;
    }
   

    p = q;
    cout << p << endl;
    cout << "----------------------------" << endl; 
    q = NULL;

    for(i=0; i<10; i++){
        if(i>=5 && i<10){
            p[i] = i+1;
        }
        cout << p[i] << endl;
    }

    return 0;
}