@ECHO OFF

REM Makefile for source code

if [%1] == [exo7.c] (
	ECHO "****** GCC COMPILE EXO 7 *********"
	gcc -Wall -pedantic -std=c99 -c %1 

	ECHO "****** GCC LINK EXO7.O *********"
	gcc -Wall -pedantic -std=c99 -o main %1
)

ECHO "******* START PROGRAM ************"
PAUSE

.\main.exe

