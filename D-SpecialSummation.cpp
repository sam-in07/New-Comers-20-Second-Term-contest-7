#include <iostream>
#include <vector>
#define ll long long 
using namespace std;

int main() {
   {
 ll i, j ,  n , m ,sum = 0 , a , b, c, val_stor , val_stor1 , val_stro2 , val_stor3 , count_kor = 0 , k, val_max = 0 , z;
 cin >> n ;
 ll ara[n][n];
 for(i = 0 ; i < n ; i++) {
    for(j = 0 ; j < n ; j++) {
        cin >> ara[i][j];
    }
 }
  for(i = 0 ; i < n ; i++) {
    for(j = 0 ; j < n ; j++) {
        if(i==j) {
            sum +=  ara[i][j];
        }
    }
 }
 cout << sum << endl;
    }

    return 0;
}
