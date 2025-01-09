long long uu_wc::process_chunk::h254e168771af4227(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3, char *a4)
{
    unsigned int v0;  // [sp-0x64]
    unsigned long long v1;  // [sp-0x60]
    unsigned long v2;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x38]
    void* v5;  // r13
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r15
    unsigned long long v8;  // r12
    unsigned int v10;  // r14d
    unsigned int v12;  // r14d
    unsigned long long v14;  // rax

    v2 = a1;
    v3 = a1 + a2;
    v0 = *(a4);
    v5 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v2))
    {
        v6 = a0[4];
    }
    else
    {
        v1 = a0[3];
        v6 = a0[4];
        v7 = a0[2];
        v8 = a0[1] + 1;
        do
        {
            v10 = v12;
            if (v10 - 9 < 5 || v10 == 32 || v10 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v10))
            {
                *(a4) = 0;
                v0 = 0;
            }
            else if (!(char)v0)
            {
                *(a4) = 1;
                v1 += 1;
                a0[3] = v1;
                v0 = v1 | -0x100 | 1;
            }
            if (v10 - 12 < 2)
            {
LABEL_4ba41a:
                v6 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v6);
                a0[4] = v6;
                v5 = 0;
                goto LABEL_4ba4ac;
            }
            else
            {
                if (v10 == 9)
                {
                    v5 = (v5 & -8) + 8;
                    *(a3) = v5;
                    continue;
                }
                if (v10 == 10)
                    goto LABEL_4ba41a;
                v5 += (v10 < 127 ? -0x100 | 32 <= v10 : (v10 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(v10)));
LABEL_4ba4ac:
                *(a3) = v5;
                if (v10 == 10)
                {
                    v7 += 1;
                    a0[2] = v7;
                }
            }
        } while ((a0[1] = v8, v8 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v2)));
    }
    a0[0] = a0[0] + a2;
    v14 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(v5, v6);
    a0[4] = v14;
    return v14;
}
