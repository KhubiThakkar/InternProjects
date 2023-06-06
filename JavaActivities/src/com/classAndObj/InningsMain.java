package com.classAndObj;

import java.util.Scanner;

public class InningsMain {
	public static void main(String[] args) {
		Innings in = new Innings();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the team name: ");
		in.setTeamname(sc.next());
		System.out.println("Enter session: ");
		in.setInningname(sc.next());
		System.out.println("Enter runs: ");
		in.setRuns(sc.nextInt());
		
		in.displayInningsDetails();
		sc.close();
	}
}
