#ifndef __MY_STRING_H__
#define __MY_STRING_H__

#include <string.h>
#include <stdio.h>
#include "dyn_array.h"
#include <assert.h>

typedef unsigned int uint;

class String {
public:
	char* string;
	uint capacity;

public:
	bool String::operator==(const char* c_str) const {

		return strcmp(this->string, c_str) == 0;
	}


	bool String::operator==(const String& str) const {

		return strcmp(this->string, str.string) == 0;
	}


	const String& String::operator=(const String& str) {

		if (this->capacity != str.capacity) {
			delete[] this->string;
			capacity = strlen(str.string) + 1;
			string = new char[capacity];
		}

		strcpy_s(string, str.capacity, str.string);
		return *this;
	}


	const String& String::operator=(const char* c_str) {

		if (this->capacity != strlen(c_str) + 1) {
			delete[] this->string;
			capacity = strlen(c_str) + 1;
			string = new char[capacity];
		}

		strcpy_s(string, capacity, c_str);
		return *this;
	}


	const Vector<String> String::Tokenize(Vector<String>&tokens){
		
		String newbuffer(length());
		int i = 0, j = 0;

		do {

			for (j = 0; string[i] != ' ' && string[i] != '\0' && string[i] != '\n '; i++, j++){
				/*if (string[i] >= 'A' && string[i] <= 'Z')
					string[i] = string[i] - 32;*/
				newbuffer.string[j] = string[i];
			}
			
			newbuffer.string[j] = '\0';
			tokens.push_back(newbuffer.string);

			for (; string[i] == ' '; i++);

		} while (string[i] != '\0');

		return tokens;
	}


	void String::print(){

		printf("%s\n", string);
	}


	String::String(unsigned int mem) {

		string = new char[mem + 1];
		string[mem] = '\0';
	}


	String::String(){

		string = nullptr;
	}


	String::String(char* c_str) {

		assert(c_str != nullptr);

		this->capacity = strlen(c_str) + 1;
		this->string = new char[capacity];
		strcpy_s(this->string, capacity, c_str);
	}


	String::String(String& str){

		assert(str.string != nullptr);

		capacity = strlen(str.string) + 1;
		string = new char[capacity];
		strcpy_s(this->string, capacity, str.string);
	}


	int String::size() {

		return sizeof(string) / sizeof(string[0]);
	}


	const int String::length() {

		return strlen(this->string);
	}


	bool String::empty() const {

		return string[0] == '\0';
	}


	void String::clear() {

		delete[] string;
	}


	char* String::c_str() {

		return string;
	}


	String::~String() {

		delete[] string;
	};

};

#endif