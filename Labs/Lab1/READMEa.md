**Background**


The New Horizons spacecraft, launched January 19th 2006, is the first earth spacecraft to have made contact with 
the planet Pluto. On January 1st, 2019 it was scheduled to make contact with the first Kuiper belt object, 
KBO-2014-KU69. The NASA update page reported it at a distance of 37.33 Astronomical Units (AU) from the Sun, 
traveling away at 14.33 km/sec (8.90 mi/sec) on 12/30/2016.


For this lab, you will use the std::cin and std::cout streams, along with some simple mathematics, to calculate New Horizon’s distance from the Sun.


**Program Specifications**


Your program will prompt the user for an integer number (a number without decimal points) that indicates the number of days after 12/30/2016, starting at a distance 37.33 AU from the Sun. You will calculate the distance of New Horizons from the Sun using the above numbers from 12/30/2016 (assume velocity is constant) plus the user provided number of days, and report:
Distance in kilometers (1 AU = 149,598,000 km) on a line by itself
Distance in miles (1 AU = 92,955,800 miles) on a line by itself
Round trip time for radio communication in hours. Radio waves travel at the speed of light, listed at 299,792,458 meters/second, on a line by itself
In actuality, the orbital mechanics needed to model this are beyond the scope of this lab. But for simplicity, you should assume the radio station is on the sun
Provide 2 decimal points of accuracy using std::fixed and std::setprecision. Both are contained within the <iomanip> header, and you can use them as follows:

std::cout << std::fixed << std::setprecision(2);
Be sure to edit the file named "new_horizons.cpp".

**Example IO**
For example, if the program received this value from standard input:
3000
It should output:


9298829340.00
5776920014.00
17.23


Because after 3000 days, the space craft is 9298829340 km (5776920014 miles) from the the sun, and a radio communication would take about 17.23 hours round trip.
Coding Assignment Test Runner
Before using this test runner, be sure your program behaves properly with the terminal.


**Assignment Notes**


There are some rounding issues here, so be careful! To make the kilometer/mile calculations, use the constants (speed and distance) provided. To make the round trip calculation, use your distance in km and the speed of light constant provided. You’ll get slightly different answers if you try to convert the two distances or the two speeds.
You will need to work with the cin and cout streams and their operators >> (for cin) and << (for cout). You will also need to declare the appropriate variables: int (a 64 bit integer) for values like days, and double for calculation values.
cout takes either variable values or strings (between " ") and outputs them to the console. You can use multiple << operators on the same cout stream, usually ending with endl.
Assuming the variable, int_var, has the value 23…
std::cout << "This is a string: " << int_var << " the end"
          << std::endl;
…this program fragment would output:
This is a string: 23 the end
cin will take an input value from the command line into a variable of a particular type. It does so until it hits a space (space separated values) or an end of a line. For example:
std::cin >> int_var;
If you run the program and then enter an integer value to the command line, it will be read into the variable with no conversion required.
int number;
std::cin >> number;
int multiplier;
std::cin >> multiplier;

std::cout << "The number " << number << " times "<< multiplier
          << " is " << number * multiplier << std::endl;
With inputs 10 and 2 respectively, we get:
The number 10 times 2 is 20
The operations on these numbers are: + (sum), - (difference), * (product), / (division) and % (modulus, integer only). The last two deserve special comment.
If an integer is divided by another integer, the result is an integer, with any would-be decimal always rounded down. Thus the result of 6 / 4 is 1. In contrast, 6.0 / 4 is 1.5. That is, the decimal point in the first values indicates that we are using a floating point value, and the / operator results in the integer quotient if using ints, and floating point values if using doubles.
The result of 6 % 4 is the integer remainder of the division, thus 2 (6 divided by 4 is 1, with a remainder of 2). There is no symbol equivalent for % in floating point math.
Things to Think About
What happens when you try to divide by zero when you run your program?
What happens when std::cin obtains a letter instead of a number?