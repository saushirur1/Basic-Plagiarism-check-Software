#include<iostream>
#include<map>
#include <vector>
class check
{
private:
  std::map<std::string,int> hashmap1;
  std::map<std::string,int> hashmap2;
  std::vector<std::string> words;
public:
  check();
  void convert_towords(std::string text1,std::string text2);
  void store_words(std::vector<std::string>& v);
  double dot_product(std::map<std::string,int>& map1,std::map<std::string,int>& map2);
  double angle(std::map<std::string,int> m1,std::map<std::string,int> m2);
};
