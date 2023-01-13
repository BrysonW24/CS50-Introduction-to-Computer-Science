Getting Started
>>Log into code.cs50.io using your GitHub account.
>>Click inside the terminal window and execute cd.
>>At the $ prompt, type mkdir debug
>>Now execute cd debug
>>Then copy and paste wget https://cdn.cs50.net/2022/fall/labs/1/debug.c into your terminal to download this lab’s distribution code.
>>Now try compiling this program, by typing make debug and see what happens!
>>You most likely see an error that says: debug.c:9:5: error: use of undeclared identifier 'name'
>>This means there is an error that has something to do with an “undeclared identifier”, on line 9. Fix this bug, and then try to compile again. 
>>Keep in mind that debugging is an iterative process. 
>>You may need to fix an error, compile, then fix another error, compile again, multiple times!

ORIGINAL CODE:
// Become familiar wih C syntax
// Learn to debug buggy code

#include <cs50.h>

int main(void)
{
    // Ask for your name and where live
    name = get_string("What is your name? ")
    location = get_string("Where do you live? ")

    // Say hello
    print("Hello, %i, from %i!", name, location)
}

DEBUGGED CODE:
// Become familiar wih C syntax
// Learn to debug buggy code

#include <stdio.h>
#include <cs50.h> 

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? ");
    string location = get_string("Where do you live? ");

    // Say hello
    printf("Hello, %s, from %s!\n", name, location);
}
//Added or changed the following:
//Library stdio.h, 
//string to specify the variable, 
//semi-colons, 
//printf, 
//%s instead of %i for string
//\n for style with the code
