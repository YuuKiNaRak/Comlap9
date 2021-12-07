#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float findGrade(float x){
    char y;
    if(x > 90){
        y='A';
        
    }
    else{
        if(x > 75){
            y='B';
            
        }
        else{
            if(x > 60){
                y='C';
                
            }
            else{
                if(x > 45){
                    y='D';
                    
                }
                else{
                    if(x <= 45){
                        y='F';
                        
                    }
                    else{}
                }
            }
        }
    }
    return y;
}



int main(){


    int N,i = 0;
    cout << "Enter the number of students: ";
    cin >> N;
    string name[N];
    float score[N];


    while(i < N){
        cout << "Name of student " << i+1 << ": ";
        cin.ignore();
        getline(cin,name[i]);
        cout << "Score of student " << i+1 << ": ";
        cin >> score[i];
        i++;
    }

    i = 0;
    char x;
    cout << "---------------------------------------------\n";
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
    cout << "---------------------------------------------\n";
    while(i < N){
        x = findGrade(score[i]);
        cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << x << "\n";
        i++;
    } 
    cout << "---------------------------------------------\n";

    return 0;
}
