//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    double sum = 0 , sq = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sq += pow(atof(textline.c_str()),2); 
        count++;
        
    }
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = "<< sqrt((sq/count)-pow((sum/count),2))  ;
}