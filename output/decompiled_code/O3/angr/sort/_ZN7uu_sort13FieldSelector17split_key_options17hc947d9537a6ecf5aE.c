long long uu_sort::FieldSelector::split_key_options::hc947d9537a6ecf5a(unsigned long long a0[4], char a1[4], char a2[4])
{
    char v0[4];  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    char v4[4];  // r12
    char v5[4];  // 4096
    char v6[4];  // r12
    void* v7;  // r14
    char v8[4];  // 4096
    char v9[4];  // rbx
    unsigned long long v10;  // rdi
    char v11[4];  // r13
    unsigned int v12;  // eax
    unsigned int v13;  // edx
    unsigned int v14;  // ecx

    v0 = v2;
    v3 = 1;
    if (!a2)
    {
        v6 = 0;
        v7 = 0;
    }
    else
    {
        v4 = 0;
        *(&v0) = a1;
        do
        {
            v9 = v5;
            v10 = v9[0];
            if ((char)v10 >= 0)
            {
                v11 = &v9[1];
            }
            else
            {
                v12 = (unsigned int)v10 & 31;
                v13 = v9[1] & 63;
                if ((v10 & 255) <= 223)
                {
                    v11 = &v9[2];
                    v10 = v12 * 64 | v13;
                }
                else
                {
                    v14 = v9[2] & 63 | v13 * 64;
                    if ((v10 & 255) < 240)
                    {
                        v11 = &v9[3];
                        v10 = v14 | v12 * 0x1000;
                    }
                    else
                    {
                        v11 = v9 + 1;
                        v10 = v9[3] & 63 | v14 * 64 | (v12 & 7) * 0x40000;
                    }
                }
            }
            if (!(((unsigned int)v10 & -33) - 65 >= 26) || !((unsigned int)v10 < 128) && !(!(char)core::unicode::unicode_data::alphabetic::lookup::h1646d3e6d544f72b(v10)))
            {
                v8 = v0;
                if (v4)
                {
                    if (a2 <= v4)
                    {
                        if (a2 != v4)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                    else
                    {
                        if (*((char *)(v8 + v4)) <= 191)
                            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    }
                }
                v7 = a2 - v4;
                v3 = v8 + v4;
                a0[0] = v8;
                a0[1] = v6;
                a0[2] = v3;
                a0[3] = v7;
                return v3;
            }
            v4 = v4 - v9 + (char *)v11;
        } while (v11 != a1 + a2);
        v7 = 0;
        v3 = 1;
        *(&v8) = v0;
    }
    a0[0] = v8;
    a0[1] = v6;
    a0[2] = v3;
    a0[3] = v7;
    return v3;
}
