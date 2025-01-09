long long uu_wc::process_chunk::h2524f594f70d5b17(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    void* v3;  // r12
    unsigned long long v4;  // rbp
    unsigned long long v5;  // r13
    unsigned int v7;  // r14d
    unsigned int v9;  // r14d
    unsigned long long v11;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0))
    {
        v5 = a0[4];
    }
    else
    {
        v4 = a0[2];
        v5 = a0[4];
        do
        {
            v7 = v9;
            if (v7 - 12 < 2)
            {
LABEL_4ba2d1:
                v5 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v5);
                a0[4] = v5;
                v3 = 0;
                goto LABEL_4ba311;
            }
            else
            {
                if (v7 == 9)
                {
                    v3 = (v3 & -8) + 8;
                    *(a3) = v3;
                    continue;
                }
                if (v7 == 10)
                    goto LABEL_4ba2d1;
                v3 += (v7 < 127 ? -0x100 | 32 <= v7 : (v7 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v7)));
LABEL_4ba311:
                *(a3) = v3;
                if (v7 == 10)
                {
                    v4 += 1;
                    a0[2] = v4;
                }
            }
        } while ((int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0));
    }
    a0[0] = a0[0] + a2;
    v11 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v5);
    a0[4] = v11;
    return v11;
}
