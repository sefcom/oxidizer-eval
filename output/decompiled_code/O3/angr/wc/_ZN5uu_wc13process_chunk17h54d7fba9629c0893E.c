long long uu_wc::process_chunk::h54d7fba9629c0893(unsigned long long a0[5], unsigned long a1, unsigned long a2, unsigned long long *a3)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    void* v3;  // r12
    unsigned long long v4;  // r13
    unsigned long long v5;  // rdx
    unsigned long long v7;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    v4 = a0[4];
    if ((int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v0))
    {
        do
        {
            if ((unsigned int)(v5 - 12) < 2)
            {
LABEL_4ba820:
                v4 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(v3, v4);
                a0[4] = v4;
                v3 = 0;
            }
            else
            {
                if ((unsigned int)v5 == 9)
                {
                    v3 = (v3 & -8) + 8;
                    continue;
                }
                if ((unsigned int)v5 == 10)
                    goto LABEL_4ba820;
                v3 += ((unsigned int)v5 < 127 ? -0x100 | 32 <= (unsigned int)v5 : ((unsigned int)v5 <= 159 ? 0 : unicode_width::tables::charwidth::lookup_width::h3c1144d95491570b(v5 & 4294967295)));
            }
        } while ((*(a3) = (unsigned long long)v3, (int)core::str::validations::next_code_point::h0c4846bcadd131cc(&v0)));
    }
    a0[0] = a0[0] + a2;
    v7 = ::0x4b6640::core::cmp::max_by::h6ff5bbaf74f92c0c(v3, v4);
    a0[4] = v7;
    return v7;
}
