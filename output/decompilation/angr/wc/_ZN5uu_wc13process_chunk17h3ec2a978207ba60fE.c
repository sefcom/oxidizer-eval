long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, unsigned long long a3, char *a4)
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v4;  // r12
    unsigned int v5;  // edx
    unsigned int v6;  // ebp
    char v7;  // r14b
    unsigned int v8;  // ebp
    unsigned long long v9;  // rax

    v1 = a1;
    v2 = a1 + a2;
    if ((int)core::str::validations::next_code_point(&v1))
    {
        v4 = a0[2];
        v0 = a0[3];
        do
        {
            v8 = v6;
            if (v8 - 9 < 5 || v8 == 32 || v8 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v8))
            {
                *(a4) = 0;
            }
            else if (!(v7 & 1))
            {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v7 = 1;
            }
            if (v8 == 10)
            {
                v4 += 1;
                a0[2] = v4;
            }
            v5 = v5;
        } while ((int)core::str::validations::next_code_point(&v1));
    }
    a0[0] = a0[0] + a2;
    v9 = ::0x4ac590::core::cmp::max_by(a3, a0[4]);
    a0[4] = v9;
    return v9;
}
