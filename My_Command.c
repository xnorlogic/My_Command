#include <stdio.h>
int FUNCTION_A(void);
int main(int argc,char* argv[]){
	int ReturnValue;

	switch(*argv[1]){
		case 'a':
			printf("command is acceptable...\n");
			ReturnValue = FUNCTION_A();
		break;
		
		default:
			printf("command is NOT acceptable...\n");
			ReturnValue = 1;
		break;
	}

	return ReturnValue;
}
int FUNCTION_A(void){
	/*do stuff here and check if its ok or not, 
	then return the status*/
	return 0;
}