#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    /*Argumenti stroki:
    input.txt
    --help*/
    ifstream inp(argv[1]);
    string str = "";
    string smth;
    int k = 0;
    int l = 0;
    int b = 0;
    char a;
/*Obyavili peremennie*/
while (!inp.eof()){
    inp>>smth;
str.append(smth);};
/*Perepisali text v massiv v odnu stroku bez probelov*/
for (int i=0; i<str.length(); i++){
if(str[i]=='"'){
    if (k%2 == 0){
         a=i;}
        else{
             str.replace(a, i-a+1, i-a+1, 'F');
        }
    k++;};
if(str[i]=='\''){
    if (l%2 == 0){
         a=i;}
        else{
             str.replace(a, i-a+1, i-a+1, 'F');
        }
    l++;}
};
/*Zadali ignorirovanie sodergimogo kavichek*/
for (int i=0; i<str.length(); i++){
    if(str[i]=='('){
        for (int j=i+1; j<str.length(); j++){
        if(str[j]==')' || str[j]=='(' || str[j]=='{' || str[j]=='['){
                break;}
                else if (str[j]=='}' || str[j]==']'){b=1;break;}}}}

                for (int i=0; i<str.length(); i++){
    if(str[i]=='{'){
        for (int j=i+1; j<str.length(); j++){
        if(str[j]=='}' || str[j]=='(' || str[j]=='{' || str[j]=='['){
                break;}
                else if (str[j]==')' || str[j]==']'){b=1;break;}}}}

                for (int i=0; i<str.length(); i++){
    if(str[i]=='['){
        for (int j=i+1; j<str.length(); j++){
        if(str[j]==']' || str[j]=='(' || str[j]=='{' || str[j]=='['){
                break;}
                else if (str[j]=='}' || str[j]==')'){b=1;break;}}}}
/*Vveli pravila posledovatelnosti skobok*/
                if (b==1){cout << "Gramatical error" << endl;}else{cout << "Everything is correct" << endl;};
    if(strcmp(argv[2], "--help")==0){cout<<"Zdravstvuite, Valery Aleksandr0vi4, eto help takoi, Kolcov Vitaly RT2-21B"<<endl;};
    return 0;
}
