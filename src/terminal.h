#ifndef terminal_h
#define terminal_h

#include "iostream"

void ClearTerminal();
void MoveCursorTo(short x, short y);
void SetDefaultSizeOfTerminal();
void Exit(short code);
void Cout(std::string str);
void CoutEndl(std::string str);
void Null(std::string str);
void DrawInTerm(std::string str);

extern char FullRectCharBytes[];
extern std::string StringTrash;
extern int IntTrash;

#endif