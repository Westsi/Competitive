ECHO OFF
set folder=%1
set name=%2
md .\%folder%
g++ %folder%\%name%.cpp