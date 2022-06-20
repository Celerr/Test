#include <iostream>

int main()
{
	////int numNeighbors = 2;

	////if((numNeighbors >= 3) || (numNeighbors == 4))
	//{
	////	++numNeighbors;
	//////	std::cout << "You are dead!" << std::endl;
	//}
	////else
	//{
	////	--numNeighbors;
	//}


	////int number = 4;
	////double alpha = -1.0;
	////if (number > 0)
	////{
	////	if (alpha > 0)
	//	{
	////		std::cout << " Here I am!" << std::endl;
	////	}
	//}
	////else if (number == 0)
	//{
	////	std::cout << " No, I'm here!" << std::endl;
	//}
	////else if (alpha < 0)
	//{
	////	std::cout << "No, actually, I'm here!" << std::endl;
	//}

	////int currentNumber = 5;
	////if (currentNumber % 2 != 0)
	//{
	////	currentNumber = 3 * currentNumber + 1;
	//}
	////else
	//{
	////	currentNumber = currentNumber / 2;
	//}

	//	//0,1,2,3,4,5,6,7,8,9

	////bool leapYear;
	////int year;
	////if (year % 4 == 0)
	//{
	//	//2001,2002,2003,2004
	//	//1,2,3,4
	////	leapYear = true;
	//}

	////double cost;
	////int distance;
	////if (distance >= 0 && distance <= 100)
	//{
	////	cost = 5.00;
	//}
	////else if (distance > 100 && distance <= 500)
	//{
	////	cost = 8.00;
	//}
	////else if (distance > 500 && distance < 1000)
	//{
	////	cost = 10.00;
	//}
	////else if (distance >= 1000)
	//{
	////	cost = 12.00;
	//}


	int length;
	int breadth;
	std::cout << "Enter length" << std::endl;
	std::cin >> length;
	std::cout << "Enter breadth" << std::endl;
	std::cin >> breadth;

	if (length >= 0)
	{
		if (length == breadth)
		{
			std::cout << "its a square" << std::endl;
		}
		else
		{
			std::cout << "its a rectangle" << std::endl;
		}
	}
	else
	{
		std::cout << " calculation not possible" << std::endl;
	}




	int x;
	int y;
	std::cout << " enter number" << std::endl;
	std::cin >> x;
	std::cout << "enter number" << std::endl;
	std::cin >> y;
	if (x > y)
	{
		std::cout << "Largest number is " && std::cout << x << std::endl;
	}
	else
	{
		std::cout << "Largest number is " && std::cout << y << std::endl;
	}

	int quantity;
	double discount = 0.1;
	std::cout << "enter quantity" << std::endl;
	std::cin >> quantity;
	if (quantity > 0)
	{
		if (quantity > 1000)
		{
			//100*1.1=110
			//100*0.1=10
			//100*0.9=90
			//50*0.25=12.5
			//50*1.25=62.5
			//50*0.75=37.5
			std::cout << quantity * 100 * 0.9 << std::endl;
		}
		else
		{
			std::cout << "no discount" << std::endl;
		}
	}
	else
	{
		std::cout << " not possible" << std::endl;
	}
	//ore wa baka >///< senpaiii help

	int years;
	int salary;
	double p = 0.05;

	std::cout << "Enter salary" << std::endl;
	std::cin >> salary;
	std::cout << "enter years" << std::endl;
	std::cin >> years;
	if (years > 5)
	{
		std::cout << " You get an extra " << p * salary << std::endl;
	}
	else
	{
		std::cout << "no salary bonus ha bitch" << std::endl;
	}



	int mark;
	std::cout << "what mark did u get dumb fuck" << std::endl;
	std::cin >> mark;
	if (mark > 0)
	{
		if (mark > 80)
		{
			std::cout << "A wow ur great  good job :)" << std::endl;
		}
		else if (mark >= 60)
		{
			std::cout << " B slightly worse but all good bro:)" << std::endl;
		}
		else if (mark >= 50)
		{
			std::cout << " C is for cunt" << std::endl;
		}
		else if (mark >= 45)
		{
			std::cout << " D is for dumbufck" << std::endl;
		}
		else if (mark >= 25)
		{
			std::cout << " E is for eggplant emoji" << std::endl;
		}
		else if (mark < 25)
		{
			std::cout << " F is for a fucking donut or a fucknut" << std::endl;
		}
	}
	else
	{
		std::cout << " calculation not possible lmfao" << std::endl;
	}


	int a=40;
	int b=55;
	int c=65;
	if (a > 0 && b > 0 && c > 0)
	{
		if (a + b + c == 180)
		{
			std::cout << "it's a triangle" << std::endl;
		}
		else
		{
			std::cout << " it isn't a triangle" << std::endl;
		}
	}
	else
	{
		std::cout << " calculation not possible" << std::endl;
	}



	int day;
	std::cout << "Enter weekday number thing ?" << std::endl;
	std::cin >> day;
	switch (day) 
	{
	case 1:
		std::cout << "Monday" << std::endl;
		break;
	case 2:
		std::cout << "Tuesday" << std::endl;
		break;
	case 3:
		std::cout << "Wednesday" << std::endl;
		break;
	case 4:
		std::cout << "Thursday" << std::endl;
		break;
	case 5:
		std::cout << "Friday" << std::endl;
		break;
	case 6:
		std::cout << "Saturday" << std::endl;
		break;
	case 7:
		std::cout << "Sunday" << std::endl;
		break;
	}

	//write a C program to check whether a number is divisible by 5 and 11 or not.

	int cum;
	std::cout << "Enter a number O_O" << std::endl;
	std::cin >> cum;
	if (cum % 5 == 0 && cum % 11 == 0)
	{
		std::cout << "Number is divisible by 5 and 11" << std::endl;
	}
	else
	{
		std::cout << "Number is not divisible by 5 and 11" << std::endl;
	}



	int d;
	int came;
	std::cout << "how many days have passed since the new year" << std::endl;
	std::cin >> d;
	came = d / 7;
	std::cout << came << std::endl;

	//================================================================= the new year thing

	int n=7;
	int m=23;
	int s;
	int k;
	s = m / n;
	k = m - s * n;
	std::cout << "Each student got " << s << std::endl;
	std::cout << k << " were left " << std::endl;
	///=============================================================================================dont get sensei mad





	int nBalloons=77;
	int kBalloons=3;
	int dFriends=7;
	int mFriendBall;
	int aBalloons;
	mFriendBall = (nBalloons - kBalloons) / (dFriends+1);
	aBalloons = nBalloons - kBalloons - mFriendBall * dFriends;
	///=============================================================================== losing my mind slowly


	/*int nCandy = 5;
	int mCandy = 2;
	int kDays = 3;
	int dDays;
	int aFriends;*/
	//================================================= I SHOULD OCME BACK TO THIS LITHUANINA SHIT LAST ONE :DDDDDDDD CRINGE

	int t; //trizenklis skaicius pradinis duomuo
	int a, b, c; //trizenklio skaiciaus skaitmenys,tarpiniai rezultatai
	int s; //trizenklio skaiciaus skaitmenu suma, galutinis rezultatas
	std::cout << " Iveskite trizenkli skaicius" << std::endl;
	std::cin >> t;
	a = t / 100; //atskiriamas pirmasis skaitmuo
	b = t / 10 % 10; //atskiriamas antrasis skaitmuo
	c = t % 10; //atskiriamas treciasis skaitmuo
	s = a + b + c;
	std::cout << "Trizenklio skaiciaus skaitmenu suma yra lygi" << a << std::endl;


	std::cout << "hentai";












	system("pause");
	return 0;

}