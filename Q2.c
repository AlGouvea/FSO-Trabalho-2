#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	FILE *currentFile;
	int fSize, fSize2, igual;
	char *buffer;

	for(int i = 1; i < argc; i++) {
		//Abrir arquivo
		currentFile = fopen(argv[i], "rb");

		//Pegar tamanho
		fseek(currentFile, 0, SEEK_END);
		fSize = ftell(currentFile);

		//Reinicar ponteiro
		rewind(currentFile);

		//Copiar pro vetor
		buffer = (char *)malloc(fSize * sizeof(char));
		fread(buffer, fSize, 1, currentFile);
		fclose(currentFile);

		//Comparar com o outro arquivo
		for(int j = i+1; j < argc; j++) {
			//Abre segundo arquivo
			currentFile = fopen(argv[j], "rb");
			
			//Pegar tamanho
			fseek(currentFile, 0, SEEK_END);
			fSize2 = ftell(currentFile);

			//Compara tamanho
			igual = 1;
			if(fSize2 == fSize) {
				char *newFile;
				newFile = (char *)malloc(fSize2 * sizeof(char));

				//Reinicia
				rewind(currentFile);

				//Le e compara
				fread(newFile, fSize2, 1, currentFile);

				for(int k = 0; k < fSize; k++){
					if(buffer[k] != newFile[k]){
						igual = 0;
						break;
					}
				}
			} else {
				igual = 0;
			}

			if(igual == 0) {
				printf("%s %s diferentes\n", argv[i], argv[j]);
			} else {
				printf("%s %s iguais\n", argv[i], argv[j]);
			}
			fclose(currentFile);
		}
	}
}