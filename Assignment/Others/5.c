#include<stdio.h>
int main(){

	string name ;
	string start ;
	string middle ;
	string end ;
	string fixed = "UIU" ;
	int length1 = fixed.length() ;
	int counter=-1 ;

	int str_length = name.length() ;

	for(int i=0 ; i<str_length ; i++){
		if(name[i] >= 97 && name[i] <= 122){
			start += name[i] ;
			counter++ ;
		}
		else{
			break ;
		}
	}

	int length2 = start.length() ;

	for(int i=counter+1 ; i<str_length ; i++){
		if(name[i] >= 65 && name[i] <= 90){
			middle += name[i] ;
		}
		else{
			break ;
		}
	}

	int length3 = middle.length() ;

	int length4 = length2 + length3 ;

	for(int i=length4+1 ; i<str_length ; i++){
		end += name[i] ;
	}

	if(counter != 0){
		if(middle == fixed){
			if(name[length4] >= '0' && name[length4] <= '9'){
				if(start == end){
					cout << "Valid" << endl ;
				}
				else{
					cout << "Not valid" << endl ;
				}
	        }
			else{
				cout << "Not valid" << endl ;
			}
		}
		else{
			cout << "Not valid" << endl ;
		}
	}
	else{
		cout << "Not valid" << endl ;
	}

	cout << "Back to main menu ? [y/n] : " ;
	cin >> ch ;
	if(ch == 'y'){
		system("cls") ;
		main_menu() ;
	}
	else{
		exit(-1) ;
	}
}

