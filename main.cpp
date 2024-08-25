#include <iostream>
using namespace std;

int main(){
int x = 100;
int y = 1000000;
int a = sizeof x;
int b = sizeof y;
if(a > b) cout<<"Sakarya";
if(b > a) cout<<"Istanbul";
else cout<<"Ankara";
return 0;
}