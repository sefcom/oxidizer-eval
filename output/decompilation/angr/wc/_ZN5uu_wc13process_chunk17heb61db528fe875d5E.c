long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3, char *a4)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // r14
    unsigned long long v4;  // r15
    unsigned long long v5;  // rdx
    char v6;  // bpl
    unsigned long long v7;  // rax

    v0 = a1;
    v1 = a1 + a2;
    if ((int)core::str::validations::next_code_point(&v0))
    {
        v3 = a0[1];
        v4 = a0[3];
        do
        {
            if ((unsigned int)(v5 - 9) < 5 || (unsigned int)v5 == 32 || (unsigned int)v5 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v5 & 4294967295))
            {
                *(a4) = 0;
            }
            else if (!(v6 & 1))
            {
                *(a4) = 1;
                v4 += 1;
                a0[3] = v4;
                v6 = 1;
            }
            v3 += 1;
        } while ((int)core::str::validations::next_code_point(&v0));
        a0[1] = v3;
    }
    a0[0] = a0[0] + a2;
    v7 = ::0x4ac590::core::cmp::max_by(a3, a0[4]);
    a0[4] = v7;
    return v7;
}
