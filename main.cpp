int myFunction(int x) {
 std::cout << "Hello World";
 if (x == 5) return;
 int y = x + 1;
 return myFunction(y);
}

int main() {
 return 0;
}