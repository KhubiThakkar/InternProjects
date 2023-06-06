package com.classAndObj;

import java.util.Scanner;

public class CustomerMain {
	public static void main(String[] args) {
		Customer coust = new Customer();
		System.out.println("Enter input: ");
		Scanner sc = new Scanner(System.in);
		String input = sc.next();
		String arrOfString[] = input.split(",");
		coust.setCoustname(arrOfString[0]);
		coust.setCoustaddress(arrOfString[1]);
		coust.setCoustmobile(arrOfString[2]);
		System.out.println(coust);
		sc.close();
	}
	
}
