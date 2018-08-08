#include<iostream>
#include "Word.h"

using namespace std;

Word::Word(std::string the_word) :
    _the_word(the_word)
{
    // TODO Auto-generated constructor stub
}

Word::~Word() {
    // TODO Auto-generated destructor stub
}

void Word::updateWord(std::string word)
{
    this->_the_word = word;
}

std::string Word::getWord()
{
    return this->_the_word;
}
