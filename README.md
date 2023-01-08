# TicTacToe3D

Version 1.0.0 - Playable and useful for future AI/analyze

## How yo build
 - cmake 
 - compatible with Visual Studio (windows), gcc (mingw & linux)

## Running application
So far - just a console app :


        %> h
        Available commands:
        q[uit] : Quit
        u[ndo] : Undo last move
        <c> <r> <p> : Set piece at column (<c>=0..2),row (<r>=0..2),piece(<p>=0..2)
        --------------------------------
        Moves: 0
        r\c| 0 | 1 | 2 |
        ===+===+===+===+
         0 |---|---|---|
         1 |---|---|---|
         2 |---|---|---|
        ===+===+===+===+
        P#0 -> :   0: 3*"y--",  1: 3*"-y-",  2: 3*"--y" : #=0, solved=0
        P#1    :   0: 3*"g--",  1: 3*"-g-",  2: 3*"--g" : #=0, solved=0
        P#2    :   0: 3*"b--",  1: 3*"-b-",  2: 3*"--b" : #=0, solved=0
        P#3    :   0: 3*"r--",  1: 3*"-r-",  2: 3*"--r" : #=0, solved=0
        %> 

        ...


        Moves: 23
        r\c| 0 | 1 | 2 |
        ===+===+===+===+
         0 |ggg|yyy|bbb|
         1 |gg-|yy-|bbb|
         2 |rg-|ry-|rrr|
        ===+===+===+===+
        P#0    :   0: 1*"y--",  1: 0*"-y-",  2: 2*"--y" : #=6, solved=2
        P#1    :   0: 1*"g--",  1: 0*"-g-",  2: 2*"--g" : #=6, solved=2
        P#2    :   0: 1*"b--",  1: 1*"-b-",  2: 1*"--b" : #=6, solved=2
        P#3 -> :   0: 0*"r--",  1: 2*"-r-",  2: 2*"--r" : #=5, solved=2
        %> 0 2 2
        Ok: Set c/r/p 0/2/2
        --------------------------------
        Moves: 24
        r\c| 0 | 1 | 2 |
        ===+===+===+===+
         0 |ggg|yyy|bbb|
         1 |gg-|yy-|bbb|
         2 |rgr|ry-|rrr|
        ===+===+===+===+
        P#0 -> :   0: 1*"y--",  1: 0*"-y-",  2: 2*"--y" : #=6, solved=2
        P#1    :   0: 1*"g--",  1: 0*"-g-",  2: 2*"--g" : #=6, solved=2
        P#2    :   0: 1*"b--",  1: 1*"-b-",  2: 1*"--b" : #=6, solved=2
        P#3    :   0: 0*"r--",  1: 2*"-r-",  2: 1*"--r" : #=6, solved=2
        %> 1 1 2
        Ok: Set c/r/p 1/1/2
        --------------------------------