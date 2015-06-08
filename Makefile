all:
	g++ -O3 example.cpp -o app
flush: all
	./app basic.css   > basic.css
	./app index.html  > index.html
