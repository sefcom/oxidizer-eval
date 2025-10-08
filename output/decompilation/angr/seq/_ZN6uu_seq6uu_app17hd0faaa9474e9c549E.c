long long uu_seq::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    memcpy(&v3, &v8, 700);
    v6 = 549755814048 | v9;
    v7 = v10;
    v8.version(&v3);
    v3.about(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf sty", 81);
    v8.override_usage(&v3, &v0);
    v3.new("separatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero incre", 9);
    v0.short(&v3, 115);
    v3.long(&v0, "separatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero incre", 9);
    v0.help(&v3, "Separator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment valu", 36);
    v3.arg(&v8, &v0);
    v8.new("terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 10);
    v0.short(&v8, 116);
    v8.long(&v0, "terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 10);
    v0.help(&v8, "Terminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 37);
    v8.arg(&v3, &v0);
    v3.new("equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 11);
    v0.short(&v3, 119);
    v3.long(&v0, "equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 11);
    v0.help(&v3, "Equalize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 52);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("formatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 6);
    v0.short(&v8, 102);
    v8.long(&v0, "formatuse printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 6);
    v0.help(&v8, "use printf style floating-point FORMATnumberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 38);
    v8.arg(&v3, &v0);
    v3.new("numberssrc/uu/seq/src/seq.rs argument: invalid Zero increment value: ", 7);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 32;
    v2 = *((int *)&v5);
    v3.action(&v0, 1);
    v0.num_args(&v3, 1, 3);
    a0.arg(&v8, &v0);
    return a0;
}
