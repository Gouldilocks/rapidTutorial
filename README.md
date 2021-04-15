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

