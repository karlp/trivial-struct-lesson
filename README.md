Example of why you shouldn't try and be clever and put tables of data
into a header file.  The static makes them local to the translation unit,
and the header guards just prevent the redeclarations.

In this case, both main.o and b.o end up with their _own_ copy of the table.

Example output:

    karlp@teros:~/src/structy$ ./structalicious
    in main, &entries = 0x400700
    Entry 0 is at 0x400700 = {key:42, label:ho ho ho}
    Entry 1 is at 0x400710 = {key:99, label:decls go to headers}
    Entry 2 is at 0x400720 = {key:68, label:impls shouldn't be here}
    in b, &entries = 0x4007c0
    Entry 0 is at 0x4007c0 = {key:42, label:ho ho ho}
    Entry 1 is at 0x4007d0 = {key:99, label:decls go to headers}
    Entry 2 is at 0x4007e0 = {key:68, label:impls shouldn't be here}
    karlp@teros:~/src/structy$

