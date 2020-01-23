#pragma once
class Characters{
public:

	char Turkish[29] = { 'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z' };
	char UpperTurkish[29] = { 'A','B','C','Ç','D','E','F','G','Ð','H','I','Ý','J','K','L','M','N','O','Ö','P','R','S','Þ','T','U','Ü','V','Y','Z' };

	int findIndexofTurkish(char temp);

};
