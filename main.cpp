//  ==================================================
//  main.cpp - defines entry point for 7.sort program
//
//  Creates array of random integers, then uses bubble
//  sort algorithm to sort that array.
//
//  Version: 1.0.0
//  Date: 6/3/17
//  By: Colten Sullivent
//  ==================================================

//  ===================
    #include <iostream>
//  ===================

//  ====================
    using namespace std;
//  ====================

//  ===============
//  function main()
//  ============
    int main() {

//      ====================
        const int size = 20;
        int array[size];
        int a;
        int b;
        int swap;
//      =========

//      ==============
//      populate array
//      ==================================
        cout << "Unsorted Array:" << endl;
        for (int ii = 0; ii < size; ii++) {
            array[ii] = (rand() % 100) + 1;
            cout << array[ii] << " ";
        } // for
        cout << endl;
//      =============

//      =====
//      magic
//      ================================
        for (a = 0; a < size - 1; a++) {
            for (b = 0; b < size - a - 1; b++) {
                if (array[b] > array[b+1]) {
                    swap = array[b];
                    array[b] = array[b+1];
                    array[b+1] = swap;
                } // if
            } // for
        } // for

//      ==================
//      print sorted array
//      ================================
        cout << "Sorted Array:" << endl;
        for (int ii = 0; ii < size; ii++) {
            cout << array[ii] << " ";
        } // for
        cout << endl;
//      =============

        return 0;

    } // function main()
//  ====================