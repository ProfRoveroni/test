int myFunction(int x) {
 std::cout << "Hello World";
 if (x == 5) {
	std::cout << "ok";
 } else { 
    return myFunction(9);
 }
 int y = x + 1;
 return myFunction(y / x);
}

int main() {
 return 0;
}