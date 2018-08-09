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
  void store_words(std::vector<std::string>& v);
  double dot_product(std::vector<std::string> temp1,std::vector<std::string> temp2);
  double angle(std::map<std::string,int> m1,std::map<std::string,int> m2);
};
