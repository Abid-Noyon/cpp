# cpp

c and c++ programming
you need a IDE
and compiler

IDE most popular 
microsoft visual studio code 

Compilers
Most popular for windows
GCC
MSVC 
clang

you can also seach on google c++ compiler support to see which compiler support which core feature
Installing GCC
Google WinLips
download latest release
here you will see GCC+Clang compiler together Clang is from Apple
1. extract the zip file and copy or move it to your c drive
2. open the folder and copy to bin file path and paste on your windows environment variable
3. to do this click on windows icon and seach env and open that
4. click on environment variables
5. under system variable click on path and click on edit
6. click on new and paste this king of path likw: C:\mingw64\bin 
7. click ok
8. reset the machine
9. to check if it works open cmd and type g++ --verison  then you will see g++ version and it works
10. or also type clang++ --version in cmd to see clang version

to install MSVC compiler 
1. google search microsoft visul studio 
2. download comunity version it is free
3. install it and check what option you need must check mark on desktop development environment to install MSVC
4. it will take about 20 minute after install has done
5. click on windows button and seach for developer command promt for VS 2022
6. type cl.exe too see if MSVC properly installed or not
7. if show error install again

now downlown An IDE
I prefer visual stude code 
google it and install it

open it and some steps
1. create a folder on your computer and right click and open with vs code
2. accecpt if any check mark and trust the folder if shows any promt
3. create a new file name is main.cpp
4. write a code like below to check if compiler ready to run c++20
5. #include <iostream>

int main(){
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}

6. then click on terminal and open new terminal
7. click on configure tasks 
8. it will create tasks.json file open it
8. rename level with the version of GCC
8. and add line under args like "-std=c++20",
9. click on run task on terminal it will create an exe file
10. open it with in terminal like type on terminal .\main.exe
11. if shows 0 then you are ok to write and compile c++ code


configure tasks.json like
"args": [
				"-fdiagnostics-color=always",
				"-g",
				"-std=c++20",
				"${file}",
				"${workspaceFolder}\\*.cpp",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],



dir shows directory
rm .\main.exe remove file

or also type
rm file name+ tab terminal will auto complete it

 

to run on other compiller configure tasks.json file previous way

#To compile with MSVC open msvs powershell typing developer powershell for vs
then change the directory to your projet file

then type code .    this will open vs code with mcsv compiler


then type cl.exe on vs code terminal and you will see microsoft c++ compiler version
then if you click on configure tasks from terminal menu you will see cl.exe compiler option
now change the tasks.json file level and arguement option
like

                        "/Zi",
				"/std:c++latest",
				"/EHsc",
				"/nologo",
				"/Fe:",
				"/Fe${fileDirname}\\${fileBasenameNoExtension}.exe",
				"${workspaceFolder}\\*.cpp"

"{fileDirname}\\any-name.exe", use to get a perticular name.exe

There is a problem with mcsv compiler so do not change the argument file keep is as it is
just add this line "/std:c++latest", to use the lastest c++


