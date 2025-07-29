long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, void* *a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v3;  // r12, Other Possible Types: unsigned long long
    unsigned long v4;  // r13
    unsigned long long v5;  // r15
    unsigned long v6;  // rbp
    unsigned int v8;  // r14d
    unsigned int v9;  // r14d
    unsigned long long v11;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if ((int)core::str::validations::next_code_point(&v0))
    {
        v4 = a0[4];
        v5 = a0[2];
        v6 = a0[1] + 1;
        do
        {
            v9 = v8;
            if (v9 - 12 >= 2)
            {
                if (v9 == 9)
                {
                    v3 = (v3 & 18446744073709551608) + 8;
                    *(a3) = v3;
                    continue;
                }
                if (v9 == 10)
                    goto LABEL_4b12c1;
                v3 += (v9 < 127 ? 32 <= v9 : (v9 <= 159 ? 0 : (int)unicode_width::tables::lookup_width(v9)));
                *(a3) = v3;
                if (!(v9 == 10))
                    continue;
LABEL_4b1324:
                v5 += 1;
                a0[2] = v5;
            }
            else
            {
LABEL_4b12c1:
                v4 = ::0x4ac590::core::cmp::max_by(v3, v4);
                a0[4] = v4;
                v3 = 0;
                *(a3) = 0;
                if (!(v9 == 10))
                    continue;
                goto LABEL_4b1324;
            }
            a0[1] = v6;
            v6 += 1;
        } while ((int)core::str::validations::next_code_point(&v0));
    }
    else
    {
        v4 = a0[4];
    }
    a0[0] = a0[0] + a2;
    v11 = ::0x4ac590::core::cmp::max_by(v3, v4);
    a0[4] = v11;
    return v11;
}
