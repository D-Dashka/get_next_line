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
