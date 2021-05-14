#include "colors.h"
#include <string>
#include <vector>
#include <fstream>
#include<iostream>

using std ::string;
using std :: vector;
using namespace std;

int ColorStorage::StoreColors(string color)
{
  HtmlColorList.push_back(color);
      
  return 0;
}
int ColorStorage::FileStore(string filename)
{
  ofstream MyFile;
   MyFile.open(filename);
  if (MyFile.is_open())
  {
    for (int i = 0; i < HtmlColorList.size(); i++)
  {
  
   
       MyFile << HtmlColorList[i] << endl;
    
  }
       MyFile.close();
     }
      return 0;
   }
   int ColorStorage::ReadColorList()
   {
     for(int i = 0; i < HtmlColorList.size(); i++)
     {
       cout << HtmlColorList[i];
     }
     return 0;
   }