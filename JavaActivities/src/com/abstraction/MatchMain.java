package com.abstraction;

import java.util.Scanner;

public class MatchMain {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int loop = 1;
		while(loop == 1)
		{
			System.out.println("Enter the match format: ");
			System.out.println("1.  ODI");
			System.out.println("2.  T20");
			System.out.println("3.  Test");
			int input = sc.nextInt();
			Match object;
			if(input == 1) {
				object = new ODIMatch();
			}
			else if(input == 2) {
				object = new T20Match();
			}
			else if(input == 3) {
				object = new TestMatch();
			}else {
				break;
			}
			System.out.println("Enter the current score: ");
			int value = sc.nextInt();
			object.setCurrentscore(value);
			System.out.println("Enter the current over: ");
			float value1 = sc.nextFloat();
			object.setCurrentover(value1);
			System.out.println("Enter the target score: ");
			int value2 = sc.nextInt();
			object.setTarget(value2);
			System.out.println("Requirements: ");
			
			float runrate = object.calculateRunRate();
			int balls = object.calculateBalls();
			object.display(runrate, balls);	
		}		
		sc.close();
	}
}
