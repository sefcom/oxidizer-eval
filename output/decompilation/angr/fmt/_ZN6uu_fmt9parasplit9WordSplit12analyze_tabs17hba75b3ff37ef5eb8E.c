void uu_fmt::parasplit::WordSplit::analyze_tabs(unsigned long long a0[5], struct_0 *a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // rbp
    unsigned long long v5;  // r13
    unsigned long long v6;  // r13
    void* v7;  // r15
    unsigned long long v8;  // rax
    unsigned int v9;  // edx
    unsigned long v10;  // rcx

    v0 = a2;
    v1 = a3 + a2;
    v2 = 0;
    v4 = 0;
    while (true)
    {
        v6 = v5;
        v7 = 0;
        while (true)
        {
            while (true)
            {
                v8 = v0.next();
                if (v9 - 10 >= 4)
                    break;
                v7 += 1;
            }
            if (v9 == 32)
            {
                v7 += 1;
            }
            else
            {
                if (v9 != 9)
                {
                    a0[0] = v4;
                    a0[1] = v6;
                    a0[2] = v7;
                    *((int *)&a0[3]) = (v9 == 0x110000 ? 0 : 1);
                    a0[4] = v8;
                    return;
                }
                if (v4)
                {
                    v10 = a1->field_40;
                    if (!v10)
                        core::panicking::panic_const::panic_const_div_by_zero(&g_583da8); /* do not return */
                    v7 = v10 * ((!(v7 | v10) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v7) % (v10 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v7) / (v10 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v7) % v10) CONCAT (unsigned long long)((0 CONCAT v7) / v10)) + 1);
                    v4 = 1;
                }
                else
                {
                    v4 = 1;
                    v5 = v7;
                    break;
                }
            }
        }
    }
}
