In the file named “CharIncreasing/main.cpp” you need to write a program that reads from standard input and outputs the characters whose ASCII values are strictly larger than the character before it. The one exception to this rule is the newline character and the first character of each line must always be outputted. Characters that are equal or less than their predecessor should be replaced with an underscore character (_) in the output.
All Characters
All characters (other than newline) should be accounted for, this includes whitespace and symbols.
Example input:
abcdcba 124673257
Here is a sentence with "Symbols" and   tabs and other [stuff]();:!
Random letters: fdashjflavboibrviwb476926734109fdasfa
Expected output:
abcd____12467__57
Her__is_a_s_nt_n_e_w_t__"Sy__o_s__an___t_bs_an__ot__r_[stu____);__
Ran_o__l_t__rs__f__s_j_l_v_o__rv_w__7_9_67_4__9f__s__