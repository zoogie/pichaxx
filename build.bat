make clean && make
cd 3ds_ropkit && make clean && make && cd ..
cp all.dat.template all.dat
python inject.py
pause