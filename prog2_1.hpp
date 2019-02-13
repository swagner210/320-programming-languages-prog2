#ifndef PROG2_1
#define PROG2_1
#include <vector>
#include <queue>
#include <string>
using namespace std;

class Tokenizer{
    private:
    int numtokens;
    queue < vector<string> > allofthelines;
  
    public:
    Tokenizer();
    ~Tokenizer();
    void Tokenize(string Tokthis);
    vector<string> GetTokens();

};
#endif
