#include "texteditorlib.h"
#include "texteditorlib.cpp"

int main(){
    fstream File;
    vector<string> text;
    int answer1, answer2;

    cout << "Hello in Text Editor App!" << endl;
    cout << "Please Enter the file name: " << endl;
    cin.getline(name, 99, '\n');
    File.open(name, ios::in);

    cout << "press: \n1.to continue.\n2.to Exit." << endl;
    cin >> answer1;

    while(answer1 == 1){
        
        if (!File){
            File.close();
            File.open(name, ios::out);
            cout << "This is a new file. I created it for you " << endl << endl;
            cout << "choose from this list what you want:\n1.Add new text to the end of the file.\n2.Display the content of the file.\n3.Empty the file.\n4.Encrypt the file content.\n5.Decrypt the file content.\n";
            cout << "6.Merge another file.\n7.Count the number of words in the file.\n8.Count the number of characters in the file.\n9.Count the number of lines in the file.\n10.Search for a word in the file.\n";
            cout << "11.Count the number of times a word exists in the file.\n12.Turn the file content to upper case.\n13.Turn the file content to lower case.\n14.Turn file content to 1st caps (1st char of each word is capital).\n15.Save." << endl;

            cin >> answer2;

            if (answer2 == 1){
                appendToFile(File);
            }
            else if (answer2 == 2){
                displayFile(File);
            }
            else if (answer2 == 3){
                deleteFileContent(File);
            }
            else if (answer2 == 4){
                encryptionFile(File);
            }
            else if (answer2 == 5){
                decryptionFile(File);
            }
            else if (answer2 == 6){
                mergeFiles(File);
            }
            else if (answer2 == 7){
                numberOfWords(File);
            }
            else if (answer2 == 8){
                numberOfCharacters(File);
            }
            else if (answer2 == 9){
                numberOfLines(File);
            }
            else if (answer2 == 10){
                wordSearch(File);
            }
            else if (answer2 == 11){
                convertToLower(File, text);
            }
            else if (answer2 == 12){
                convertToUpper(File, text);
               
            }
            else if (answer2 == 13){
                countnumberofword(File);
            }
            else if (answer2 == 14){
                
            }
            else if (answer2 == 15){
                
            }
            else{
                cout << "this is invalid input, please choose number form list." << endl;
            }


            cout << "Do you want to do another thing or exit:\n1.to continue.\n2.Exit." << endl;
            cin >> answer1;
        }
        else{
            File.close();
            cout << "This File Already Exists." << endl;
            cout << "choose from this list what you want:\n1.Add new text to the end of the file.\n2.Display the content of the file.\n3.Empty the file.\n4.Encrypt the file content.\n5.Decrypt the file content.\n";
            cout << "6.Merge another file.\n7.Count the number of words in the file.\n8.Count the number of characters in the file.\n9.Count the number of lines in the file.\n10.Search for a word in the file.\n";
            cout << "11.Count the number of times a word exists in the file.\n12.Turn the file content to upper case.\n13.Turn the file content to lower case.\n14.Turn file content to 1st caps (1st char of each word is capital).\n15.Save." << endl;

            cin >> answer2;
            cin.ignore();

            if (answer2 == 1){
                appendToFile(File);
            }
            else if (answer2 == 2){
                displayFile(File);
            }
            else if (answer2 == 3){
                deleteFileContent(File);
            }
            else if (answer2 == 4){
                encryptionFile(File);
            }
            else if (answer2 == 5){
                decryptionFile(File);
            }
            else if (answer2 == 6){
                mergeFiles(File);
            }
            else if (answer2 == 7){
                numberOfWords(File);
            }
            else if (answer2 == 8){
                numberOfCharacters(File);
            }
            else if (answer2 == 9){
                numberOfLines(File);
            }
            else if (answer2 == 10){
                wordSearch(File);
            }
            else if (answer2 == 11){
                convertToLower(File, text);
            }
            else if (answer2 == 12){
                convertToUpper(File, text);
            }
            else if (answer2 == 13){
                countnumberofword(File);
            }
            else if (answer2 == 14){
                appendToFile(File);
            }
            else if (answer2 == 15){
                appendToFile(File);
            }
            else{
                cout << "this is invalid input, please choose number form list." << endl;
            }

        
            cout << "Do you want to do another thing or exit:\n1.to continue.\n2.Exit." << endl;
            cin >> answer1;
        }

    }
}
