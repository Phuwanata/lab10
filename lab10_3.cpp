//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
 
using namespace std;

int main(){
    int n=0;
    double sum=0;
    double sam=0;
    string text;
    ifstream source;
    source.open("score.txt");
    while(getline(source,text))
     {  sum = sum+atof(text.c_str());
        sam = sam+pow(atof(text.c_str()),2);
        n++;
     }
    cout << "Number of data = "<< n <<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/n<<endl;
    cout << "Standard deviation = "<< sqrt((1.0/n)*sam-pow(sum/n,2));
    
}