#include <iostream>
#include "include/rapidjson/document.h"
#include <string>
#include <fstream>
using namespace std;
int main () {
				// declare the document object
				rapidjson::Document doc;

				// initialize the input file
				ifstream streamy ("test.json");

				// put the whole file's data into wholeFile
				string wholeFile;
				string temp;
				while(getline(streamy,temp)){wholeFile+= temp;}
				streamy.close ();

				// call parse on the string
				doc.Parse (wholeFile.c_str());
				// make sure the parsing worked
				if (doc.IsObject ()) cout << "ITS AN OBJECT" << endl << endl;

				/*
				 * Getting the values of a string object
				 */

				// check that notArray is an object
				doc["metadata"]["notArray"].IsObject();
				// get the value of notArray in the form of a String
				string notArr = doc["metadata"]["notArray"].GetString();
				cout << "notArr: " << notArr << endl << endl;

				/*
				 * Getting the values inside an array of string objects
				 */

				// check that Array is an object
				doc["metadata"]["Array"].IsObject();
				// check that Array is an array
				doc["metadata"]["Array"].IsArray();
				// loop over all the values of array
				for (auto &v : doc["metadata"]["Array"].GetArray ()) {
				cout << "Value: " <<  v.GetString () << endl;
				}

}
