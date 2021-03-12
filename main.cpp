//Author: Alex Kuntzler
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()

{
  int CVR,CVG,CVB;
  int increment = 0;
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
  cin.ignore();
  getline(cin,filename);
  ofstream MyFile;
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

    ifstream file;
    file.open(filename);
    if (file.is_open()){   //checking whether the file is open
    
      string line;
      while(getline(file,line))
      { //read data from file object and put it into string.
         cout << line << "\n"; //print the data of the string
      }
      file.close(); //close the file object.
    
    }
   
    
  




  


  return 0;
}
