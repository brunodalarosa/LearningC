#include <stdio.h>

/*void go_south_east(int *lat, int *lon){
	*lat = *lat - 1;
	*lon = *lon + 1; 
}*/

int main(){
	/*int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude,&longitude);
	printf("Arroy! Now at [%i,%i]\n",latitude,longitude);*/
	char um_array[]="N64";
	char um_pointer[1];
	um_pointer[0]='G';
	um_array[0]='A';
	printf("Array:%s 	Pointer:%s\n",um_array, um_pointer);
	return 0;
}

