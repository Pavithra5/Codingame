#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    string ROW[H];
    for (int i = 0; i < H; i++) {
        getline(cin, ROW[i]);
    }
    /*cout<<"L:"<<L<<endl;
    cout<<"H:"<<H<<endl;
    cout<<"T:"<<T<<endl;*/
    for(int j=0;j<H;j++){
        int startpos=0;
        for(int i=0;i<T.length();i++){
            if(T[i]>=65 && T[i]<=90){ //A-Z
                startpos=(L)*(T[i]-65);
               // cout<<"Row[j][i]: "<<T[i]-65<<endl;
            } 
            else if(T[i]>=97 && T[i]<=122){
                startpos=(L)*(T[i]-97);
            }
            else{
                startpos=(L)*26;   
            }
            //cout<<"K:"<<startpos;
            for(int k=startpos;k<startpos+L;k++)
                cout<<ROW[j][k];
            
         }
         cout<<endl;
    }
    
    
    

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << "answer" << endl;
}