@ECHO OFF

REM Makefile for source code


ECHO "****** GCC COMPILE %1 *********"
gcc -Wall -pedantic -std=c99 -c %1 

ECHO "****** GCC LINK %1 *********"
gcc -Wall -pedantic -std=c99 -o main %1


ECHO "******* START PROGRAM ************"
PAUSE

.\main.exe

