#include <iostream>
#include <vector>
#define ll long long 
using namespace std;

int main() {
   {
 ll i, n , m ,sum = 0 , a , b, c, val_stor , val_stor1 , val_stro2 , val_stor3 , count_kor = 0 , k, val_max = 0 , z;
cin >> a >> b >> c ;
vector <ll> v ;
v.push_back(a) ;
v.push_back(b) ;
v.push_back(c) ;
swap(v[0],v[1] ) ;
swap(v[0],v[2]) ;
n = 3 ;
for(i=0;i<n;i++) {
    cout << v[i] << " " ;
}
    }

    return 0;
}
