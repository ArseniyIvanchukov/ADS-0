// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int res = 0;
	while ((b != 0) && (a != 0))
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	if (a == 0)
		res = b;
	else
		res = a;
	return res;
}
