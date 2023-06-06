package com.listInterface;

import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Scanner;

public class cricketExample {
	 public static void main(String[] args) {
		LinkedHashSet<String> details = new LinkedHashSet();
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the player details: ");
		System.out.println("Enter the player name: ");
		details.add(sc.next());
		System.out.println("Enter age: ");
		details.add(sc.next());
		System.out.println("Enter country");
		details.add(sc.next());
		
		System.out.println("Printing Details");
		Iterator<String> it = details.iterator();
		while(it.hasNext()) {
			System.out.println(it.next());
		}
	}
}
