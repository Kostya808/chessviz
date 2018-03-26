int test(char letter, int number){
	int i, flag = 0;
	char abc[8] = {'A','B','C','D','E','F','G','H'};
	for (i = 0; i < 8; i++)
		if (letter == abc[i])
			flag = 1;
	if (flag != 1)
		return -1;
	int numb[6] = {2, 3, 4, 5, 6, 7};
	for (i = 0; i < 6; i++)
		if (number == numb[i])
			flag = 1;
	if (flag != 1)
		return -1;
	return 0;	
}