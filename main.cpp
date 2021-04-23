//Author: Alex Kuntzler

#include <iostream>
#include <fstream>
#include <string>
#include<sstream>
#include <vector>



using namespace std;
string RandomDistinctColors();
string ConvertColor(int R, int G, int B);
int StoreColor(vector<string>,string filename);

int main()

{
  int CVR,CVG,CVB;
  vector <string> Hex;
  string DupeChecker;
  int itteration = 0;
  int increment = 0;
  int linenumber = 1;
  while (increment < 3)
  {
    int fail = 0;
    switch (increment)
    {
      case 0 :
      if (fail == 0)
      {
       cout << "Please enter your desired color value for red (0-255)" << endl;
      }
      cin >> CVR;
      if (CVR >= 0 && CVR<=255 )
      {
        increment ++;
        fail = 0;
      }
      else
      {
        cout << "Your color value needs to be between 0 and 255." << endl;
        fail ++;
      }
      break;
      case 1 :
      if (fail == 0)
      {
        cout << "Please enter your desired color value for green (0-255)" << endl;
      }
      cin >> CVG;
      if (CVG >= 0 && CVG<=255 )
      {
        increment ++;
        fail = 0;
      }
      
      else{
        fail++;
        cout << "Your color value needs to be between 0 and 255." << endl;
      }
      break;

      case 2 :
      if (fail == 0)
      {
        cout << "Please enter your desired color value for blue (0-255)" << endl;
      }
      cin >> CVB;
      if (CVB >= 0 && CVB<=255 )
      {
        increment ++;
        fail = 0;
      }
      else 
      {
        fail++;
        cout << "Your color value needs to be between 0 and 255." << endl;
      }
      break;
      default :
      break;
    }
    
  }
  string filename;
  cout << "Please enter the name of your file." << endl;
  Hex.push_back(ConvertColor(CVR,CVG,CVB));  
  cin.ignore();
  getline(cin,filename);
 
    for( int i = 1; i < 5; i++)
    {
      Hex.push_back(RandomDistinctColors());
    }
    StoreColor(Hex,filename);

    


  
 /* ofstream MyFile;
  MyFile.open(filename+=".txt");
  
   if (MyFile.is_open())
   {
     for (int i = 0; i<6;i++)
        if (i==0)
        {
          MyFile << CVR << endl;
          MyFile << CVG << endl;
          MyFile << CVB << endl;
        }
        else if (i == 1)
        {
          MyFile << 255- CVR << endl;
          MyFile << 255 - CVG << endl;
          MyFile << 255 - CVB << endl;
        }
        else 
        {
          for(int i = 0; i<3;i++)
          {
            int randomColor;
            randomColor = rand() % 256;
            MyFile << randomColor << endl;

          }

        }

     
   }
    MyFile.close();
*/
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

string ConvertColor(int R, int G, int B)
{
  std::stringstream ss;
	
		ss << "#";
	ss << std::hex << (R << 16 | G << 8 | B);
	return ss.str();
  }



int StoreColor(vector <string> Hex,string filename)
{
  ofstream MyFile;
   MyFile.open(filename);
  if (MyFile.is_open())
  {
    for (int i = 0; i < 5; i++)
  {
  
   
       MyFile << Hex[i] << endl;
    
  }
       MyFile.close();
     }
      return 0;
   }
   
   
  

string RandomDistinctColors()
{
  
 string TempHex;
 int linenumber = 0;
  int n = rand() % 141+1;
  ifstream file ("colorlist.txt");
    
    if (file.is_open()){   
    
      string line;
    while(getline(file,line))
      {
        linenumber++;
        if (linenumber == 2*n)
       {
         TempHex = line;
         
       }
         
     }
     
    
    }
    return TempHex;

}