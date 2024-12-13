#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

int main(){
	char letter[10];
	cin >> letter;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < i+1; j++){
			if(letter[i] >= 'A' && letter[i] <= 'Z'){
				if(letter[i+1] >= 'A' && letter[i+1] <= 'Z'){
					cout << "All Capital Letter";
					return 0;
				}
				else{
					cout << "Mix";
					return 0;
				}
			}
			
			if(letter[i] >= 'a' && letter[i] <= 'z'){
				if(letter[i+1] >= 'a' && letter[i+1] <= 'z'){
					cout << "All Small Letter";
					return 0;
				}
				else{
					cout << "Mix";
					return 0;
				}
			}
		}
	}
	
	
	return 0;
}
