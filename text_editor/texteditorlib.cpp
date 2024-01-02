#include "texteditorlib.h"

//function to display the content of the File.
void displayFile(fstream& file){

    file.open(name, ios::in); //open file in this mode to can output file content.
    while(!file.eof()){  //while loop to get all word in this file.
        cout << (char)file.get();
    }
    file.close();
}

//function to delete the file content.
void deleteFileContent(fstream& file){
    file.open(name, ios::out | ios::trunc); //this modes by default delete all the content in file.
    file << ""; //put in file "";
    file.close();
}

//function to append string to file.
void appendToFile(fstream& file){
    file.open(name, ios_base::app); //open file in this mode to can append.
    string text; //string to get input from user.
    cout << "\nenter a text to append it to file: " << endl;
    getline(cin, text);
    file << text; //put the input that user enter to file.
    file.close();
}

//function to encrypt the file content.
void encryptionFile(fstream& file){
    file.open(name);
    char ch; //ch to get every character in file in it.
    
    while (!file.eof()){
        ch = file.get(); 
        ch = char(ch + 1); //encrypt the char.
        cout << ch;
    }

    file.close();
}

//function to decrypt the file content.
void decryptionFile(fstream& file){
    file.open(name);
    char ch; //ch to get every character in file in it.
    
    while (!file.eof()){
        ch = file.get(); 
        ch = char(ch - 1); //decrypt the char.
        cout << ch;
    }

    file.close();
}

// The following function is to count the number fo Lines in the file
void numberOfLines(fstream& file){
    file.open(name);
    char token[1500];
    int lines = 0;
    while (!file.eof()){
        file.getline(token, 150, '\n'); // remove spaces from each line
        lines += 1; // take all characters from each line then add 1
    }
    cout << "Number of lines in the file equals: " << lines << endl;
    file.close();
}

// The following function is to count the number fo Characters in the file
void numberOfCharacters(fstream& file){
    file.open(name);
    int characters = 0;
    char ch;
    while (!file.eof()){
        ch = file.get();
        characters += 1; // for each character taken from the file add 1
    }
    characters -= 1;
    cout << "Number of characters in the file equals: " << characters << endl;
    file.close();
}

// The following function is to count the number fo Words in the file
void numberOfWords(fstream& file){
    file.open(name);
    int words;
    string tokens;
    while (!file.eof()){
        file >> tokens;
        words += 1; // for each word taken by the token add 1
    }
    cout << "Number of words in the file equals: " << words << endl;
    file.close();
}

// The following function is to take two files and merge them in another file
void mergeFiles(fstream& file){
    string name2;
    fstream File2;
    cout << "please enter the Second file name: " << endl;
    cin >> name2;   // take second file's name from user
    File2.open(name2);
    if (!File2){
        cout << "No file with the entered name. So, the frist file content is: " << endl;
        displayFile(file);
        
    }
    else{
        cout << "File opened successfully." << endl;
        cout << "the two files content is: " << endl;
        File2.close();
        displayFile(file); // display first file's data
        File2.open(name2, ios::in); 
        while(!File2.eof()){  
            cout << (char)File2.get();  // display second file's data
        }
        file.close();

    }

}

// This function is for the user to input a word and search fo it.
void wordSearch(fstream& File){
    string word;
    string token;
    cout << "Enter the word you would like to search for: ";
    cin >> word;
    for(int i = 0; i < word.size(); i++){
        word.at(i) = tolower(word.at(i)); // let the word entered by user to lower
    }

    File.open(name);
    while(!File.eof()){
        File >> token;
        for(int i = 0; i < token.size(); i++){
            token.at(i) = tolower(token.at(i)); // let the all file's data to lower
        }
        if(word == token){
            cout << "Word found successfully :)"; // if word is equal to token taken from file
            break;                                // say that the word was found
        }
        else if(File.eof()){
            cout << "Word was not found!"; // if scanning file is finished and the word vas not found
        }                                  // say that the word was not finished
    }
    File.close();
}

void convertToLower(fstream& file,vector<string>& text)
{
    char line[100];
    file.open(name);
    if(name)
    {
        cout<<"file opened successfully \n";
        while(!file.eof())
        {
            file.getline(line, 100 ,'\n');
            text.push_back(string(line));
        }
        for (int i=0; i < text.size(); i++)
        {
            for (int j=0; j < text[i].size(); j++)
            {
                text[i][j] = tolower(text[i][j]);
                cout<< text[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"file is not opened, please enter a valid name. \n";
    }
    file.close();
}

void convertToUpper(fstream& file,vector<string>& text)
{
    char line[100];
    file.open(name);
    if(name)
    {
        cout<<"file opened successfully \n";
        while(!file.eof())
        {
            file.getline(line, 100 ,'\n');
            text.push_back(string(line));
        }
        for (int i=0; i < text.size(); i++)
        {
            for (int j=0; j < text[i].size(); j++)
            {
                text[i][j] = toupper(text[i][j]);
                cout<< text[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"file is not opened, please enter a valid name. \n";
    }
    file.close();
}

void countnumberofword(fstream& file)
{
    int counter = 0;
    string word,token;
    file.open(name);
    if(name)
    {
        cout<<"file opened successfully \n";
        cout<<"please enter the word you want to count in the file \n";
        cin>>word;
        while(!file.eof())
        {
            file >> token;
            if(word == token)
                counter += 1;
        }
        cout<<"the word is repeated by: "<< counter <<" times"<<endl;
    }
    else
    {
        cout<<"file is not opened, please enter a valid name. \n";
    }
}