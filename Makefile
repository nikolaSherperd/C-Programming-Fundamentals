C = gcc
CFLAGS = -Wall -Wextra -std=c11

# Default target
all: basics Types_Operators_Expression Control_flow Functions_and_Program_Structure Pointers_and_Arrays Structures Input_and_Output Advanced Appendix file_io

basics:
				$(CC) $(CFLAGS) 01_basics/*.c -o build/basics

Types_Operators_Expression:
				$(CC)  $(CFLAGS) 02_Types_Operators_Expression/*.c -o build/Types_Operators_Expression

Control_flow:
				$(CC) $(CFLAGS) 03_Control_flow/*.c -o build/Control_flow

Functions_and_Program_Structure:
				$(CC) $(CFLAGS) 04_Functions_and_Program_Structure/*.c -o build/Functions_and_Program_Structure

Pointers_and_Arrays:
				$(CC) $(CFLAGS) 05_Pointers_and_Arrays/*.c -o build/Pointers_and_Arrays

Structures:
				$(CC) $(CFLAGS) 06_Stuctures/*.c -o build/Structures

Input_and_Output:
				$(CC) $(CFLAGS) 07_INput_and_output/*.c -o build/Input_and_Output

Avanced:
				$(CC) $(CFLAGS) 08_Advanced/*.c -o build/Advanced

Appendix:
				$(CC) $(CFLAGS) 09_Appendix/*.c -o build/Appendix

file_io:
				$(CC) $(CFLAGS) 10_file_io/*.c -o build/file_io

clean:
	rm -f build/*

