HAXNAME := exploit

all:	exploit.bin

clean:
	rm -f $(HAXNAME).elf exploit.bin

exploit.bin: $(HAXNAME).elf
	arm-none-eabi-objcopy -O binary $(HAXNAME).elf exploit.bin

$(HAXNAME).elf:	$(HAXNAME).s
	arm-none-eabi-gcc -x assembler-with-cpp -nostartfiles -nostdlib -Ttext=0x0fffff1c $< -o $(HAXNAME).elf

