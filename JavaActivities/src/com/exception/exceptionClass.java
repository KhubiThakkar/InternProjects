package com.exception;

import java.util.Scanner;

public class exceptionClass {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		try {
			System.out.println("Enter the total runs scored: ");
			int runs = sc.nextInt();
			System.out.println("Enter the total overs faced: ");
			int overs = sc.nextInt();
			
			tryingException obj = new tryingException();
			float runrate = obj.calculateRunRate(runs, overs);
			
			System.out.print("Current run rate: ");
			System.out.printf("%.2f", runrate);
		}
		catch(Exception e) {
			System.out.println(e);
		}
		sc.close();
	}
}

class tryingException {
	float calculateRunRate(int runs, int overs) {
		float runrate = (float)runs/overs;
		return runrate;
	}
}