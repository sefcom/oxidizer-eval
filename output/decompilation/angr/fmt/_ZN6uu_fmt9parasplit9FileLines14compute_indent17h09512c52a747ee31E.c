long long uu_fmt::parasplit::FileLines::compute_indent(void* a0[3], struct_0 *a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    void* v4;  // rax
    unsigned int v5;  // edx
    void* v6;  // r12
    void* v7;  // rbp
    unsigned int v8;  // edx
    unsigned long long v9;  // cc_ndep
    unsigned int v10;  // edx
    unsigned long v11;  // rcx

    v0 = a2;
    v1 = a3 + a2;
    v2 = 0;
    v4 = v0.next();
    if (v5 == 0x110000)
    {
        v6 = 0;
        v4 = 0;
        v7 = 0;
    }
    else
    {
        v7 = 0;
        v6 = 0;
        while (true)
        {
            v10 = v8;
            if (v4 == a4)
            {
                v7 = v6;
                if ((char)amd64g_calculate_condition(2, 8, v4, a4, v9))
                    goto LABEL_4a5359;
                goto LABEL_4a5320;
            }
            v7 = v7;
            if (!((char)amd64g_calculate_condition(2, 8, v4, a4, v9)))
            {
LABEL_4a5320:
                if (v10 - 10 < 4)
                    goto LABEL_4a5328;
                switch (vvar_48{reg 32}): 3 cases
                break;
            }
LABEL_4a5359:
            if (v10 != 9)
            {
LABEL_4a5328:
                v6 += uu_fmt::parasplit::char_width(v10);
                v4 = v0.next();
                v5 = v5;
                if (!(v8 == 0x110000))
                    continue;
                goto LABEL_4a53a1;
            }
            v11 = a1->field_40;
            if (!v11)
                core::panicking::panic_const::panic_const_div_by_zero(&g_583c10); /* do not return */
            v9 = amd64g_calculate_rflags_c(19, 0, 0, v9);
            v6 = v11 * ((!(v6 | v11) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v6) % (v11 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v6) / (v11 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v6) % v11) CONCAT (unsigned long long)((0 CONCAT v6) / v11)) + 1);
            v4 = v0.next();
            v5 = v5;
            if (v5 == 0x110000)
            {
LABEL_4a53a1:
                v4 = 0;
                break;
            }
        }
    }
    a0[0] = v4;
    a0[1] = v7;
    a0[2] = v6;
    return v4;
}
