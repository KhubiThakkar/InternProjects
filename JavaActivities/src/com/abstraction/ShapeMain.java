package com.abstraction;

import java.util.Scanner;

public class ShapeMain {
	public static void main(String[] args) {
		int loop = 1;
		while(loop == 1) {
			System.out.println("Circle");
			System.out.println("Square");
			System.out.println("Enter the shape: ");
			Scanner sc = new Scanner(System.in);
			String input = sc.next();
			input = input.toLowerCase();
			int number;
			if(input.equals("circle")) {
				System.out.println("Enter the radius: ");
				number = sc.nextInt();
				Shape shape = new Circle();
				System.out.println("Area of circle is " + shape.calculateArea(number));
			}
			else if(input.equals("square")) {
				System.out.println("Enter the lenght of side: ");
				number = sc.nextInt();
				Shape shape = new Square();
				System.out.println("Area of circle is " + shape.calculateArea(number));
				
			}else {
				loop = 0;
				sc.close();
			}
		}

		
	}
}
