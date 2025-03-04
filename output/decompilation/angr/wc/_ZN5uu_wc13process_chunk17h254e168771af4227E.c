long long uu_wc::process_chunk::h254e168771af4227(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3, char *a4)
{
    unsigned int v0;  // [sp-0x64]
    unsigned long long v1;  // [sp-0x60]
    unsigned long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    void* v5;  // r13, Other Possible Types: unsigned long long
    unsigned int v6;  // edx
    unsigned int v7;  // r14d
    unsigned long long v8;  // rbp
    unsigned long long v9;  // r15
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v2 = a1;
    v3 = a1 + a2;
    v0 = *(a4);
    v5 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v2))
    {
        v8 = a0[4];
    }
    else
    {
        v7 = v6;
        v1 = a0[3];
        v8 = a0[4];
        v9 = a0[2];
        v10 = a0[1] + 1;
        do
        {
            if (v7 - 9 < 5 || v7 == 32 || v7 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))
            {
                *(a4) = 0;
                v0 = 0;
            }
            else if (!(char)v0)
            {
                *(a4) = 1;
                v1 += 1;
                a0[3] = v1;
                v0 = v1 & 0xffffffffffffff00 | 1;
            }
            if (v7 - 12 < 2)
            {
LABEL_4ba41a:
                v8 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v8);
                a0[4] = v8;
                v5 = 0;
                goto LABEL_4ba4ac;
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
                    goto LABEL_4ba41a;
                v11 = (v7 < 127 ? 32 <= v7 : (v7 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v7)));
                v5 += v11;
LABEL_4ba4ac:
                *(a3) = v5;
                if (v7 == 10)
                {
                    v9 += 1;
                    a0[2] = v9;
                }
            }
        } while ((a0[1] = v10, v7 = v6, v10 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v2)));
    }
    a0[0] = a0[0] + a2;
    v12 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v8);
    a0[4] = v12;
    return v12;
}
