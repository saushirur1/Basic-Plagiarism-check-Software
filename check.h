#include<iostream>
#include<map>
#include<fstream>
#include <vector>
class check
{
private:
  std::map<std::string,int> hashmap1;
  std::map<std::string,int> hashmap2;
  std::vector<std::string> words1;
  std::vector<std::string> words2;
public:
  check();
  void convert_tolines(std::string text1,std::string text2);
  void convert_towords(std::string s,std::vector<std::string>& w);
  void store_words(std::vector<std::string>& v,std::map<std::string,int>& hash);
  double dot_product(std::map<std::string,int>& temp1,std::map<std::string,int>& temp2);
  double product(std::map<std::string,int>& m1,std::map<std::string,int>& m2);
  void helper_toprintmap(std::map<std::string,int>& map_toprint);
  double count(std::map<std::string,int>& hashmp);
};
