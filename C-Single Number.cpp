#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
   {
 ll i, j ,  n , m ,sum = 0 , a , b, c, val_stor , val_stor1 , val_stro2 , val_stor3 , count_kor = 0 , k, val_max = 0 , z;
       cin >> n ;

    unordered_map<int, int> frequency;  
    int number;

    
    for (i = 0; i < n; ++i) {
        cin >> number;
        frequency[number]++;
    }

    
    for (auto &entry : frequency) {
        if (entry.second == 1) {
            cout << entry.first << endl;
            break;
        }
    }
   }
    return 0;
}
