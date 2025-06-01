#include"bits/stdc++.h"
using namespace std;

void print10(int n){
    for(int i = 1; i <= 2*n-1; i++){
        //stars 1-n
        int stars = i;
        if(i > n) stars = 2*n-i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }cout << endl;
    }
}

void print11(int n){
    for(int i=0; i<n; i++){
        int start = 1;
        if(i%2 == 0) start = 1;
        else start = 0;
        for (int j = 0; j<=i; j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

void print12(int n){
    //outer loop
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //inner loop
        //number
        for(int j=1; j<=i; j++){
            cout << j;
        }
        //space
        for(int j=1; j<=space; j++){
            cout << " ";
        }

        //number
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void print13(int n){
    //outer loop
    int number = 1;
    for (int i=1; i<=n; i++){
        //inner loop
        for(int j=1; j<=i; j++){
            cout << number << "  ";
            number++;
        }
        cout << endl;
    }
}

void print14(int n){
    //outer loop
    for(int i =0; i<n; i++){
        //inner loop
        for(char ch = 'A'; ch<= 'A'+i; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void print15(int n){
     //outer loop
    for(int i =0; i<n; i++){
        //inner loop
        for(char ch = 'A'; ch<= 'A'+(n-i-1); ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void print16(int n){
     //outer loop
    for(int i =0; i<n; i++){
        //inner loop
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout << ch;
        }
        cout << endl;
    }
}

void print17(int n){
     //outer loop
    for(int i =0; i<n; i++){
        //inner loop
        //space
        for(int j=0; j<n-i-1; j++){
            cout << "-";
        }

        //letters
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j <= (2*i+1); j++){
            cout << ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j=0; j<n-i-1; j++){
            cout << "-";
        }
        cout << endl;
    }
}

void print18(int n){
     //outer loop
    for(int i =0; i<n; i++){
        //inner loop
        //letters
        for(char ch='E'-i; ch<='E'; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void print19(int n){
    //upside
     //outer loop
    int inis=0;
    for(int i =0; i<n; i++){
        //inner loop
        //left stars
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<inis; j++){
            cout << " ";
        }

        //right stars
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        inis +=2;
        cout << endl;
    }
    //downside
    //outer loop
    inis=2*(n-1);
    for(int i=1; i<=n; i++){
        //inner loop
        //left stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<inis; j++){
            cout << " ";
        }

        //right stars
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        inis -=2;
        cout << endl;
    }
}



int main(){
    int n;
    cin >> n;        
    print19(n);
}