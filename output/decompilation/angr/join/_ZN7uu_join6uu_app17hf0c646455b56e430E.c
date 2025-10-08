long long uu_join::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab8]
    unsigned int v1;  // [bp-0x840]
    unsigned int v2;  // [bp-0x83c]
    char v3;  // [bp-0x838]
    unsigned int v4;  // [bp-0x5c0]
    unsigned int v5;  // [bp-0x5bc]
    unsigned long v6;  // [bp-0x57c]
    unsigned int v7;  // [bp-0x574]
    char v8;  // [bp-0x570]
    unsigned int v9;  // [bp-0x2f8]
    char v10;  // [bp-0x2f4]
    unsigned long long v11;  // [bp-0x2b4]
    unsigned int v12;  // [bp-0x2ac]
    unsigned long long v13;  // [bp-0x2a8]
    unsigned long long v14;  // [bp-0x2a0]
    unsigned long long v15;  // [bp-0x298]
    unsigned long long v16;  // [bp-0x290]
    unsigned int v17;  // [bp-0x30]
    unsigned int v18;  // [bp-0x2c]
    unsigned long long v21;  // rdx

    v8.new(uucore::util_name(), v21);
    v3.version(&v8);
    v8.about(&v3);
    uucore::format_usage(&v0, "{} [OPTION]... FILE1 FILE2FILENUMalso print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2like -a FILENUM, but suppress joined output linesEMPTYreplace missing input fields with EMPTYignore-caseignore differenc", 26);
    v3.override_usage(&v8, &v0);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    v3.new("aj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, ", 1);
    v0.short(&v3, 97);
    v3.action(&v0, 1);
    v0.num_args(&v3);
    v13 = "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, re";
    v14 = 1;
    v15 = "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, rea";
    v16 = 1;
    v3.value_parser(&v0, &v13);
    v0.value_name(&v3, "FILENUMalso print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2like -a FILENUM, but suppress joined output linesEMPTYreplace missing input fields with EMPTYignore-caseignore differences in case when comparing ", 7);
    v13.help(&v0, "also print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2like -a FILENUM, but suppress joined output linesEMPTYreplace missing input fields with EMPTYignore-caseignore differences in case when comparing fieldsF", 103);
    v3.arg(&v8, &v13);
    v8.new("vaj12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`,", 1);
    v0.short(&v8, 118);
    v8.action(&v0, 1);
    v0.num_args(&v8);
    v13 = "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, re";
    v14 = 1;
    v15 = "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, rea";
    v16 = 1;
    v8.value_parser(&v0, &v13);
    v0.value_name(&v8, "FILENUMalso print unpairable lines from file FILENUM, where\nFILENUM is 1 or 2, corresponding to FILE1 or FILE2like -a FILENUM, but suppress joined output linesEMPTYreplace missing input fields with EMPTYignore-caseignore differences in case when comparing ", 7);
    v13.help(&v0, "like -a FILENUM, but suppress joined output linesEMPTYreplace missing input fields with EMPTYignore-caseignore differences in case when comparing fieldsFIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input ", 49);
    v8.arg(&v3, &v13);
    v3.new("enocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read st", 1);
    v0.short(&v3, 101);
    v3.value_name(&v0, "EMPTYreplace missing input fields with EMPTYignore-caseignore differences in case when comparing fieldsFIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of f", 5);
    v0.help(&v3, "replace missing input fields with EMPTYignore-caseignore differences in case when comparing fieldsFIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1", 39);
    v3.arg(&v8, &v0);
    v8.new("itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read", 1);
    v0.short(&v8, 105);
    v8.long(&v0, "ignore-caseignore differences in case when comparing fieldsFIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that ", 11);
    v0.help(&v8, "ignore differences in case when comparing fieldsFIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input i", 48);
    v13.action(&v0, 2);
    v8.arg(&v3, &v13);
    v3.new("j12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, r", 1);
    v0.short(&v3, 106);
    v3.value_name(&v0, "FIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are ", 5);
    v0.help(&v3, "equivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are paira", 33);
    v3.arg(&v8, &v0);
    v8.new("oenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read s", 1);
    v0.short(&v8, 111);
    v8.value_name(&v0, "FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is", 6);
    v0.help(&v8, "obey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is corre", 42);
    v8.arg(&v3, &v0);
    v3.new("toenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read ", 1);
    v0.short(&v3, 116);
    v3.value_name(&v0, "CHARZero", 4);
    v13 = 2;
    v0.value_parser(&v3, &v13);
    v13.help(&v0, "use CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sortedtreat the first line in each fi", 44);
    v3.arg(&v8, &v13);
    v8.new("12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, re", 1);
    v0.short(&v8, 49);
    v8.value_name(&v0, "FIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are ", 5);
    v0.help(&v8, "join on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sortedtreat the first line in each file as field headers, print them without tryi", 28);
    v8.arg(&v3, &v0);
    v3.new("2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, rea", 1);
    v0.short(&v3, 50);
    v3.value_name(&v0, "FIELDequivalent to '-1 FIELD -2 FIELD'FORMATobey FORMAT while constructing output lineuse CHAR as input and output field separatorjoin on this FIELD of file 1join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are ", 5);
    v0.help(&v3, "join on this FIELD of file 2check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sortedtreat the first line in each file as field headers, print them without trying to pair themzero-terminat", 28);
    v3.arg(&v8, &v0);
    v8.new("check-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{", 11);
    v0.long(&v8, "check-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{", 11);
    v8.help(&v0, "check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sortedtreat the first line in each file as field headers, print them without trying to pair themzero-terminatedline delimiter is NUL, not", 78);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("nocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read sta", 13);
    v0.long(&v3, "nocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read sta", 13);
    v3.help(&v0, "do not check that the input is correctly sortedtreat the first line in each file as field headers, print them without trying to pair themzero-terminatedline delimiter is NUL, not newlinefile1FILE1file2FILE2incompatible join fields , invalid field number: i", 47);
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    v8.new("headerz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION].", 6);
    v0.long(&v8, "headerz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION].", 6);
    v8.help(&v0, "treat the first line in each file as field headers, print them without trying to pair themzero-terminatedline delimiter is NUL, not newlinefile1FILE1file2FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 90);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("z(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, read standard input.{} [OPTION]... FIL", 1);
    v0.short(&v3, 122);
    v3.long(&v0, "zero-terminatedline delimiter is NUL, not newlinefile1FILE1file2FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 15);
    v0.help(&v3, "line delimiter is NUL, not newlinefile1FILE1file2FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 34);
    v13.action(&v0, 2);
    v3.arg(&v8, &v13);
    v8.new("file1FILE1file2FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 5);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 1;
    v2 = *((int *)&v10);
    v8.value_name(&v0, "FILE1file2FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 5);
    v0.value_hint(&v8);
    memcpy(&v13, &v0, 632);
    v17 = v1 | 4;
    v18 = v2;
    v8.arg(&v3, &v13);
    v3.new("file2FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 5);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = v5;
    v3.value_name(&v0, "FILE2incompatible join fields , invalid field number: invalid file number: io error: ", 5);
    v0.value_hint(&v3);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 4;
    v5 = v2;
    a0.arg(&v8, &v3);
    return a0;
}
