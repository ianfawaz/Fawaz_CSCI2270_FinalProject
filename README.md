Ian Fawaz CSCI 2270 4/26/16
Project Summary:
	This project heavily utilizes hash tables in order to access a text file
	containing each year's result of the NBA Finals, from the first year of
	the league(1947) to the present day. The program has multiple things
	that the user may want to access in this text file, including a list of
	all Finals results, individual years that a specific team won or lost in
	the Finals, and functions that count how many times a team won, lost, or
	went to the Finals.

How to Run:
	I used Sublime text editor to write my code, and I used terminal to run it. I specifically used the command line 
	g++ -std=c++11 -o executable FinalProjectFawaz.cpp NBAChamps.cpp
	to compile it, and the command line
	./executable NBAChamps.txt
	to run it.
Open Issues/Bugs
    The program does not have any bugs when it runs on my computer. I experienced some problems
    while writing the code when I tried to add some later functions and some if statements in
    my main file, where when I ran the code through terminal it would oddly give a seg fault.