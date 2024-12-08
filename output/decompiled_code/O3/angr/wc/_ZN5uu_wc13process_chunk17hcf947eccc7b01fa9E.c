long long uu_wc::process_chunk::hcf947eccc7b01fa9(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3, char *a4)
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
    if (!(int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v1))
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
            if (v9 - 9 < 5 || v9 == 32 || v9 >= 128 && (char)::0x4b7f00::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v9))
            {
                *(a4) = 0;
                v4 = 0;
            }
            else if (!(char)v4)
            {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v4 = v4 | -0x100 | 1;
            }
            if (v9 - 12 < 2)
            {
LABEL_4bb0d0:
                v6 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(v12, v6);
                a0[4] = v6;
                v5 = 0;
            }
            else
            {
                if (v9 == 9)
                {
                    v5 = (v12 & -8) + 8;
                    continue;
                }
                if (v9 == 10)
                    goto LABEL_4bb0d0;
                v5 = v12 + (v9 < 127 ? -0x100 | 32 <= v9 : (v9 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::h3c1144d95491570b(v9)));
            }
        } while ((*(a3) = (unsigned long long)v5, a0[1] = v7, v7 += 1, (int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v1)));
    }
    a0[0] = a0[0] + a2;
    v14 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(v5, v6);
    a0[4] = v14;
    return v14;
}
