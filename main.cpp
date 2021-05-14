//Author: Alex Kuntzler

#include <iostream>
#include <fstream>
#include <string>
#include<sstream>
#include <vector>
#include "colors.h"



using namespace std;
string RandomDistinctColors(int choice);
int StoreColor(vector<string>,string filename);
int FileSearch(int upper, int lower);
bool DupeChecker(int RND,vector<int>&list);
vector<int> RandomNumberList;
vector<string>ColorChoices;

int main()

{
  int CVR,CVG,CVB;
  int choice;
  int choice2;
  ColorStorage Html;
  int increment = 0;
  int linenumber = 1;
  int upperbound;
  int lowerbound;
  cout << "Please pick a number corresponding to your desired color. \n 1. Red \n 2. Pink \n 3. Orange \n 4. Yellow \n 5. Purple \n 6. Green \n 7. Blue \n 8. Brown \n 9. White \n 10. Gray \n" << endl; 
  cin >> choice;
  switch (choice)
  {
    case 1 :
    lowerbound = 1;
    upperbound = 10;
    cout << "Please pick a shade of Red from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 2 :
    lowerbound = 10;
    upperbound = 16;
    cout << "Please pick a shade of pink from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 3 :
    lowerbound = 16;
    upperbound = 20;
    cout << "Please pick a shade of orange from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 4 :
    lowerbound = 20;
    upperbound = 31;
    cout << "Please pick a shade of yellow from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 5 :
    lowerbound = 31;
    upperbound = 50;
    cout << "Please pick a shade of purple from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 6 :
    lowerbound = 50;
    upperbound = 73;
    cout << "Please pick a shade of green from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 7 :
    lowerbound = 73;
    upperbound = 98;
    cout << "Please pick a shade of blue from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 8 :
    lowerbound = 98;
    upperbound = 115;
    cout << "Please pick a shade of brown from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 9 :
    lowerbound = 115;
    upperbound = 132;
    cout << "Please pick a shade of white from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break;
    case 10 :
    lowerbound = 132;
    upperbound = 142;
    cout << "Please pick a shade of grey from this list" << endl;
    FileSearch(upperbound,lowerbound);
    cin >> choice2;
    break; 
  }
  Html.StoreColors(ColorChoices[choice2 - 1]); 
  string filename;
  cout << "Please enter the name of your file." << endl;  
  cin.ignore();
  getline(cin,filename);
 
    for( int i = 0; i < 5; i++)
    {
      Html.StoreColors((RandomDistinctColors(choice)));
    
    }
    Html.FileStore(filename);
    ifstream file;
    file.open(filename);
    if (file.is_open())
    {   
    
      string line;
      while(getline(file,line))
      { 
         cout << line << "\n"; 
      }
      file.close(); 
    
    }
  return 0;
  
}
// Generates random colors, checks for duplicates, and for problematic colors
string RandomDistinctColors(int choice)
{
  
 string TempHex;
 bool Checker = true;
 int linenumber = 0;
 int n;
 switch (choice)
 {
   case 1 :
      while(Checker)
        {
          n = rand() %141+1;
          //inequalities based on colorlist2.txt to exclude colors based on types of color blindness
          if(n >= 50 and n < 73)
            {
            }
          else
            {
              if(DupeChecker(n,RandomNumberList) == false)
              {
                Checker = false;
              }
            }
   }
      break;
   case 4 :
      while(Checker)
        {
          n = rand() %141+1;
          if(n >= 50 & n < 73)
              {
              }
            else
              {
                if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
              }
   }
      break;
   case 5:
      while(Checker)
        {
          n = rand() %141+1;
          if(n >= 73 & n < 98)
            {
            }
          else
            {
              if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
            }
   }
   break;
   case 6 :
      while(Checker)
        {
          n = rand() %141+1;
          if((n>=1 & n<10 )&(n>= 50 & n < 73)&(n>=73 & n<98)&(n>=132 & n<=142))
          {
          }
          else
            {
              if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
            }
        }
   break;
   case 7 :
      while(Checker)
        {
          n = rand() %141+1;
          if((n >= 50 & n < 73)&(n>=31 & n<50)&(n>=132 & n<=142))
            {
            }
          else
            {
              if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
            }
        }
   break;
   case 8 :
      while(Checker)
        {
          n = rand() %141+1;
          if(n >= 50 & n < 73)
            {
            }
          else
            {
              if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
            }
        }
   break;
   case 10 :
      while(Checker)
        {
          n = rand() %141+1;
          if((n >= 50 & n < 73)&(n>=73 & n<=98))
            {
            }
          else
            {
              if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
            }
        }
   break;
   default :
   while(Checker)
   {
    n = rand() %141+1;
   if(DupeChecker(n,RandomNumberList)== false)
              {
                Checker = false;
              }
   }
    break;

 }
  ifstream file ("colorlist2.txt");
    
    if (file.is_open()){   
    
      string line;
    while(getline(file,line))
      {
        linenumber++;
        if (linenumber == n)
       {
         TempHex = line;    
        }
         
     }
     
    }
    return TempHex;

}

// Gives the list of color shades
int FileSearch(int upper, int lower)
{
  int linenumber = 0;
  int option = 0;
  ifstream file;
    file.open("colorlist2.txt");
    if (file.is_open())
    {   
    
      string line;
      while(getline(file,line))
      { 
        linenumber++;
        if (linenumber >=lower & linenumber <upper)
        {
         option++;
         ColorChoices.push_back(line);
         cout << option << ". " << line << "\n";
         
        } 
      }
      file.close(); 
    
    }
    return 0;
}
// Checks for duplicate random numbers
bool DupeChecker(int RND,vector<int>&list)
{
  bool Checker = true;
  while (Checker)
 {
  if (RandomNumberList.size() == 0)
  {
    list.push_back(RND);
  }
  else
  {
    for(int i = 0; i < RandomNumberList.size();i++)
      {
        if( RND == list[i])
          {
            
            return true;
          
    
         }
        else
          {
           Checker = false;
           break;
      

          }
       }
  }
 }
   list.push_back(RND);
    return Checker;
}