void fish_printf::fmt_fp::format_g(char *a0, unsigned long long a1, struct_0 *a2)
{
    char *v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long v3;  // r12
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbp
    unsigned long v6;  // rax
    unsigned long v7;  // r12
    unsigned long v8;  // r12
    char v9;  // r15b
    unsigned int v10;  // edx
    unsigned long long v11;  // rdi
    unsigned long v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax

    v0 = v2;
    v3 = a2->field_18.max(1);
    a2->field_18 = v3;
    v4 = a1.exponent();
    v5 = v4 & 4294967295;
    v6 = ((unsigned int)-(v4 & 4294967295) < 0 ? v5 & 4294967295 : -((unsigned int)v4));
    if ((unsigned int)v5 < -0x4 || v3 <= v6 == 1 && !(char)((v5 & 4294967295) >> 31))
    {
        if (!v3)
            core::panicking::panic_const::panic_const_sub_overflow(&g_149a3c8); /* do not return */
        v8 = v3 - 1;
        v9 = 1;
        a2->field_18 = v8;
        if (!a2->field_38)
            goto LABEL_125b075;
    }
    else
    {
        v7 = v3 - 1;
        if (v3 < 1)
            core::panicking::panic_const::panic_const_sub_overflow(&g_149a380); /* do not return */
        a2->field_18 = v7;
        if ((unsigned int)v5 >= 0)
        {
            v8 = v7 - v6;
            if (v7 < v6)
                core::option::unwrap_failed(&g_149a398); /* do not return */
        }
        else
        {
            v8 = v7 + v6;
            if ((char)__CFADD__(v7, v6))
                core::option::unwrap_failed(&g_149a3b0); /* do not return */
        }
        a2->field_18 = v8;
        if (!a2->field_38)
        {
LABEL_125b075:
            v0 = a0;
            v11 = (((char)a1.last() & 1) ? v10 : 0);
            v12 = (unsigned int)fish_printf::fmt_fp::trailing_decimal_zeros(v11);
            v13 = a1.fractional_digit_count();
            v14 = v13 - v12;
            if ((((unsigned int)v13 ^ (unsigned int)v12) & ((unsigned int)v13 ^ (unsigned int)((v13 & 4294967295) - v12))) < 0)
                core::panicking::panic_const::panic_const_sub_overflow(&g_149a3e0); /* do not return */
            if (v9)
            {
                a0 = v0;
                v16 = v14 + v5;
                if (((unsigned int)~(v14 & 4294967295 ^ v5 & 4294967295) & ((unsigned int)v14 ^ (unsigned int)v14 + (unsigned int)v5)) < 0)
                    core::panicking::panic_const::panic_const_add_overflow(&g_149a3f8); /* do not return */
            }
            else
            {
                a0 = v0;
                v16 = v14;
            }
            a2->field_18 = v8.min((unsigned int)v16 & 4294967295.max(0));
        }
    }
    fish_printf::fmt_fp::format_e_f(a0, a1, a2, v9);
    return;
}
