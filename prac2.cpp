#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n = 10;
    int temp;
    for (int i = 0; i < n + 1; i++){
        int digsum = 0;
        int j = i;
        while (j > 0){
            temp = j % 10;
            digsum += temp;
            j /= 10;
        }
        if (digsum % 3 == 0){
            sum += i;
        }
    }
    cout << "sum of all the numbers divisble by 3 are : " << sum << endl;
    return 0;
}