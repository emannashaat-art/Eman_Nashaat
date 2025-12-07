#include <iostream>
#include <string>
using namespace std;

char opStack[100];
int topOp = -1;

int numStack[100];
int topNum = -1;

bool isEmptyOp() { return topOp == -1; }
bool isEmptyNum() { return topNum == -1; }

void pushOp(char c) { opStack[++topOp] = c; }
char popOp() { return opStack[topOp--]; }
char peekOp() { return opStack[topOp]; }

void pushNum(int x) { numStack[++topNum] = x; }
int popNum() { return numStack[topNum--]; }

int prec(char c) {
    if (c=='*' || c=='/') return 2;
    if (c=='+' || c=='-') return 1;
    return 0;
}

bool isOp(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/';
}
        