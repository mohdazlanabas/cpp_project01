#include <iostream>
#include <string>
using namespace std;

// OCmparing Stringa

string prompt = "Please enter two lines of text! \n",
line (30, '-');

int main() {

	string line1, line2, key = "y";
	while(key == "y" || key == "y")
	{
		cout << line << '\n' << prompt << line << endl;
		getline(cin, line1);
		getline(cin, line2);

		if (line1 == line2)
			cout << "Both lines are the same!" << endl;
	  else 
	 {
	 cout << "The smaller line is: \n\t";
	 cout << (line1 < line2 ? line1 : line2) << endl;
	 int len1 = line1.length(),
	 	len2 = line2.length();
	 if (len1 == len2)
	 	cout  << "Both lines have the same length: \n";
	 else 
	 {cout << "The shorter line is: \n\t";
	 cout << (len1 < len2 ? line1 : line2) << endl;
	 	}
	 }
	cout << "\n Repeat ? (y/) ";
	 do
	 getline (cin, key);
	 while (key != "y" && key != "Y"
	 && key != "n" && key != "N");
	 }

	 return 0;

}
