#include <stdio.h>

int occurences[15] = {0};

void output_occurences_diagram() {
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i <= 15; i++) { 
		printf("%d:   ", i);
		for (j = 0; j < occurences[i]; j++) {
			printf("|");
		}
		printf("\n");
	}
}

void expand_occurences_table(int d) {
	int k = 0;
	k = d / 16;
	occurences[k]+=1;
}

int main() {
	signed int d;		// integer with range - 0-255
	while (1) {
		printf("Submit an integer within 0-256: \n");
		scanf("%d",&d);
		if (d < 0 || d >= 256) {
			printf("Illegal integer was submitted.\n");
			continue;
		}
		expand_occurences_table(d);
		output_occurences_diagram();
	}

	return 0;
}