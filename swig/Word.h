#ifndef WORD_H_
#define WORD_H_

 

class Word
{
public:
    Word(std::string the_word);
    virtual ~Word();

    virtual void updateWord(std::string word);
    virtual std::string getWord();

private:
    std::string _the_word;
};

#endif
