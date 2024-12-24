long long uu_wc::process_chunk::h6ffed75b032f9587(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3, char *a4)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // rbx
    void* v5;  // r13
    unsigned long long v6;  // rbp
    unsigned int v8;  // r14d
    unsigned int v10;  // r14d
    unsigned long long v12;  // rax

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
        do
        {
            v8 = v10;
            if (v8 - 9 < 5 || v8 == 32 || v8 >= 128 && (char)::0x4b7f00::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8))
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
            if (v8 - 12 < 2)
            {
LABEL_4bab70:
                v6 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(v5, v6);
                a0[4] = v6;
                v5 = 0;
            }
            else
            {
                if (v8 == 9)
                {
                    v5 = (v5 & -8) + 8;
                    continue;
                }
                if (v8 == 10)
                    goto LABEL_4bab70;
                v5 += (v8 < 127 ? -0x100 | 32 <= v8 : (v8 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::h3c1144d95491570b(v8)));
            }
        } while ((*(a3) = (unsigned long long)v5, (int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v1)));
    }
    a0[0] = a0[0] + a2;
    v12 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(v5, v6);
    a0[4] = v12;
    return v12;
}
