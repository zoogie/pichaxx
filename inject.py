import sys

def inject(dest, source, offset):
	with open(source,"rb") as f:
		buff=f.read()
	with open(dest,"rb+") as f:
		f.seek(offset)
		f.write(buff)
	print("* %s injected to %s at offset 0x%08X" % (source,dest,offset))
	
inject("all.dat", "exploit.bin", 0x1010)
inject("all.dat", "3ds_ropkit/payload.bin", 0x1100)