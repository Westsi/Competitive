ECHO OFF
set folder=%1
set name=%2
md .\%folder%
copy template.cpp %folder%\%name%.cpp