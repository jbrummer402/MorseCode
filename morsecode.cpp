#include <vector>
#include <algorithm>
#include <iostream>


using namespace std;

vector<string> word;
//Each letter of the alphabet translated into morse
vector<string> alph = {
    "*-",   //A
    "-***", //B
    "-*-*", //C
    "-**",  //D
    "*",    //E
    "**-*", //F
    "--*",  //G
    "****", //H
    "**",   //I
    "*---", //J
    "-*-",  //K
    "*-**", //L
    "--",   //M
    "-*",   //N
    "---",  //O
    "*--*", //P
    "--*-", //Q
    "*-*",  //R
    "***",  //S
    "-",    //T
    "**-",  //U
    "***-", //V
    "*--",  //W
    "-**-", //X
    "-*--", //Y
    "--**"  //Z
};

struct Node{
    string data;
    unsigned freq;
    Node *left, *right;
};

struct Heap{
    Node **nodeArray;
    void insertNode(Node *n, string data);
};


int main(int argc, char *argv[]){

    return 0;
}