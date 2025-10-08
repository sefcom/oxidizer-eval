long long uu_fmt::parasplit::WordSplit::analyze_tabs(unsigned long long a0[5], struct_0 *a1, unsigned long long a2, unsigned long a3)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    unsigned long long v5;  // rbp
    void* v6;  // r15
    unsigned long long v7;  // rax
    unsigned int v8;  // edx
    unsigned int v9;  // edx
    unsigned int v10;  // edx
    unsigned long long v11;  // rcx

    v1 = a2;
    v2 = a3 + a2;
    v3 = 0;
    v5 = 0;
    while (true)
    {
LABEL_4638b1:
        v6 = 0;
        v7 = v1.next();
        if (v8 != 32)
            goto LABEL_4638e5;
        while (true)
        {
            v6 += 1;
            v7 = v1.next();
            if (v8 == 32)
                continue;
            do
            {
LABEL_4638e5:
                v10 = v9;
                if (v10 == 0x110000)
                {
                    a0[0] = v5;
                    a0[1] = v0;
                    a0[2] = v6;
                    a0[3] = 0;
                    a0[4] = v7;
                    return v7;
                }
                if (v10 - 9 >= 5)
                {
                    if (v10 >= 128)
                    {
                        if (!(char)::0x45f200::core::unicode::unicode_data::white_space::lookup(v10))
                        {
                            a0[0] = v5;
                            a0[1] = v0;
                            a0[2] = v6;
                            a0[3] = 1;
                            a0[4] = v7;
                            return v7;
                        }
                        break;
                    }
                    else
                    {
                        a0[0] = v5;
                        a0[1] = v0;
                        a0[2] = v6;
                        a0[3] = 1;
                        a0[4] = v7;
                        return v7;
                    }
                }
                if (v10 != 9)
                    break;
                if (!v5)
                {
                    v5 = 1;
                    v0 = v6;
                    goto LABEL_4638b1;
                }
                v11 = a1->field_40;
                if (!v11)
                    core::panicking::panic_const::panic_const_div_by_zero(&g_4f05f8); /* do not return */
                v6 = v11 * ((!(v6 | v11) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v6) % (v11 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v6) / (v11 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v6) % v11) CONCAT (unsigned long long)((0 CONCAT v6) / v11)) + 1);
                v5 = 1;
                v7 = v1.next();
                v9 = v8;
            } while (v9 != 32);
        }
    }
}
