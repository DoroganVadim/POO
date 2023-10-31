class Document {
private:
	class DataCurenta {
	public:
		int an;
		int luna;
		int zi;
		DataCurenta();
		DataCurenta(int an, int luna, int zi);
	};
	class TimpCurent {
	public:
		int ora;
		int min;
		int sec;
		TimpCurent();
		TimpCurent(int ora, int min, int sec);
	};

	char* denumire;
	char* tema;
	char* autor;
	unsigned int nrPagini;
	DataCurenta dataRedact;
	TimpCurent timpRedact;

public:
	Document();
	Document(const char* denumire);
	Document(const Document& d);
	~Document();
	void setTema(const char* tema);
	void setAutor(const char* autor);
	void setNrPagini(int nrPagini);
	void setDataRedact(int an, int luna, int zi);
	void setTimpRedact(int ora, int min, int sec);
	void setAutoDataTimpRedact();
	void printDocument();
};
