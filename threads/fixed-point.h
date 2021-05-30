#define F (1 << 14)


int sumaFP(int a, int b){
	return a + b;
}

int restaFP(int a,int b){
	return a - b;
}

int sumaIntToFP(int a, int b)
{
	return a + b*F;
}

int restaIntFromFP(int a, int b)
{
	return a - b*F;
}




int multFP(int a, int b)
{
	return ((int64_t)a)*b/F;
}

int divFP(int a, int b)
{
	return ((int64_t)a)*F/b;
}


int multintFP(int a, int b)
{
	return a * b;
}


int divintFP(int a, int b)
{
	return a / b;
}



int converToFP(int n)
{
	return n * F;
}

int converToInt(int x)
{
	if(x >= 0) return (x+F/2)/F;
	else return (x-F/2)/F;
}





