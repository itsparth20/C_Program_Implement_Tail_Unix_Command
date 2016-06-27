# C_Program_Implement_Tail_Unix_Command
write own version of the tail unix command.

Name  

tail - output the last part of files

Synopsis

tail FILE   [n]

Description

Print the last 10 lines of FILE to standard output.

n is an optional argument, allowing user to specify the number of lines to display.

Sample Usages:

tail sample.cpp        -- displays the last 10 lines of sample.cpp, or the entire file if fewer than 10 lines

tail                         -- displays an appropriate usage message

tail sample.cpp 3     -- displays the last 3 lines of sample.cpp, or the entire file if 3 or fewer lines

tail  sample.cpp 15   -- displays the last 15 lines of sample.cpp, or the entire file if 15 or fewer lines

tail nofile.cpp          -- displays appropriate error message if nofile.cpp doesn't exist

For Run this program write this command:

gcc a1.c -o a1
./a1 a1.c 5
