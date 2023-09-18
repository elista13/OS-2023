#include<stdio.h>
#include<stddef.h>
size_t chikibamboni(size_t call) {
	size_t x=0,y=1,c=1,res=0;
	if(call==2 || call==1){
	res+=y;
	}
	if(call==0){
	res=a;
	}
	for(size_t i=3;i<=call;i++){
	res=x+y+z;
	x=y;
	y=z;
	z=res;
	}
	return res;
}
int main(){
	printf("chikibamboni(4) returned %lu\n", chikibamboni(4));
	printf("chikibamboni(36) returned %lu\n", chikibamboni(36));
	return 0;
} 
