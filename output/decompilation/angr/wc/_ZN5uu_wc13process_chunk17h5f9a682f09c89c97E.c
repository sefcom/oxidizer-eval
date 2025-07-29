long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, void* *a3, char *a4)
{
    unsigned int v0;  // [bp-0x64]
    unsigned long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    void* v5;  // r13, Other Possible Types: unsigned long long
    unsigned long v6;  // rbp
    unsigned long long v7;  // r15
    unsigned long v8;  // r12
    unsigned int v9;  // edx
    unsigned int v10;  // r14d
    unsigned int v11;  // r14d
    unsigned long long v13;  // rax

    v2 = a1;
    v3 = a1 + a2;
    v0 = *(a4);
    v5 = *(a3);
    if ((int)core::str::validations::next_code_point(&v2))
    {
        v1 = a0[3];
        v6 = a0[4];
        v7 = a0[2];
        v8 = a0[1] + 1;
        do
        {
            v11 = v10;
            if (v11 - 9 < 5 || v11 == 32 || v11 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v11))
            {
                *(a4) = 0;
                v0 = 0;
            }
            else if (!((char)v0 & 1))
            {
                *(a4) = 1;
                v1 += 1;
                a0[3] = v1;
                v0 = (unsigned int)v1 & 0xffffff00 | 1;
            }
            if (v11 - 12 >= 2)
            {
                if (v11 == 9)
                {
                    v5 = (v5 & 18446744073709551608) + 8;
                    *(a3) = v5;
                    continue;
                }
                if (v11 == 10)
                    goto LABEL_4b0d8a;
                v5 += (v11 < 127 ? 32 <= v11 : (v11 <= 159 ? 0 : (int)unicode_width::tables::lookup_width(v11)));
                *(a3) = v5;
                if (!(v11 == 10))
                    continue;
LABEL_4b0e44:
                v7 += 1;
                a0[2] = v7;
            }
            else
            {
LABEL_4b0d8a:
                v6 = ::0x4ac590::core::cmp::max_by(v5, v6);
                a0[4] = v6;
                v5 = 0;
                *(a3) = 0;
                if (!(v11 == 10))
                    continue;
                goto LABEL_4b0e44;
            }
            a0[1] = v8;
            v8 += 1;
            v10 = v9;
        } while ((int)core::str::validations::next_code_point(&v2));
    }
    else
    {
        v6 = a0[4];
    }
    a0[0] = a0[0] + a2;
    v13 = ::0x4ac590::core::cmp::max_by(v5, v6);
    a0[4] = v13;
    return v13;
}
