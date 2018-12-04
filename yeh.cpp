#include <iostream>
#include <fsream>

using namespace std;

int main() {
	fstream file;
	file.open("text.txt",ios::in);
	file.close();
	return 0;
}
