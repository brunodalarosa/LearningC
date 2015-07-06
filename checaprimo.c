int checaprimo(int n){
	int d = 2;
	while (d < n){
		if (n%d == 0){
			return 0;
		}
		d++;
	}
	return 1;
}