@cls
@if exist *.o del *.o
@if exist *.prg del *.prg

@cl65 -Oi -t c64 test.c ..\src\C64MultiNetLib.c -o multilibtest.prg
