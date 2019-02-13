#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
#include <string>
#include <fstream>
#include <algorithm>
#include <exception>
#include "prog2_1.hpp"

using namespace std;


Tokenizer::Tokenizer(){}
Tokenizer::~Tokenizer(){}


void Tokenizer::Tokenize(string Tokthis){
    vector<string> finalstring;
    vector<string> keywords = { "push" , "pop" , "add" , "sub" , "mul" , "div" , "mod" , "skip" , "save" , "get"};
    istringstream ss(Tokthis);
    string tokens;
    vector<string>::iterator iter;
       

    while(getline(ss,tokens,' ')){//loop checks to make sure input is valid
        bool has_only_digits=(tokens.find_first_not_of("0123456789") == string::npos);
        iter=find(keywords.begin(),keywords.end(),tokens);
        if( iter!= keywords.end() || has_only_digits==true){
            finalstring.push_back(tokens);
            this->numtokens++;
        }
        else{
            throw runtime_error("Unexpected token: " + tokens);
           
            
    }

  
    
}
this->allofthelines.push(finalstring);
}
          


vector<string> Tokenizer::GetTokens(){
    if(this->allofthelines.size() == 0){
        throw std::runtime_error("No tokens");
    }   

    vector<string> data = this->allofthelines.front();//takes the front of the queues data,then pops it off vector
    this->allofthelines.pop();
    return data;
}

