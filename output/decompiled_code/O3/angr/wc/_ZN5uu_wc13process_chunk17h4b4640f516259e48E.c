long long uu_wc::process_chunk::h4b4640f516259e48(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    void* v3;  // r12
    unsigned long long v4;  // r13
    unsigned long long v5;  // r14
    unsigned long long v6;  // rdx
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax

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
        v5 = a0[1] + 1;
        do
        {
            if ((unsigned int)(v6 - 12) < 2)
            {
LABEL_4ba550:
                v4 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v3, v4);
                a0[4] = v4;
                v3 = 0;
            }
            else
            {
                if ((unsigned int)v6 == 9)
                {
                    v3 = (v3 & -8) + 8;
                    continue;
                }
                if ((unsigned int)v6 == 10)
                    goto LABEL_4ba550;
                v3 += ((unsigned int)v6 < 127 ? -0x100 | 32 <= (unsigned int)v6 : ((unsigned int)v6 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v6 & 4294967295)));
            }
        } while ((*(a3) = (unsigned long long)v3, a0[1] = v5, v5 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0)));
    }
    a0[0] = a0[0] + a2;
    v9 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v8, v4);
    a0[4] = v9;
    return v9;
}
