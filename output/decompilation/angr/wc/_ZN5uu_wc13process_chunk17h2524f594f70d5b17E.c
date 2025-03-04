long long uu_wc::process_chunk::h2524f594f70d5b17(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3)
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    void* v3;  // r12, Other Possible Types: unsigned long long
    unsigned int v4;  // edx
    unsigned int v5;  // r14d
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0))
    {
        v7 = a0[4];
    }
    else
    {
        v5 = v4;
        v6 = a0[2];
        v7 = a0[4];
        do
        {
            if (v5 - 12 < 2)
            {
LABEL_4ba2d1:
                v7 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v7);
                a0[4] = v7;
                v3 = 0;
                goto LABEL_4ba311;
            }
            else
            {
                if (v5 == 9)
                {
                    v3 = (v3 & 18446744073709551608) + 8;
                    *(a3) = v3;
                    continue;
                }
                if (v5 == 10)
                    goto LABEL_4ba2d1;
                v8 = (v5 < 127 ? 32 <= v5 : (v5 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v5)));
                v3 += v8;
LABEL_4ba311:
                *(a3) = v3;
                if (v5 == 10)
                {
                    v6 += 1;
                    a0[2] = v6;
                }
            }
        } while ((v5 = v4, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0)));
    }
    a0[0] = a0[0] + a2;
    v9 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v7);
    a0[4] = v9;
    return v9;
}
