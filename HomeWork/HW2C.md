Write a program in Metric/main.cpp that reads pairs of metric distances (mm, cm, m, or km) from the standard input stream until there are no more values. For each pair, print if the first distance is larger than the second.


Example input:
10mm 14mm
14mm 10mm
12mm 12mm
1cm 10mm
12cm 99mm
12cm 200mm
1km 5677m
100000cm 1000m 


Expected output:
10mm is smaller than 14mm
14mm is larger than 10mm
12mm is the same as 12mm
1cm is the same as 10mm
12cm is larger than 99mm
12cm is smaller than 200mm
1km is smaller than 5677m
100000cm is the same as 1000m