#ifndef COLORS_H
#define COLORS_H
#include<string>
#include<vector>

using std::string;
using std::vector;

class ColorStorage
{
  private :
  vector <string> HtmlColorList;


  public :
  int StoreColors (string color);
  int FileStore(string filename);
  int ReadColorList();

};

#endif