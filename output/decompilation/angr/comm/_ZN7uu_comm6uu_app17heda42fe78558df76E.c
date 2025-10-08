long long uu_comm::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    char v2;  // [bp-0x834]
    unsigned long long v3;  // [bp-0x7f4]
    unsigned int v4;  // [bp-0x7ec]
    char v5;  // [bp-0x7e8]
    unsigned int v6;  // [bp-0x570]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned int v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2ec]
    unsigned long v11;  // [bp-0x2ac]
    unsigned int v12;  // [bp-0x2a4]
    char v13;  // [bp-0x2a0]
    unsigned long long v16;  // rdx

    v0.new(uucore::util_name(), v16);
    v8.version(&v0);
    v0.about(&v8);
    uucore::format_usage(&v5, "{} [OPTION]... FILE1 FILE2suppress column 1 (lines unique to FILE1)suppress column 2 (lines unique to FILE2)suppress column 3 (lines that appear in both files)separate columns with STRSTR\tline delimiter is NUL, not newlinecheck that the input is correctly ", 26);
    v8.override_usage(&v0, &v5);
    memcpy(&v0, &v8, 700);
    v3 = 584115552392 | v11;
    v4 = v12;
    v8.new("12", 1);
    v5.short(&v8, 49);
    v8.help(&v5, "suppress column 1 (lines unique to FILE1)suppress column 2 (lines unique to FILE2)suppress column 3 (lines that appear in both files)separate columns with STRSTR\tline delimiter is NUL, not newlinecheck that the input is correctly sorted, even if all input ", 41);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("2", 1);
    v5.short(&v0, 50);
    v0.help(&v5, "suppress column 2 (lines unique to FILE2)suppress column 3 (lines that appear in both files)separate columns with STRSTR\tline delimiter is NUL, not newlinecheck that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sorted", 41);
    v5.action(&v0, 2);
    v0.arg(&v8, &v5);
    v8.new("3totalzero-terminated", 1);
    v5.short(&v8, 51);
    v8.help(&v5, "suppress column 3 (lines that appear in both files)separate columns with STRSTR\tline delimiter is NUL, not newlinecheck that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sorted", 51);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v5.long(&v0, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v0.help(&v5, "separate columns with STRSTR\tline delimiter is NUL, not newlinecheck that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sorted", 25);
    v5.value_name(&v0);
    v0.default_value(&v5);
    memcpy(&v5, &v0, 632);
    v6 = v1 | 32;
    v7 = *((int *)&v2);
    v0.action(&v5, 1);
    memcpy(&v5, &v0, 632);
    v6 = 0x400 | v1;
    v7 = *((int *)&v2);
    v0.arg(&v8, &v5);
    v8.new("zero-terminated", 15);
    v5.long(&v8, "zero-terminated", 15);
    v8.short(&v5, 122);
    v5.overrides_with(&v8);
    v8.help(&v5, "line delimiter is NUL, not newlinecheck that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sorted", 34);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("FILE1FILE23totalzero-terminated", 5);
    memcpy(&v5, &v0, 632);
    v6 = v1 | 1;
    v7 = *((int *)&v2);
    v13.value_hint(&v5);
    v0.arg(&v8, &v13);
    v8.new("FILE23totalzero-terminated", 5);
    memcpy(&v5, &v8, 632);
    v6 = v9 | 1;
    v7 = *((int *)&v10);
    v13.value_hint(&v5);
    v8.arg(&v0, &v13);
    v0.new("totalzero-terminated", 5);
    v5.long(&v0, "totalzero-terminated", 5);
    v0.help(&v5, "output a summaryentity not found", 16);
    v5.action(&v0, 2);
    v0.arg(&v8, &v5);
    v8.new("check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    v5.long(&v8, "check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    v8.help(&v5, "check that the input is correctly sorted, even if all input lines are pairabledo not check that the input is correctly sorted", 78);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("nocheck-orderFILE1FILE23totalzero-terminated", 13);
    v5.long(&v0, "nocheck-orderFILE1FILE23totalzero-terminated", 13);
    v0.help(&v5, "do not check that the input is correctly sorted", 47);
    v5.action(&v0, 2);
    v0.conflicts_with(&v5);
    a0.arg(&v8, &v0);
    return a0;
}
