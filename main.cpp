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
				if(doc["metadata"]["notArray"].IsObject()) cout << "title is a valid value" << endl;
				// get the value of notArray in the form of a String
				string notArr = doc["metadata"]["notArray"].GetString();
				cout << "notArr: " << notArr << endl << endl;

				/*
				 * Getting the values inside an array of string objects
				 */

				// check that Array is an object
				if(doc["metadata"]["Array"].IsObject()) cout << "Array is a valid value" << endl;
				// check that Array is an array
				if(doc["metadata"]["Array"].IsArray()) cout << "Array is an array" << endl;
				// loop over all the values of array
				for (auto &v : doc["metadata"]["Array"].GetArray ()) {
				cout << "Value: " <<  v.GetString () << endl;
				}

}
