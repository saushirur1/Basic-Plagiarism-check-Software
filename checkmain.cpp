#include<iostream>
#include<map>
#include <vector>
#include <fstream>
#include "check.h"
using namespace std;
int main()
{
string filename1="";
string filename2="";
cout << "Enter filename 1" << endl;
cin >> filename1;
cout << "Enter filename 2" << endl;
cin >> filename2;
check obj1;
obj1.convert_tolines(filename1,filename2);
return 0;
}
