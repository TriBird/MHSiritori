// author	: shigetomo sakuma
// memo		: WordTFdetector

#pragma comment(lib,"wininet.lib")
#include <windows.h>
#include <wininet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

bool WordTF_detector(char TargetWord[256]);

int main(){
	char word[256] = "fish";
	std::cout << word << ": " << (WordTF_detector(word)?"true":"false") << std::endl;

	return 1;
}

bool WordTF_detector(char TargetWord[256]){
	HINTERNET ih, uh;
	char buf[256];
	long rs = 0;

	char url[8192] = "https://en-word.net/xml/lemma/";
	strcat_s(url, TargetWord);

	ih = InternetOpen("SKELETON", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (ih == NULL) {
		std::cout << "ih error";
		exit(EXIT_FAILURE);
	}
	
	uh = InternetOpenUrl(ih, url, NULL, 0, 0, 0);
	if (uh == NULL) {
		std::cout << "uh error";
		InternetCloseHandle(ih);
		exit(EXIT_FAILURE);
	}

	InternetReadFile(uh, buf, sizeof(buf) - 1, (LPDWORD)&rs);

	InternetCloseHandle(uh);
	InternetCloseHandle(ih);

	// If the buffer is full, the query is returned and the word exists.
	if (rs == 255) {
		return true;
	} else {
		return false;
	}

}