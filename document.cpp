#include "document.h"
#include <windows.h>
#include <iostream>

char * strCopy(const char *from) {
	if (from == NULL) return NULL;
	int n = strlen(from) + 1;
	char *to = new char[n];
	for (int i = 0; i < n; i++) {
		to[i] = from[i];
	}
	return to;
}

Document::DataCurenta::DataCurenta(){
	SYSTEMTIME st;
	GetSystemTime(&st);
	zi = st.wDay;
	luna = st.wMonth;
	an = st.wYear;
}

Document::DataCurenta::DataCurenta(int an, int luna, int zi) {
	this->an = an;
	this->luna = (luna > 12) ? luna % 12 : luna;
	int zile[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	this->zi = zi > zile[this->luna - 1] ? zi % zile[this->luna - 1] : zi;
}

Document::TimpCurent::TimpCurent() {
	SYSTEMTIME st;
	GetSystemTime(&st);
	ora = st.wHour;
	min = st.wMinute;
	sec = st.wSecond;
}

Document::TimpCurent::TimpCurent(int ora, int min, int sec) {
	this->ora = ora % 24;
	this->min = min % 60;
	this->sec = sec % 60;
}

Document::Document(){
	denumire = NULL;
	tema = NULL;
	autor = NULL;
	nrPagini = 0;
	dataRedact = DataCurenta();
	timpRedact = TimpCurent();
}

Document::Document(const char* denumire) {
	delete[]this->denumire;
	this->denumire = strCopy(denumire);
}

Document::Document(const Document& d){
	this->~Document();
	denumire = strCopy(d.denumire);
	tema = strCopy(d.tema);
	autor = strCopy(d.autor);
	nrPagini = d.nrPagini;
	dataRedact = d.dataRedact;
	timpRedact = timpRedact;
	dataRedact = DataCurenta();
	timpRedact = TimpCurent();
}

Document::~Document(){
	if (denumire != NULL) {
		delete[] denumire;
	}
	if (tema != NULL) {
		delete[] tema;
	}
	if (autor != NULL) {
		delete[] autor;
	}
}

void Document::setTema(const char* tema) {
	this->tema = strCopy(tema);
}

void Document::setAutor(const char* autor) {
	this->autor = strCopy(autor);
}

void Document::setNrPagini(int nrPagini) {
	this->nrPagini = nrPagini;
}

void Document::setDataRedact(int an, int luna, int zi) {
	dataRedact = { an, luna, zi };
}

void Document::setTimpRedact(int ora, int min, int sec) {
	timpRedact = { ora,min,sec };
}
void Document::setAutoDataTimpRedact() {
	dataRedact = DataCurenta();
	timpRedact = TimpCurent();
}
void Document::printDocument() {
	std::cout << "Documentul:\n\tdenumire: " << (denumire == NULL ? "" : denumire ) << "\n\ttema: " << (tema == NULL ? "" : tema) << "\n\tautor: " << (autor == NULL ? "" : autor) << "\n\tnr. pagini: " << nrPagini << "\n\tdata redactarii: " << dataRedact.an << "/" << (dataRedact.luna < 10 ? "0" : "") << dataRedact.luna << "/" << (dataRedact.zi < 10 ? "0" : "") << dataRedact.zi << "\n\ttimpul redactarii: " << (timpRedact.ora < 10 ? "0" : "") << timpRedact.ora << ":" << (timpRedact.min < 10 ? "0" : "") << timpRedact.min << ":" << (timpRedact.sec < 10 ? "0" : "") << timpRedact.sec << std::endl;
}