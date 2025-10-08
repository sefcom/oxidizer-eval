long long uu_fmt::linebreak::write_newline(void* a0, unsigned long a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long v4;  // r12
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a2[2];
    if (a2[0] - v3 > 1)
    {
        *((char *)(a2[1] + v3)) = 10;
        v4 = v3 + 1;
        a2[2] = v4;
        if (a1 >= a2[0] - v4)
            return a2.write_all_cold(a0, a1);
    }
    else
    {
        v5 = a2.write_all_cold("\n   Found NoFormatLine when expecting FormatLinesrc/uu/fmt/src/parasplit.rsFound FormatLine when expecting NoFormatLine", 1);
        if (v5)
            return v5;
        v4 = a2[2];
        if (a1 >= a2[0] - v4)
            return a2.write_all_cold(a0, a1);
    }
    memcpy(a2[1] + v4, a0, a1);
    a2[2] = v4 + a1;
    return 0;
}
