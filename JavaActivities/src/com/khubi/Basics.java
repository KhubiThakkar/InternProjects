package com.khubi;

import java.util.Scanner;

public class Basics {
	public static void main(String[] args) {
		// if - else if - else loop
		int number = 20;
		if(number < 10) System.out.println("Too small");
		else if(number >= 10 && number <50) System.out.println("Good number");
		else System.out.println("Too big");
		
		// do - while loop
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a: ");
		int a = sc.nextInt();
		do {
			System.out.println("The number is: "+a);
			a--;
		}while(a>0);

		
		// while loop
		System.out.print("Guess a number between 0 to 10 (inclusive): ");
		int guess = sc.nextInt();
		while(guess != 10) {
			System.out.print("Guess a number between 0 to 10 (inclusive): ");
			guess = sc.nextInt();
		}
		
		// for loop
		int x = 10;
		for(int i=0; i<10; i++) {
			System.out.println("x: "+x);
			x++;
		}
		
		// nested if loop
		int year = 1995;
		if(year%4 == 0) {
			if(year%100 == 0) {
				if(year%400 == 0) {
					System.out.println("Leap");
				}
				else {
					System.out.println("Not Leap");
				}
			}
			else {
				System.out.println("Leap");
			}
		}else {
			System.out.println("Not Leap");
		}
		
		// switch statement
		int value = 4;
		switch(value) {
		case 1:
			System.out.println("one");
			break;
		case 2:
			System.out.println("two");
			break;
		case 3:
			System.out.println("three");
			break;
		case 4:
			System.out.println("four");
			break;
		default:
			System.out.println("not in 1 to 4");
			break;
		}
		
		sc.close();
	}

}
