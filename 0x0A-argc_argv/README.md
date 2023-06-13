## 0x0A. C - argc, argv

### General
* How to use arguments passed to your program
* What are the two prototypes of "main" that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unsuded variables or parameters.


### TASKS

#### 0. It ain't what they call you, it's what you answer to.
* A program that prints its name, followed by a new line.

#### 1. Silence is argument carried out by other means
* A program that prints the number of arguments passed into it.
* The program prints a number, followed by a new line.

#### 2. The best argument against democracy is a five-minute conversation with the average voter.
* A program that prints all arguments it receives.
* All arguments are printed, including the first one.
* arguments are printed one per line, ending with a new line.

#### 3. Neither irony nor sarcasm is argument
* A program that multiples two numbers.
* program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplicatin can be stored in an integer.
* if the program does not receive two arguments, your program should print Error, followd by a new line, and return 1.

#### 4. To infinity and beyond
* A program that adds positive numbers.
* Print the result followed by a new line.
* If no number is passed to te program, print 0, followed by a new line
* If one of the number contains sysbols that are not digits, print Error, followed by a new line, return 1.

#### 5. Minimal Number of Coins for Change
* A program that prints the minimum number of coins to make change for an amount of money.

Usage: ./change cents
where cents is the amount of cents you need to give back
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
you should use atoi to parse the parameter passed to your program
If the number passed as the argument is negative, print 0, followed by a new line
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
