#include "Singleton.cpp"

int main(){
	Single* single = Single::getInstance();
	single->showMsg();
} 
