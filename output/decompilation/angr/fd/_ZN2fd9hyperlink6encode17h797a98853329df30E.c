long long fd::hyperlink::encode(unsigned long long a0[2], char a1)
{
    unsigned long long v0;  // [bp-0x168]
    char v1;  // [bp-0x41]
    char *v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    unsigned int v11;  // esi
    unsigned long v12;  // rax

    v1 = a1;
    v11 = v1;
    if (v1 - 48 < 10 || (v1 & 223) - 65 <= 25)
        return (unsigned long long)a0.write_char();
    v12 = v11 - 45;
    if ((unsigned int)v12 <= 50)
    {
        v0 = 1125899906850823;
        if (!(*((char *)&v0 + ((v12 & 63) >> 3)) >> ((char)v12 & 63 & 7) & 1))
            goto LABEL_5f66ef;
    }
    else
    {
LABEL_5f66ef:
        if (v11 != 126)
        {
            v2 = &v1;
            v3 = core::fmt::num::<impl core::fmt::UpperHex for i8>::fmt;
            v4 = &g_8024e0;
            v5 = 1;
            v8 = &g_47b3b8;
            v9 = 1;
            v6 = &v2;
            v7 = 1;
            return a0[0].write_fmt(a0[1], &v4);
        }
    }
    return (unsigned long long)a0.write_char();
}
