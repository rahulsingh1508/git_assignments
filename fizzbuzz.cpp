void fizz(int n) {
	for (int i = 1; i <= n; ++i) {
		if (i % 3 == 0 && i % 5 == 0) {
			cout << "FIZZBUZZ ";
		} else if (i % 3 == 0) {
			cout << "FIZZ ";
		} else if (i % 5 == 0) {
			cout << "BUZZ ";
		} else {
			cout << i << " ";
		}
	}
	cerr << '\n';
}