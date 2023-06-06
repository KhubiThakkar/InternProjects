package com.khubi;

public class stringDemo {
	public static void main(String[] args) {
		
		// in string literal declaration, "hello" exists only once. So both s
		// and str point to the same location. (goes into String Pool)
		String s = "hello";
		String str = "hello";
		System.out.println(s==str);	// true
		
		str = "hey";
		System.out.println(s);
		System.out.println(str);
		
		// New objects are created for s1 and str1, so both point to different 
		// locations (goes into Heap memory)
		String s1 = new String("hello");
		String str1 = new String("hello");
		System.out.println(s1 == str1);	// false
		
		String s2 = "hello";
		String str2 = new String("hello");
		System.out.println(s2 == str2); // false
	}

}
