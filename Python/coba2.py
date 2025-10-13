#Input Nilai Tugas, UTS dan UAS

tugas = float(input("Input nilai tugas :"))
uts = float(input("Input nilai uts :"))
uas = float(input("Input nilai uas :"))

#Menghitung Nilai Akhir Sesuai dengan Bobot

nilai = (0.15 * tugas) + (0.35*uts) + (0.50 * uas)

#Menentukan Grade Berdasarkan Nilai Akhir

if nilai >85:
    grade = 'A'
elif nilai >75:
    grade = 'B'
elif nilai >60:
    grade = 'C'
elif nilai >50:
    grade = 'D'
else:
    grade = 'E'

#Menentukan Status Kelulusan Berdasarkan Nilai Akhir

if nilai >75:
    status = 'Memenuhi Syarat'
else:
    status = 'Belum Memenuhi Syarat'

#Menampilkan Nilai Akhir, Grade dan Status Kelulusan

print('Nilai Akhir : %0.2f' %nilai)
print('Grade :{}' .format(grade))
print('Status:{}' .format(status))