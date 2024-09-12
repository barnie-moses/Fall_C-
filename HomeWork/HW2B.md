2. Reading to EOF

Input streams (like std::cin) can be used as predicates (bools) to see if they are in an error state. One such error state is having no more data to read in. So an expression like this,
while (std::cin) {
  ...
}
will loop until cin has nothing more to read. The expression cin >> x extracts a value from the stream and puts it in x, but it also returns cin. So this statement:
while (std::cin >> x) {
  ...
}
will keep replacing x with the next value from a stream until the stream is exhausted.
When you are testing your code by compiling and running it, the above example will run until you specify that there is no more input. This is called the EOF (End-Of-File). Typing Control-d into the terminal sends this message.
Write a program in EOF_Sum/main.cpp that reads in integers from the standard input stream until there are no more values. Print the sum of those integers.
Example input:

2 54

19

2


Expected output:

77