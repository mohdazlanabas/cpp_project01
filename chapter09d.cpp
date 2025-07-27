/// Asseing Characters in String

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

string header("     ***** Counts Words     *****\n"),
	prompt("Enter a text and terminate"
	" with a preiod and return: "),
	line(60, '-'),
	text;

	cout << header << endl << prompt <<endl 
	<< line << endl;
	getline (cin, text, '-');

	int i,
	nSpace = 0,
	nWord = 0;
	bool fSpace = true;

	for (i=0; i < text.length(); ++i)
	{
		if(isspace (text[i]))
      {
      ++nSpace, fSpace = true;
		}
		else  if (fSpace)
		{
			++nWord;
			fSpace = false;
		}
	}
	cout << line
		<<"\n Your text contains (wihtout periods)"
		<< "\n				characters: " << text.length()
		<< "\n				words: " << nWord
		<< "\n			white spaces: " << nSpace
		<< endl;

	 return 0;

}
