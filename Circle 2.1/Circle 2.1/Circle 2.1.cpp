	while (!(cin >> s) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error!" << endl;
	}