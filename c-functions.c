int count_dig(int n){
	int count=0;
	while(n!=0){
		n/=10;
		count++;
	}
	return count;
}

int pot(int b, int exp){
	int i, pot=1;
	for(i=0;i<exp;i++){
		pot*=b;
	}
	return pot;
}