#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include "prog2_1.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout<< "Assignment #2-2, Samantha Wagner, swagner210@yahoo.com"<<endl; 
    Tokenizer sam;
    ifstream file(argv[1]);
    string Tokthispls;
    int ln = 1;
   
    while(!file.eof()){ //while end has not been reached
           
        getline(file,Tokthispls);
    if(Tokthispls.size() > 0){
        try{
        sam.Tokenize(Tokthispls);
        }
            catch(const runtime_error& err){
           cout << "Error on line " << ln << ": " << err.what() <<endl;
           
            return 0;
        }
        
        ln++;
}
    
    }
  
    for(int j=1;j<ln;j++){
    vector<string> finaltokens;
    finaltokens = sam.GetTokens();
  
 
        cout<<finaltokens[0];
   for(int i=1;i<finaltokens.size();++i){
       cout<< ","<< finaltokens[i];
 
        }
       

        
    cout<<endl;
}
 

}
