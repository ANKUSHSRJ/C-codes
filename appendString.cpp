//append two strings
//way 1 - using append
//way 2 - simply using + operator
//way 3 - using s1+s2 in s1
 #include <iostream>
 #include<string>
 using namespace std;
int main (){

string s1 ="fam";
string s2 = "ily";

s1=s1+s2;
//way 1 -- s1.append(s2);
//way 2 --cout<<s1+s2<<endl;
cout<<s1<<endl;
cout<<s1[1]<<endl;

return 0;

}



