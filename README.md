# Getting Started With RapidJson

## Original Documentation
The documentation on [RapidJson's Website](https://rapidjson.org/) is a very great resource. This sheet will go over very simple actions and how to get started with using this tool. If you wish to use more complex, or possibly more quick options, then you may refer to their documentation.

## Getting started
Because RapidJson is a header-only implementation, you will only need to include the files from the include folder into your project. I would suggest downloading the .zip folder and simply copy-pasting the [Include folder](https://github.com/Tencent/rapidjson/tree/master/include/rapidjson) into your project.

After you have put the entirety of the Include folder into your project, then you should be all set to start parsing!

## Parsing Documents
There are a couple of ways to gather input from .json documents, but this tutorial will only cover one. It will be up to y'all to decide if you would like to move to another method because this may / may not be the most speedy method to parsing documents. That is y'alls job to decide for the speed demo :)

### What should I include??
rapidJson does not require any inclusions from any other libraries. It is not even dependent upon the STL.

Using tools with rapidJson is as simple as including the libraries of rapidJson which you wish to use, and then starting from there.

The include which we will be looking at here, is the document.h include. Put this at the top of your implementation file:

```
#include include/rapidjson/document.h
```
That should be the total extent of setup for you to get parsing.

### Parsing Documents

Parsing documents is not very difficult with rapidJson. First thing you should do is get all of the .json file you wish to parse into a single char array. To do this, in my example code, I use a std::string object and getline to accomplish this. To parse the document, simple call Parse on a Document object.
```
rapidjson::Document doc;
string wholeFile
// input the whole .json into wholeFile
doc.Parse();
```
And now your document is parsed! Next, you will have to access each element of your Document object

### Accessing elements

#### using the [] operator

rapidJson uses operator[] in order to access each element in your parsed json file.
To access an element, simply place square braces around a c-string you wish to access.

For example, if you would wish to access the element "jack", and it is in the main curly braces of your .json file, then you would simply access it by typing
```
doc["jack"].GetString();
```
now, in order to access the string of "jack", then You have to call the GetString() method as used above. Now, there are a couple other functions, which are also very useful.

For example, IsObject() will return a boolean value of true if the accessor is a real value, and will cause a SIGABRT if it is not a real value.
IsArray() works similarly to IsObject, but as the name suggests, it will make sure that the value accessed is an array before letting the rest of the code execute.

#### iterating over arrays of objects

You can actually iterate over an array of objects using range based loops.

For example, if there is an array of objects at metadata -> arrayHere, then you can iterate over that array like this:
```
for(auto &current : doc["metadata"]["Array"].GetArray()) { 
std::cout << "value: " << current.GetString() << std::endl;
}
```
And that's the basics of rapidJson!
