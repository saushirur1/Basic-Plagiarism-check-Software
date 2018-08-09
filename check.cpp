#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <math.h>
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
  string line1="";
  string result="";
  string result1="";
  ifstream infile1(file1);
  ifstream infile2(file2);
  cout << "here" << endl;
  while(getline(infile1,line))
  {
  result=result+line+" ";
  }
  infile1.close();
  while(getline(infile2,line1))
  {
    result1=result1+line1+" ";
  }
  infile2.close();
  convert_towords(result,words1);
  convert_towords(result1,words2);
  store_words(words1,hashmap1);
  store_words(words2,hashmap2);
  // helper_toprintmap(hashmap1);
  // helper_toprintmap(hashmap2);
  double x =dot_product(hashmap1,hashmap2);
  cout << "hwere: " << x << endl;
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
void check::store_words(vector<string>& words,map<string,int>& hashmap)
{
for(int i=0;i<words.size();i++)
{
  string topush=words[i];
  if(hashmap.find(topush)!=hashmap.end())
  {
    hashmap[topush]=hashmap[topush]+1;
  }
  else
  {
    hashmap[topush]=1;
  }
}
}
void check::helper_toprintmap(map<string,int>& map1)
{
map<string,int>::iterator it;
for(it=map1.begin();it!=map1.end();++it)
{
  cout << "first = " << it->first << " second = " << it->second << endl;
}
}
double check::dot_product(map<string,int>& temp1,map<string,int>& temp2)
{
  double numerator =product(temp1,temp2);
  cout << "numerator" << numerator << endl;
  double denominator = count(temp1)*count(temp2);
  helper_toprintmap(temp1);
  cout << "denominator" << denominator << endl;
  return (acos(numerator/denominator))*((180.0/3.141592653589793238463));
}
double check::product(map<string,int>& m1,map<string,int>& m2)
{
  double sum=0.0;
  map<string,int>:: iterator it;
  for(it=m1.begin();it!=m1.end();++it)
  {
    if(m2.find(it->first)!=m1.end())
    {
      sum=sum+((it->second)*(m2[it->first]));
    }
    else
    {
      sum=sum;
    }
  }
  return sum;
}
double check::count(map<string,int>& countmap)
{
  int count=0;
  map<string,int>::iterator it;
  for(it=countmap.begin();it!=countmap.end();++it)
  {
    count=count+it->second;
  }
  return count;
}
