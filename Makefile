SOURCE ?= ./lvgl
DESTINATION ?= ./Sources/CLittlevGL

install:
	@test ! -f ./Sources/CLittlevGL/include/copymap.txt || (echo "already installed, run uninstall first" ; exit 1)
	rsync -mr --out-format="%n" --include="*/" --include="*.h" --exclude="*" lvgl/src/* Sources/CLittlevGL/include >> ./Sources/CLittlevGL/include/copymap.txt
	rsync -mr --out-format="%n" --include="*/" --include="*.c" --exclude="*" lvgl/src/* Sources/CLittlevGL >> ./Sources/CLittlevGL/copymap.txt


uninstall:
	@test -f $(COPYMAP) || (echo "not installed" ; exit 1)
	cd ./Sources/CLittlevGL/include && rm -rf `cat copymap.txt` && rm copymap.txt
	cd ./Sources/CLittlevGL && rm -rf `cat copymap.txt` && rm copymap.txt


.PHONY: install uninstall
