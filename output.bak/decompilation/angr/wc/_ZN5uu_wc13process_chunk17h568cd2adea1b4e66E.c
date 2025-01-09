long long uu_wc::process_chunk::h568cd2adea1b4e66(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    void* v3;  // r12
    unsigned long long v4;  // r13
    unsigned long long v5;  // r15
    unsigned long long v6;  // rbp
    unsigned int v8;  // r14d
    unsigned int v10;  // r14d
    unsigned long long v12;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0))
    {
        v4 = a0[4];
    }
    else
    {
        v4 = a0[4];
        v5 = a0[2];
        v6 = a0[1] + 1;
        do
        {
            v8 = v10;
            if (v8 - 12 < 2)
            {
LABEL_4ba68d:
                v4 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v4);
                a0[4] = v4;
                v3 = 0;
                goto LABEL_4ba6cd;
            }
            else
            {
                if (v8 == 9)
                {
                    v3 = (v3 & -8) + 8;
                    *(a3) = v3;
                    continue;
                }
                if (v8 == 10)
                    goto LABEL_4ba68d;
                v3 += (v8 < 127 ? -0x100 | 32 <= v8 : (v8 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v8)));
LABEL_4ba6cd:
                *(a3) = v3;
                if (v8 == 10)
                {
                    v5 += 1;
                    a0[2] = v5;
                }
            }
        } while ((a0[1] = v6, v6 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0)));
    }
    a0[0] = a0[0] + a2;
    v12 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v4);
    a0[4] = v12;
    return v12;
}
