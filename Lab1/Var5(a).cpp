#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct colaborator
{
	char* nume;
	char* specialitate;
	char* categorie;
	float salariu;
};

void setColaborator(colaborator& c) {
	c.nume = new char[30];
	c.specialitate = new char[30];
	c.categorie = new char[30];
}

void modNumeColab(colaborator& c, const char* nume) {
	strcpy_s(c.nume, 30, nume);
}

void modSpecColab(colaborator& c, const char* specialitate) {
	strcpy_s(c.specialitate, 30, specialitate);
}

void modCatColab(colaborator& c, const char* categorie) {
	strcpy_s(c.categorie, 30, categorie);
}

void modSalColab(colaborator& c, float salariu) {
	c.salariu = salariu;
}

int comparareNume(colaborator c1, colaborator c2) {
	return strcmp(c1.nume, c2.nume);
}

int comparareSpecialitate(colaborator c1, colaborator c2) {
	return strcmp(c1.specialitate, c2.specialitate);
}

int comparareCategorie(colaborator c1, colaborator c2) {
	return strcmp(c1.categorie, c2.categorie);
}

int comparareSalariu(colaborator c1, colaborator c2) {
	if (c1.salariu > c2.salariu) return 1;
	else if (c1.salariu == c2.salariu) return 0;
	else return -1;
}

void freeColaborator(colaborator& c) {
	free(c.nume);
	free(c.specialitate);
	free(c.categorie);
}

void sortColaborator(colaborator* c, int n, int caz, bool tipulCresterii) {
	//true -> crescator
	//false -> descrescator
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			switch (caz) {
			case 1: if (comparareNume(c[i], c[j]) >= 0 == tipulCresterii) swap(c[i], c[j]); break;
			case 2: if (comparareSpecialitate(c[i], c[j]) >= 0 == tipulCresterii) swap(c[i], c[j]); break;
			case 3: if (comparareCategorie(c[i], c[j]) >= 0 == tipulCresterii) swap(c[i], c[j]); break;
			case 4: if (comparareSalariu(c[i], c[j]) >= 0 == tipulCresterii) swap(c[i], c[j]); break;
			}
		}
	}
}

void afis(colaborator* colaboratori, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Colaboratorul nr." << i + 1 << "\n  Nume: " << colaboratori[i].nume << "\n  Specialitate: " << colaboratori[i].specialitate << "\n  Categorie: " << colaboratori[i].categorie << "\n  Salariu: " << colaboratori[i].salariu << "\n\n";
	}
}

int main()
{
	int n;
	cout << "Dati numarul de colaboratori:\n  n = ";
	cin >> n;
	colaborator* colaboratori = new colaborator[n];
	for (int i = 0; i < n; i++) {
		cout << "Colaboratorul " << i + 1 << ". Dati:";
		setColaborator(colaboratori[i]);
		char* text = new char[30];

		cout << "\n  Numele: ";
		cin >> text;
		modNumeColab(colaboratori[i], text);


		cout << "  Specialitatea: ";
		cin >> text;
		modSpecColab(colaboratori[i], text);


		cout << "  Categoria : ";
		cin >> text;
		modCatColab(colaboratori[i], text);

		int sal;
		cout << "  Salariu: ";
		cin >> sal;
		modSalColab(colaboratori[i], sal);
		cout << "\n";
		;
	}

	while (true) {
		system("cls");
		int caz;
		cout << "1) Afiseaza colaboratorii\n2) Sorteaza colaboratorii\n0 - Iesire\n-";
		cin >> caz;
		if (caz == 0) break;
		switch (caz) {
		case 1:
			system("cls");
			cout << "Lista de Colaboratori:\n";
			afis(colaboratori, n);
			system("pause");
			break;
		case 2:
			int sortCaz;
			int tipSort;
			do {
				system("cls");
				cout << "Sortare dupa:\n  1) Nume\n  2) Specialitate\n  3) Categorie\n  4) Salariu\n-";
				cin >> sortCaz;

			} while (sortCaz > 4 || sortCaz < 1);
			do {
				system("cls");
				cout << "Tipul de sortare:\n  1) Crescator\n  2) Descrescator\n-";
				cin >> tipSort;
			} while (tipSort > 2 || tipSort < 1);
			sortColaborator(colaboratori, n, sortCaz, tipSort == 1);
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		freeColaborator(colaboratori[i]);
	}
	delete[]colaboratori;
	return 0;
}
