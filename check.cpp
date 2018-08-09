#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include "check.h"
using namespace std;
check::check()
{
  cout << "constructor" << endl;
}
void check::convert_tolines(string file1,string file2)
{
  vector<string> lines1;
  vector<string> lines2;
  string line ="";
  string result="";
  string result1="";
  ifstream infile1(file1);
  ifstream infile2(file2);
  cout << "here" << endl;
  while(getline(infile1,line))
  {
  result=result+line+" ";
  }
  line="";
  while(getline(infile2,line))
  {
    result1=result1+line+" ";
  }
  convert_towords(result,words1);
  convert_towords(result1,words2);
}
void check::convert_towords(string t,vector<string>& temp)
{
string s="";
for(int i=0;i<t.length();i++)
{
  if(t[i]==' ' || t[i]=='.' || i==t.length()-1)
  {
  temp.push_back(s);
  s="";
  }
  else
  {
    s=s+t[i];
  }
}
}
