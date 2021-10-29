#include "Builder.hpp"

int main(){
	Builder* builder = new Builder();
	Director* director = new Director(builder);
	director -> Construct();
	return 0;
}
