#include <iostream>
using namespace std;
int main(){
    int n=4,product=1;
    for (int i=n;i>0;i--){
        product*=i;
    }
    cout<<product<<endl;
return 0; }