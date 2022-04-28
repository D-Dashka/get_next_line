<div align="center" max-width="300">
	<img src="info/imgs/21_42_logos.png" alight="center">
</div>

# Get_next_line

## Summary:

This project is about programming a function that returns a line read from a file descriptor.

## Requirements

• Repeated calls (e.g., using a loop) to your <code>get_next_line()</code> function should let you read the text file pointed to by the file descriptor, one line at a time.

• Your function should return the line that was read.
If there is nothing else to read or if an error occurred, it should return <code>NULL</code>.

• Make sure that your function works as expected both when reading a file and when reading from the standard input.

• Please note that the returned line should include the terminating <code>\n</code> character, except if the end of file was reached and does not end with a <code>\n</code> character.

• Your header file get_next_line.h must at least contain the prototype of the <code>get_next_line()</code> function.

• Helper functions are in the <code>get_next_line_utils.c</code> file.

• Because you will have to read files in get_next_line(), add this option to your compiler call: <code>-D BUFFER_SIZE=n</code> It will define the buffer size for <code>read()</code>.

• You will compile your code as follows (a buffer size of 42 is used as an example):

<code>cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 [files].c</code>

## Tests

You can test <code>get_next_line()</code> function using <code>main</code> located in tests folder.
For that compile all source files and provide the program with appropriate number of an argument from 1 to 8 where:

<code>./program_name number

• `1` - "To be, or not to be, that is the question" speech

• `2` - long line

• `3` - read from stdin

• `4` - empty file

• `5` - onyl new line in file

• `6` - two lines in a file

• `7` - big file with no new line

• `8` - dictionary file
