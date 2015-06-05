all:
	g++ -O3 burst.cpp -o burst
flush: all
	burst reset.css   > reset.css
	burst index.html  > index.html
