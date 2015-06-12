example1:
	g++ -O3 example1_simple.cpp
site: example1
	./a.out index.html > index.html
	./a.out reset.css > reset.css
	./a.out application.css > application.css
