#include <stdio.h>
int FUNCTION_WRITE(char* argv[]);
int FUNCTION_READ(char* argv[]);
int main(int argc,char* argv[]){
	int ReturnValue;
	
	switch(*argv[1]){
		case 'w':
			printf("command is acceptable...\n");
			ReturnValue = FUNCTION_WRITE(argv);
		break;
		
		case 'r':
			printf("command is acceptable...\n");
			ReturnValue = FUNCTION_READ(argv);
		break;
		
		default:
			printf("command is NOT acceptable...\n");
			ReturnValue = 1;
		break;
	}

	return ReturnValue;
}
int FUNCTION_WRITE(char* argv[]){
	FILE *fp;
	fp = fopen(argv[2], "a");
	
	fprintf(fp,"%s\n",argv[3]);
	
	fclose(fp);
	return 0;
}

int FUNCTION_READ(char* argv[]){
	FILE *fp;
	char buff[255];
	fp = fopen(argv[2], "r");
	
	fscanf(fp, "%s", buff);
	printf("1 : %s\n", buff );
	
	fgets(buff, 255, (FILE*)fp);
	printf("2: %s\n", buff );
	
	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff );
	
	fclose(fp);
	return 0;
}