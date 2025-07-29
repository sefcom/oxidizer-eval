long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, void* *a3, char *a4)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    void* v4;  // r13
    unsigned long v5;  // rbp
    unsigned int v6;  // edx
    unsigned int v7;  // r14d
    char v8;  // bl
    unsigned int v9;  // r14d
    unsigned long long v11;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if ((int)core::str::validations::next_code_point(&v1))
    {
        v0 = a0[3];
        v5 = a0[4];
        do
        {
            v9 = v7;
            if (v9 - 9 < 5 || v9 == 32 || v9 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v9))
            {
                *(a4) = 0;
            }
            else if (!(v8 & 1))
            {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v8 = 1;
            }
            if (v9 - 12 < 2)
            {
LABEL_4b09e0:
                v5 = ::0x4ac590::core::cmp::max_by(v4, v5);
                a0[4] = v5;
                v4 = 0;
                continue;
            }
            else if (v9 != 9)
            {
                if (v9 != 10)
                {
                    v4 += (v9 < 127 ? 32 <= v9 : (v9 <= 159 ? 0 : (int)unicode_width::tables::lookup_width(v9)));
                    continue;
                }
                goto LABEL_4b09e0;
            }
            else
            {
                v4 = (v4 & 18446744073709551608) + 8;
            }
            *(a3) = v4;
            v6 = v6;
        } while ((int)core::str::validations::next_code_point(&v1));
    }
    else
    {
        v5 = a0[4];
    }
    a0[0] = a0[0] + a2;
    v11 = ::0x4ac590::core::cmp::max_by(v4, v5);
    a0[4] = v11;
    return v11;
}
