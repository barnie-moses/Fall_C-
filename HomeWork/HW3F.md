RemoveShortWords
I’ve been given a list of search terms (multiple lines, separated by spaces) that I need to comb through. All words of length 4 and shorter need to be removed.
Write a program (not just a function) that reads from standard input a series of search terms. This program should be in the file RemoveShortWords/main.cpp. Write to standard output only the words that are length 5 or greater, in the order of the original input with trailing spaces and maintaining lines.
Example input:
this line only has one long word here! no othe r 
however this_line contains entirely extremely lengthy words
this line contains both short and long words
Expected output:
here! 
however this_line contains entirely extremely lengthy words 
contains short words 