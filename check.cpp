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
  store_words(words1,hashmap1);
  store_words(words2,hashmap2);
  helper_toprintmap(hashmap1);
  helper_toprintmap(hashmap2);
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
