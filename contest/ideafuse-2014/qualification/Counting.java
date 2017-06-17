//package com.kinto;

//import java.util.ArrayList;
import java.util.Scanner;

public class Counting {

    // (X) Mimik loves counting up by 7
    // (Y) Kikil loves counting down by 5

    public static String numFinder(int i, long x, long y){
        long diff = y - x;

        if (x == y){
            return (String.format("Case #%d: %d", i, x));
        }

        if (diff < 12 || diff % 12 != 0){
            return (String.format("Case #%d: impossible", i));

        } else {

            long divider = diff / 7 + 1; // dibagi 7

            if (divider == 1){
//                System.out.println("Divider : " + divider);

                return (String.format("Case #%d: %d", i, x + 7));
            } else {
//                System.out.println("Divider : " + divider);
                for (long j = divider / 2; j < divider; j++) {
                    if ((x + (j * 7)) == (y - (j * 5))){
//                    System.out.println(j);
                        return (String.format("Case #%d: %d", i, x + j * 7));
                    }
                }

                return null;

            }



        }

    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        int cases = in.nextInt();

        for (int i = 1; i <= cases; i++) {
            long x, y;
            x = in.nextLong();
            y = in.nextLong();
            System.out.println(numFinder(i, x, y));
        }

//        System.out.println(numFinder(1, 100, 1000));
//        System.out.println(numFinder(2, 1999, 100));
//        System.out.println(numFinder(3, 100, 124));
//        System.out.println(numFinder(3, 100, 112));
//
//        // not accepted
//        System.out.println(numFinder(4, 100, 100));

    }
}

//
// 525 7
// 375 5
// x 75

// 625


// 900 / 7 = 128
// 900 / 5 = 180


//0, 7, 14, 21, 28, 35, 42, 49, 56, 63, 70

