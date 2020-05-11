#include <stdio.h>

int main()
{
	int count = 1, i;
	char current, new, go;

	while (1)
	{
		printf("karakter gir:");
		scanf(" %c", &current);
		printf("sonuc:");
		while (1)
		{
			scanf("%c", &new);
			if (current == new)
			{
				count++;
			}
			else
			{
				printf("%d%c", count, current);
				count = 1;
			}
			current = yeni;
			if (new == '\n')
				break;
		}
		do
		{
			printf("\nDevam(d/D-b/B)?:");
			scanf(" %c", &go);
			if (go == 'b' || go == 'B' || go == 'd' || go == 'D')
				break;
		} while (go != 'd' || go != 'D' || go != 'b' || go != 'B');

		if (go == 'b' || go == 'B')
		{
			printf("Program Sonlandi...\n");
			break;
		}
		else if (go == ('d') || ('D'))
			continue;
	}
	system("pause");
	return 0;
}
