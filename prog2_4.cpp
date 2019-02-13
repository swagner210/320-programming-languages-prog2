#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include "prog2_1.hpp"
#include "prog2_3.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout<< "Assignment #2-4, Samantha Wagner, swagner210@yahoo.com"<<endl; 
    vector<string> finaltokens;
    Tokenizer sam;
    ifstream file(argv[1]);
    string Tokthispls;
    Parser p;
    int ln = 1;
     queue < vector<string> > allofthelines;

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
    //ln++;
    }
    for(int k=1;k<ln;k++){
        //vector<string> finaltokens;
        finaltokens = sam.GetTokens();
        
        if(p.Parse(finaltokens)==false){
            cout << "Parse error on line " << +k  << ":";
            for(int j = 0; j< finaltokens.size();j++){
                cout << " " <<finaltokens[j];
            }
            cout <<endl;
            return 1;   
         }else{
            allofthelines.push(finaltokens);
        }
     }
    for(int k=1;k<ln;k++){
        finaltokens = allofthelines.front();
        allofthelines.pop();
        cout<<finaltokens[0];
        for(int i=1;i<finaltokens.size();++i){
            cout<< ","<< finaltokens[i];
        }
        cout<<endl;
    }   

    

}
