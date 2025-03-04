long long uu_wc::process_chunk::h9cb4cf76d2be1553(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3, char *a4)
{
    unsigned long long v0;  // [sp-0x60]
    unsigned long v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // r15
    void* v5;  // r13, Other Possible Types: unsigned long long
    unsigned int v6;  // edx
    unsigned int v7;  // r14d
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a4);
    v5 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1))
    {
        v9 = a0[4];
    }
    else
    {
        v7 = v6;
        v8 = a0[2];
        v0 = a0[3];
        v9 = a0[4];
        do
        {
            if (v7 - 9 < 5 || v7 == 32 || v7 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))
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
            if (v7 - 12 < 2)
            {
LABEL_4baabe:
                v9 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v9);
                a0[4] = v9;
                v5 = 0;
                goto LABEL_4bab47;
            }
            else
            {
                if (v7 == 9)
                {
                    v5 = (v5 & 18446744073709551608) + 8;
                    *(a3) = v5;
                    continue;
                }
                if (v7 == 10)
                    goto LABEL_4baabe;
                v10 = (v7 < 127 ? 32 <= v7 : (v7 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v7)));
                v5 += v10;
LABEL_4bab47:
                *(a3) = v5;
                if (v7 == 10)
                {
                    v8 += 1;
                    a0[2] = v8;
                }
            }
        } while ((v7 = v6, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1)));
    }
    a0[0] = a0[0] + a2;
    v11 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v9);
    a0[4] = v11;
    return v11;
}
