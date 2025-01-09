long long uu_wc::process_chunk::h8a12f5b76cf6167a(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3, char *a4)
{
    unsigned long long v0;  // [sp-0x60]
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // r15
    void* v5;  // r13
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r12
    unsigned int v9;  // r14d
    unsigned int v11;  // r14d
    unsigned long long v12;  // r13
    unsigned long long v14;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a4);
    v5 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1))
    {
        v6 = a0[4];
    }
    else
    {
        v0 = a0[3];
        v6 = a0[4];
        v7 = a0[1] + 1;
        do
        {
            v9 = v11;
            if (v9 - 9 < 5 || v9 == 32 || v9 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v9))
            {
                *(a4) = 0;
                v4 = 0;
            }
            else if (!(char)v4)
            {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v4 = v4 & 0xffffffffffffff00 | 1;
            }
            if (v9 - 12 < 2)
            {
LABEL_4ba8f0:
                v6 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v12, v6);
                a0[4] = v6;
                v5 = 0;
            }
            else
            {
                if (v9 == 9)
                {
                    v5 = (v12 & 18446744073709551608) + 8;
                    continue;
                }
                if (v9 == 10)
                    goto LABEL_4ba8f0;
                v5 = v12 + (v9 < 127 ? 32 <= v9 : (v9 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v9)));
            }
        } while ((*(a3) = (unsigned long long)v5, a0[1] = v7, v7 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1)));
    }
    a0[0] = a0[0] + a2;
    v14 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v6);
    a0[4] = v14;
    return v14;
}
