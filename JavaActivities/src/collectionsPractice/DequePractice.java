package collectionsPractice;

import java.util.ArrayDeque;

public class DequePractice {
	public static void main(String[] args) {
		ArrayDeque<Integer> adq = new ArrayDeque<>();
		adq.offer(35);
		adq.offerFirst(12);
		adq.offerLast(44);
		adq.offerLast(58);
		adq.offerLast(100);
		adq.offerLast(142);
		
		System.out.println(adq);
		
		System.out.println(adq.peek());		// first element
		System.out.println(adq.peekFirst());	// first element
		System.out.println(adq.peekLast());		// last element
		
		System.out.println(adq.poll());
		System.out.println(adq.pollFirst());
		System.out.println(adq.pollLast());
	}
}
