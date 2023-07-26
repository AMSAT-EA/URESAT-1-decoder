
tlmrx32: main.c genesis_crc.c genesis_scrambler.c *.h
	cc -g  -o tlmrx32 *.c -fsanitize=address -fno-omit-frame-pointer -lm
clean:
	rm -f tlmrx32
