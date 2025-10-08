long long uu_cat::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    v3.version(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all out", 24);
    v8.override_usage(&v3, &v0);
    v3.about(&v8);
    memcpy(&v8, &v3, 700);
    v9 = 584115552392 | v6;
    v10 = v7;
    v3.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 4;
    v2 = *((int *)&v5);
    v3.action(&v0, 1);
    v0.value_hint(&v3);
    v3.arg(&v8, &v0);
    v8.new("show-all", 8);
    v0.short(&v8, 65);
    v8.long(&v0, "show-all", 8);
    v0.help(&v8, "equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and ", 18);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("number-nonblankeshow-endsnumbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempt", 15);
    v0.short(&v3, 98);
    v3.long(&v0, "number-nonblankeshow-endsnumbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempt", 15);
    v0.help(&v3, "number nonempty output lines, overrides -nequivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored):", 42);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("eshow-endsnumbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines,", 1);
    v0.short(&v8, 101);
    v8.help(&v0, "equivalent to -vEdisplay $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 17);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("show-endsnumbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, ", 9);
    v0.short(&v3, 69);
    v3.long(&v0, "show-endsnumbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, ", 9);
    v0.help(&v3, "display $ at end of each linenumber all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 29);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("numbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides", 6);
    v0.short(&v8, 110);
    v8.long(&v0, "numbersqueeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides", 6);
    v0.help(&v8, "number all output linessuppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 23);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("squeeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequ", 13);
    v0.short(&v3, 115);
    v3.long(&v0, "squeeze-blanktshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequ", 13);
    v0.help(&v3, "suppress repeated empty output linesequivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 36);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("tshow-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -v", 1);
    v0.short(&v8, 116);
    v8.help(&v0, "equivalent to -vTdisplay TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 17);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("show-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vE", 9);
    v0.short(&v3, 84);
    v3.long(&v0, "show-tabsignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vE", 9);
    v0.help(&v3, "display TAB characters at ^Iuse ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 28);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("show-nonprinting", 16);
    v0.short(&v8, 118);
    v8.long(&v0, "show-nonprinting", 16);
    v0.help(&v8, "use ^ and M- notation, except for LF (\\n) and TAB (\\t)(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 54);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("ignored-u(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Concatenate FILE(s), or standard input, to standard output\nWith no FILE, or when FILE is -, read standard input.equivalent to -vETnumber nonempty output lines, overrides -nequivalent to -vEdisplay $", 9);
    v0.short(&v3, 117);
    v3.help(&v0, "(ignored): \r\n$\n^M\t^I^?unknown filetype: ", 9);
    v0.action(&v3, 2);
    a0.arg(&v8, &v0);
    return a0;
}
