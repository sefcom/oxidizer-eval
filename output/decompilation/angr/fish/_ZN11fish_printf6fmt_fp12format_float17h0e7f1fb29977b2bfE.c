long long fish_printf::fmt_fp::format_float(unsigned short *a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long long a4, unsigned long a5, char a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0x1c8]
    char v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    unsigned short v8;  // [bp-0x60]
    char v9;  // [bp-0x5e]
    char v10;  // [bp-0x5d]
    char v11;  // [bp-0x5c]
    char v12;  // [bp-0x5b]
    char v13;  // [bp-0x5a]
    char v14;  // [bp-0x59]
    char v15;  // [bp-0x58]
    unsigned long long v16;  // rdi
    unsigned long long v17;  // r11
    char v18;  // dil
    unsigned long long v19;  // r13
    unsigned long v20;  // xmm0lq
    struct_0 *v21;  // rbx
    char v22;  // r15b
    unsigned long long v23;  // rax
    unsigned int v24;  // ecx
    unsigned int v25;  // ecx
    char v27;  // al

    v16 = 281474976710655 & a5;
    v17 = v16 >> 24;
    v18 = v16 >> 32;
    v19 = 1;
    if (v20 >= 0 && !(v18 & 1))
        v19 = (unsigned int)v17 & 1;
    if (!(a3 & 1))
        a4 = 6;
    v21 = a6;
    v5 = a1;
    v3 = a2;
    v4 = a4;
    v13 = a3;
    v8 = a5;
    v9 = (unsigned int)a5 >> 16;
    v10 = v17;
    v11 = v18;
    v12 = a5 >> 40;
    v6 = ".";
    v2 = v19;
    v14 = *((char *)(v21 + &g_9eaf60));
    v7 = a7;
    if ((v20 & 9223372036854775807) >= 0x7ff0000000000000)
        return fish_printf::fmt_fp::format_nonfinite(a0, &v1);
    v22 = a6 & 30;
    if ((a6 & 30) == 6)
        return (unsigned long long)fish_printf::fmt_fp::format_a(a0, &v1);
    v15.new(v22 == 10, a4 / 9 + 2);
    if (a4 > 2147483647)
    {
        *(a0) = 1025;
    }
    else
    {
        if (a6 <= 13)
        {
            v0 = 0x3300;
            if ((*((char *)&v0 + ((v21 & 255 & 31) >> 3)) >> ((char)v21 & 31 & 7) & 1))
            {
                v23 = v15.exponent();
                v24 = ((((unsigned int)a4 ^ (unsigned int)v23) & ((unsigned int)a4 ^ (unsigned int)((a4 & 4294967295) - v23))) < 0 ? ((char)((a4 & 4294967295) - (v23 & 4294967295) >> 31) ^ 1) + 2147483647 : (unsigned int)((a4 & 4294967295) - v23));
                v25 = v24;
                if (!!a4 && !v22 != 12)
                {
                    v25 = v24 - 1;
                    if ((char)_ccall(0, 27, (unsigned long long)(v24 - 1), 0, _ccall(17, (unsigned long long)((char)(char)(!a4) | (char)(char)(v22 != 12)), 0, 0)))
                        core::panicking::panic_const::panic_const_sub_overflow(&g_149a1e8); /* do not return */
                }
                a4 = v25;
            }
        }
        v15.round_to_fractional_digits(a4 & 4294967295);
        if (a6 > 13)
            core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_149a200); /* do not return */
        v0 = 0x300;
        if (!(*((char *)&v0 + ((v21 & 255 & 31) >> 3)) >> ((char)v21 & 31 & 7) & 1))
        {
            v0 = 0xc00;
            if (!(*((char *)&v0 + ((v21 & 255 & 31) >> 3)) >> ((char)v21 & 31 & 7) & 1))
            {
                v0 = 0x3000;
                if (!(*((char *)&v0 + ((v21 & 255 & 31) >> 3)) >> ((char)v21 & 31 & 7) & 1))
                    core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_149a200); /* do not return */
                fish_printf::fmt_fp::format_g(a0, &v15, &v1);
            }
            else
            {
LABEL_1259fc3:
                fish_printf::fmt_fp::format_e_f(a0, &v15, &v1, v27);
            }
        }
        else
        {
            v27 = 1;
            goto LABEL_1259fc3;
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<fish_printf::fmt_fp::decimal::Decimal>(&v15);
}
