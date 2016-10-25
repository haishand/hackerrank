#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

#define EQU '='
#define LEFT_ANGLE_BRACKET '<'
#define RIGHT_ANGLE_BRACKET '>'

using namespace std;

const int MAXN = 20;
const int MAX_POOL_SIZE = 4000;

class HrmlParser {
    public:
    const char *src;    
    HrmlParser(const char *s) {
        this->src = s;
    }

};

int main() {
    HrmlParser parser(src);

    return 0;
}
struct tree {
    string tag;
    map<string, string> attrs;
    struct tree *child[MAXN];
};

char token;
const char* src;

void next() {
    token = *src++;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    
    cin>>N>>Q;
    
    string buf;
    string line;

    while(getline(cin, line)) {
        buf += line;    
    }
    src = buf.c_str()
    
    return 0;
}

