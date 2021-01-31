PRODUCT := ./build

all: build_start build/Makefile 
	make -C ${PRODUCT} $@
	@date && echo "\n ***** BUILD END ***** \n"

clean:
	rm -rf ${PRODUCT}

build_start:
	@echo "\n ***** BUILD START ***** \n" && date

build/Makefile:
	mkdir -p ${PRODUCT} && cd ${PRODUCT} && cmake ..
