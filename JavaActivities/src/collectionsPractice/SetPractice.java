package collectionsPractice;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class SetPractice {
	public static void main(String[] args) {
		
//		Set<Integer> set = new HashSet<>();
//		Set<Integer> set = new LinkedHashSet<>();
		
//		Set<Integer> set = new TreeSet<>();
//		
//		set.add(2);
//		set.add(12);
//		set.add(12);
//		set.add(12);
//		set.add(12);
//		set.add(24);
//		set.add(10);
//		set.add(34);
//		set.add(9);
//		
//		System.out.println(set);
//		
//		set.remove(12);
//		System.out.println(set);
//		
//		System.out.println(set.contains(24));
//		System.out.println(set.isEmpty());
//		System.out.println(set.size());
//		set.clear();
//		
//		System.out.println(set.contains(24));
//		System.out.println(set.isEmpty());
//		System.out.println(set.size());
		
		Set<Student> studentSet = new HashSet<>();
		studentSet.add(new Student("rohit",2));
		studentSet.add(new Student("anuj",1));
		studentSet.add(new Student("kg",1));
		studentSet.add(new Student("karan",5));
		
		System.out.println(studentSet);
	}
}
