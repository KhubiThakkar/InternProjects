package collectionsPractice;

import java.util.HashMap;
import java.util.Map.Entry;
import java.util.TreeMap;

public class mapPractice {
	private static final String Map = null;

	public static void main(String[] args) {
		
//		java.util.Map<String, Integer> numbers = new HashMap<>();
		java.util.Map<String, Integer> numbers = new TreeMap<>();
		numbers.put("one", 1);
		numbers.put("two", 2);
		numbers.put("three", 3);
		numbers.put("four", 4);
		numbers.put("five", 5);
//		System.out.println(numbers);
//		numbers.putIfAbsent("two", 23);
		
//		for(Entry<String, Integer> e: numbers.entrySet()) {
//			System.out.println("printing e: " + e);
//			System.out.println("printing key: " + e.getKey());
//			System.out.println("printing value: " + e.getValue());
//		}
		
		for(String key: numbers.keySet()) {
			System.out.println("Keys: " + key);
		}
		
		for(Integer value: numbers.values()) {
			System.out.println("Values: " + value);
		}
		System.out.println(numbers);
		numbers.remove("three");
		System.out.println(numbers);
		System.out.println(numbers.containsKey("three"));
		System.out.println(numbers.containsValue(2));
		System.out.println(numbers.isEmpty());
		
		numbers.clear();
		System.out.println(numbers);
	}

}
