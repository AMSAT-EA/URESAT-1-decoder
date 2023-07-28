
uresat-decoder-linux-x86: main.c genesis_crc.c genesis_scrambler.c *.h
	cc -g  -o uresat-decoder-linux-x86 *.c -fsanitize=address -fno-omit-frame-pointer -lm
clean:
	rm -f uresat-decoder-linux-x86

