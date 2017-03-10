int counter;

void countdown_at_idx(int* ptr, int idx){
	
	int minus;
	int cur;
	cur = *(ptr + idx);
	minus = 1;


	if(cur % 2 == 0){
		minus = 2;
	}

	while (cur > 0){
		cur = cur - minus;
		counter = counter + 1;
	}
	
}

int main(){
	int* ptr;
	int idx;

	idx = 0;
	ptr = malloc (20 * 4);
	

	while(idx <= 19){

		*(ptr + idx) = idx;
		countdown_at_idx(ptr, idx);
		idx = idx + 1;
	}

	return counter;
	
}
