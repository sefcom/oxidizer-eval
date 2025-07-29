long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, void* *a3, char *a4)
{
    unsigned long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    void* v4;  // r13, Other Possible Types: unsigned long long
    unsigned long v5;  // rbp
    unsigned long v6;  // r12
    unsigned int v8;  // r14d
    char v9;  // r15b
    unsigned int v10;  // r14d
    unsigned long long v12;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if ((int)core::str::validations::next_code_point(&v1))
    {
        v0 = a0[3];
        v5 = a0[4];
        v6 = a0[1] + 1;
        do
        {
            v10 = v8;
            if (v10 - 9 < 5 || v10 == 32 || v10 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v10))
            {
                *(a4) = 0;
            }
            else if (!(v9 & 1))
            {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v9 = 1;
            }
            if (v10 - 12 < 2)
            {
LABEL_4b13c0:
                v5 = ::0x4ac590::core::cmp::max_by(v4, v5);
                a0[4] = v5;
                v4 = 0;
                continue;
            }
            else if (v10 != 9)
            {
                if (v10 != 10)
                {
                    v4 += (v10 < 127 ? 32 <= v10 : (v10 <= 159 ? 0 : (int)unicode_width::tables::lookup_width(v10)));
                    continue;
                }
                goto LABEL_4b13c0;
            }
            else
            {
                v4 = (v4 & 18446744073709551608) + 8;
            }
            *(a3) = v4;
            a0[1] = v6;
            v6 += 1;
        } while ((int)core::str::validations::next_code_point(&v1));
    }
    else
    {
        v5 = a0[4];
    }
    a0[0] = a0[0] + a2;
    v12 = ::0x4ac590::core::cmp::max_by(v4, v5);
    a0[4] = v12;
    return v12;
}
