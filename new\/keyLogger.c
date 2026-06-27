#include<stdio.h>
#include <unistd.h>
#include<fcntl.h>
#include<linux/input.h>


int main(int argc, char const *argv[]){

    if (argc != 2 && getuid()){
        printf("Usage : sudo %s <eventFilePath>" ,argv[0]);
    }
    struct input_event iE;
    int fD = open(argv[1] ,O_RDONLY ,0);

    while(1){
        read(fD ,&iE ,sizeof(iE));
        printf("%s %d\n","Logged Key :" ,iE.code);
    }
    return 0;
}
