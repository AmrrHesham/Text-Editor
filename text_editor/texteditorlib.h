#ifndef TEXTEDITORLIB_H
#define TEXTEDITORLIB_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;
char name[100];
void displayFile(fstream& file);
void deleteFileContent(fstream& file);
void appendToFile(fstream& file);
void encryptionFile(fstream& file);
void decryptionFile(fstream& file);
void numberOfWords(fstream& file);
void numberOfCharacters(fstream& file);
void numberOfLines(fstream& file);
void mergeFiles(fstream& file);
void wordSearch(fstream& file);
void convertToLower(fstream& file ,vector<string>& text);
void convertToUpper(fstream& file ,vector<string>& text);
void countnumberofword(fstream& file);


#endif