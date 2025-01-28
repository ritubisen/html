#include <iostream>
#include<limits>
#include<climits>
using namespace std;

int main()

{
int a;
cout<<&a<<endl;  //memory location

cout<<sizeof(int)<<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(bool)<<endl;
cout<<sizeof(double)<<endl; // sizeof(datatype)  sizeof() 
                        

cout<<numeric_limits<int>::max()<<endl;
cout<<numeric_limits<int>::min()<<endl;

cout<<numeric_limits<char>::min()<<endl;



}