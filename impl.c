#include <stdio.h>

int occurences[255] = {0};

void output_occurences_diagram() {
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 255; i++) { 
		printf("%d:   ", i);
		for (j = 0; j < occurences[i]; j++) {
			printf("|");
		}
		printf("\n");
		if (i%16 == 0) printf("\n\n");
	}
}

void expand_occurences_table(int d) {
	occurences[d]+=1;
}

int main() {
	signed int d;		// integer with range - 0-255
	while (1) {
		printf("Submit an integer within 0-255: \n");
		scanf("%d",&d);
		if (d < 0 || d >= 255) {
			printf("Illegal integer was submitted.\n");
			continue;
		}
		expand_occurences_table(d);
		output_occurences_diagram();
	}

	return 0;
}