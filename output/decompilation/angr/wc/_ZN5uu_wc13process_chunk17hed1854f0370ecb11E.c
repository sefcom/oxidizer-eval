long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, unsigned long long a3, char *a4)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // r14
    unsigned long long v4;  // rdx
    char v5;  // bpl
    unsigned long long v6;  // rax

    v0 = a1;
    v1 = a1 + a2;
    if ((int)core::str::validations::next_code_point(&v0))
    {
        v3 = a0[3];
        do
        {
            if ((unsigned int)(v4 - 9) < 5 || (unsigned int)v4 == 32 || (unsigned int)v4 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v4 & 4294967295))
            {
                *(a4) = 0;
            }
            else if (!(v5 & 1))
            {
                *(a4) = 1;
                v3 += 1;
                a0[3] = v3;
                v5 = 1;
            }
        } while ((int)core::str::validations::next_code_point(&v0));
    }
    a0[0] = a0[0] + a2;
    v6 = ::0x4ac590::core::cmp::max_by(a3, a0[4]);
    a0[4] = v6;
    return v6;
}
