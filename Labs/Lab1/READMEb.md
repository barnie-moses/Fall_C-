**Writing Programs for the Command Line**


In the previous sections you learned how to use a command line and how to write simple C++ programs. Here, you will learn how to combine the two and write your own program that accepts arguments from the command-line.


**Background**


All C++ programs must begin with a main() function, but it turns out that your main function can also take "arguments", which will be generated on the command line. (you will learn more about functions and arguments in Lab 04)
When you type something like g++ -Wall -std=c++20 main.cpp, you are calling the executable called g++ and passing in three arguments to it. The executable then decides from the first argument (-Wall) that it should turn on a set of warnings, from the second argument (-std=c++20) that it should use the C++ standard set in 2020, and from the third argument (main.cpp) that it should compile the file with the associated name. Technically an argument zero is also passed in providing the name of this executable (g++).

Try out the command_line.cpp program to your left. Compile it om the terminal:


g++ -Wall -std=c++20 command_line.cpp
Now try running it again with some arguments to see what happens; for example:


  ./a.out one two three


You should see as output:

The name of this program is: ./a.out

A total of 4 words were typed to run this command
The first argument is: one
Looking back at the program, here are some key ideas to understand.
The variable argc will automatically be set to the count of “words” that were used on the command line (where words can be filenames, numbers, paths or anything separated by spaces). You can use this value to know how many arguments were provided by the user. Note that this DOES count the name of the executable itself, so its value will never be less than one.
The variable argv is an “array” that holds the set of all of arguments that were passed in as strings. You use [ and ] around a number to indicate which argument you are interested in. The name of the program being run will always be argv[0]. The rest may or may not exist depending on what else the user typed on the command line. You need to make sure that you check to make sure argc is large enough – if you try to access a command-line argument that doesn’t exist, your program won’t work correctly.


**Assignment**


You are going to write an extension to the New Horizon’s assignment that also accepts days provided as command line arguments. You must first open the file mission_creep.cpp. In the menu bar along the top of this window click on “File” and then “Open File” on the pull down, and finally select "mission_creep.cpp". It is also in the tab behind the “command_line.cpp” file.
You should copy your implementation from the previous page. Then you will need to be able to convert the command-line inputs to numbers (days), find the sum of those days (including the days provided to standard input), and output the results. Take a look at the expected output from the test cases for exact details.
How do you convert a command-line argument into a number? You need to use the function atoi(). This function can be found in the header cstdlib, which you can access by putting a #include <cstdlib> at the top of your program (it has also been placed in the template file for you).
In order to use atoi() simply send it the argument that you want converted and it will return the corresponding integer value. For example:
  int first_argument = std::atoi(argv[1]);
For this implementation, you must look at the number of inputs (argc) and add up one, two, or three command line values, outputting the results. If no command-line arguments are provided, you should print “No command line arguments.” If more than three arguments are provided, print “Too many command line arguments.” Otherwise print the number of days provided via command line arguments. You will still need to support days provided via standard input (and there is an addition line of output for that value).
Please use the test cases for examples of exactly how your output should be styled.
Be sure to test your program in the terminal before using this test runner.


**Trivia**


If you are curious about where the above names come from, this section will fill in those details. (If you don’t care, feel free to skip, but often understanding context will provide intuition to help you figure out other details about the language that you encounter in the future.)
The include file cstdlib is short for the "C Standard Library". As you know, the C++ language is a extension of the older C language, with many additional features. The C++ standard library has many different files that you can include with useful functionality. The original C library was smaller, with a number of core functions stored in a header file called stdlib.h (and others in files like math.h or string.h). C++ kept all these functions but renamed the header files dropping the .h and putting a c out front (so cstdlib, cmath, cstring, etc.) You’ll find other functionality in cstdlib, such as exit() for terminating a program early, or rand() for generating a pseudo-random number. Most of these functions have improved versions in the more modern C++ library, but command line arguments haven’t been updated since they were first created in C.
The specific function that you used above, atoi stands for "ASCII to Integer". ASCII is the name for the default encoding of characters used to make strings in C and C++ . In ASCII, the values zero through 127 each have a special meaning, covering the alphabet (upper- and lowercase letters), digits, punctuation symbols, and a number of special characters (newlines, tabs, etc.). This function will read in the digits encoded at the beginning of a string and convert them to their numerical (integer) value in C++.