package collectionsPractice;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class ArrayListPractice {
	public static void main(String[] args) {
		/*
		 * ArrayList<String> studentName = new ArrayList<>(); studentName.add("Ram");
		 * System.out.println(studentName);
		 * 
		 * List<Integer> list = new ArrayList(); list.add(1); list.add(2); list.add(3);
		 * System.out.println(list); list.add(0,4); System.out.println(list);
		 * 
		 * List <Integer> newlist = new ArrayList(); newlist.add(22); newlist.add(5);
		 * newlist.add(4); newlist.add(6); list.addAll(2,newlist);
		 * System.out.println(newlist); System.out.println(list);
		 * System.out.println(list.get(2));
		 */
		
		List<Integer> list = new ArrayList<>();
		list.add(22);
		list.add(33);
		list.add(44);
		list.add(55);
		list.add(66);
		list.add(77);
		
		System.out.println(list);

//		for(int i = 0; i<list.size(); i++) {
//			System.out.println(list.get(i));
//		}

		for(Integer element: list) {
			System.out.println("for each loop is " + element);
		}
		
		Iterator<Integer> it = list.iterator();
		while (it.hasNext()) {
			System.out.println(it.next());
		}
		
//		// Replace the number at index = 2 with 100
//		list.set(2, 100);
//		System.out.println(list);
//		
//		// if present or not
//		System.out.println(list.contains(33));
		
//		list.remove(1);
//		System.out.println(list);
//		
//		list.remove(Integer.valueOf(22));
//		System.out.println(list);
//		
//		list.clear();
//		System.out.println(list);
	}
}
