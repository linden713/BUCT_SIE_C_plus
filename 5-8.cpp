
/*
	int num;
	cin >> num;
	double origin;
	double num1, num2;
	cin >> num1 >> num2;
	origin = (double)num2 / num1;
	for (int i = 0; i < num - 1; i++) {
		cin >> num1 >> num2;
		if (num2 / num1- origin >   0.05) {
			cout << "better" << endl;
		}
		else if (origin- num2 / num1  >  0.05) {
			cout << "worse" << endl;
		}
		else {
			cout << "same" << endl;
		}
	}
	
	
	
	

	int num = 0;
	int tempi = 0;
	int tempj =0;
	int tempk=0;
	cin >> num;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			for (int k = 0; i < 100; k++) {
				if (6 * i + 5 * j + 4 * k == num) {
					if(k>=tempk){
						tempi = i; tempj = j; tempk = k;
					}
					
				}
				else if (6 * i + 5 * j + 4 * k > num) {
					break;
				}
			}
		}
	}
	cout << tempi << " " << tempj << " " << tempk;
	
	
	
	

	string letter;
	getline(cin, letter);
	for (int i = 0; i < letter.length(); i++) {
		if (letter[i] < 'Z' and letter[i] >= 'A') {
			cout << char(++letter[i]);
		}
		else if (letter[i] < 'z' and letter[i] >= 'a') {
			cout << char(++letter[i]);
		}
		else if (letter[i] == 'z') {
			cout << "a";
		}
		else if (letter[i] == 'Z') {
			cout << "A";
		}
		else {
			cout << letter[i];
		}

	}
	*/
