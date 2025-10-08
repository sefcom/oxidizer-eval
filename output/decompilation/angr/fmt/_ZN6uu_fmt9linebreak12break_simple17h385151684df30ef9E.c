long long uu_fmt::linebreak::break_simple(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18], Other Possible Types: unsigned long
    char v3;  // [bp-0x10]
    unsigned long long v5[3];  // rdi
    unsigned long long v6;  // rax

    v0 = a0;
    v1 = a1;
    v2.try_fold(&v0, a2->field_20, a2);
    if (v3 == 2)
        return v2;
    v5 = a2->field_18;
    v6 = v5[2];
    if (v5[0] - v6 <= 1)
        return v5.write_all_cold("\n   Found NoFormatLine when expecting FormatLinesrc/uu/fmt/src/parasplit.rsFound FormatLine when expecting NoFormatLine", 1);
    *((char *)(v5[1] + v6)) = 10;
    v5[2] = v6 + 1;
    return 0;
}
