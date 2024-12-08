long long uu_wc::process_chunk::haebd6e84807cffab(unsigned long long a0[5], unsigned long a1, unsigned long long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // rbp
    unsigned long long v5;  // r14
    unsigned long long v6;  // r12
    unsigned int v8;  // r13d
    unsigned int v10;  // r13d
    unsigned long long v11;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if (!(int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v1))
    {
        a0[0] = a0[0] + a2;
        v11 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(0, a0[4]);
        a0[4] = v11;
        return v11;
    }
    v0 = a0[3];
    v5 = a0[1];
    v6 = a0[2];
    do
    {
        v8 = v10;
        if (v8 - 9 < 5 || v8 == 32 || v8 >= 128 && (char)::0x4b7f00::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8))
        {
            *(a3) = 0;
            v4 = 0;
        }
        else if (!(char)v4)
        {
            *(a3) = 1;
            v0 += 1;
            a0[3] = v0;
            v4 = v4 | -0x100 | 1;
        }
        if (v8 == 10)
        {
            v6 += 1;
            a0[2] = v6;
        }
        v5 += 1;
    } while ((int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v1));
    a0[1] = v5;
}
