#include <iostream>

using namespace std;

int max(int x , int y)
{
if (x>y)
return x;
else
return y;
}

int main(){

int x = 10 , y = 20;

int m = max(x,y);

cout<<"value is "<< m;
return 0;
}



