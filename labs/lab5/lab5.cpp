#include "File.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void populateDirectory(vector<File>&);
// fill vector - fills file info
// @param vector<File>& - files in directory


void printDirectory(vector<File>&);
//printDirectory - prints the information of the files in the directory
//@param const vector<File>& files in directory 

int main () {
	//Creates a new directory of files
  vector<File> myDirectory;
	//Populates the vector
  populateDirectory(myDirectory);
  //Prints the contents of the vector
  printDirectory(myDirectory);
  return 0;
}

void populateDirectory(vector<File>& newDirectory) {
  
  //Write this function
  //Needs to ask how many files
  int files;
  string fileName;
  string fileType;
  int fileSize;
  cout<<"How many files are in this directory"<< endl;
  cin>>files;
  for(int i = 0; i<files; i++)
    {
      cout << "File" << i << endl;
      cout << "File Name:" << endl;
      cin>> fileName;
      cout << "File Type: " <<endl;
      cin>>fileType;
      cout<<"File Size (in kB)"<< endl;
      cin>>fileSize;
      newDirectory.push_back(File(fileName,fileType,fileSize));
      }
  
  //Gets file name, file type, and file size
  //Uses the overloaded constructor for the file
  //Needs to add files to the directory vector
  
}

void printDirectory(vector<File>& newMyFile){
  //Needs to loop through the directory of files and outputs the information
  
  for(unsigned int i = 0; i < newMyFile.size();i++){

    // cout<< newMyFile.at(i).GetFileName() << endl;
    // cout<< newMyFile.at(i).GetFileType() << endl;
    // cout<< newMyFile.at(i).GetFileSize() << endl;
    cout<<newMyFile.at(i).PrintFile()<< endl;
  }
  
}
