/**
 *   @file: word-count.cc
 * @author: Allison McKee
 *   @date: 02-09-2023
 *  @brief: Word/Sentence Counter
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;


int main(int argc, char const *argv[]) {
    
    // initializations
    char paragraph[500], *token;
    double word_count = 0;
    double sentence_count = 0;
    double average;

    // enter paragraph
    cout << "Enter a paragraph..." << endl;
    cin.getline(paragraph, 500);
    
    // making spaces indicate new words
    token = strtok(paragraph, " ");
    while (NULL != token)
    {
        word_count++;
        token = strtok(NULL, " ");
    }
    
    // making periods, exclamations, and question marks indicate new sentences
    for (int i = 0; i <= 500; i++)
    {
        if (paragraph[i] == '.' || paragraph[i] == '!' || paragraph[i] == '?')
        {
            sentence_count++;
        }
    }

    // output
    cout << "@@@" << endl;
    cout << "Word count: " << word_count << endl;
    cout << "Sentence count: " << sentence_count << endl;

    // average and error messages
    cout << fixed << setprecision(1);
    average = word_count / sentence_count;
    if (word_count == 0)
    {
        cout << "You did not enter any text!" << endl;
    }
    else if (sentence_count == 0)
    {
        cout << "You did not enter any sentences!" << endl;
    }
    else
    {
        cout << "Average words per sentence: " << average << endl;
    }

    return 0;
} 