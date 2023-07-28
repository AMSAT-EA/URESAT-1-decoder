
uresat-byte-decoder: main.c genesis_crc.c genesis_scrambler.c *.h
	cc -g  -o uresat-byte-decoder *.c -fsanitize=address -fno-omit-frame-pointer -lm
clean:
	rm -f uresat-byte-decoder
