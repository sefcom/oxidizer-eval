long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3, char *a4)
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v4;  // r15
    unsigned long long v5;  // r13
    unsigned int v6;  // edx
    unsigned int v7;  // ebp
    char v8;  // r14b
    unsigned int v9;  // ebp
    unsigned long long v10;  // rax

    v1 = a1;
    v2 = a1 + a2;
    if ((int)core::str::validations::next_code_point(&v1))
    {
        v0 = a0[3];
        v4 = a0[1];
        v5 = a0[2];
        do
        {
            v9 = v7;
            if (v9 - 9 < 5 || v9 == 32 || v9 >= 128 && (char)::0x4adea0::core::unicode::unicode_data::white_space::lookup(v9))
            {
                *(a4) = 0;
            }
            else if (!(v8 & 1))
            {
                *(a4) = 1;
                v0 += 1;
                a0[3] = v0;
                v8 = 1;
            }
            if (v9 == 10)
            {
                v5 += 1;
                a0[2] = v5;
            }
            v4 += 1;
            v6 = v6;
        } while ((int)core::str::validations::next_code_point(&v1));
        a0[1] = v4;
    }
    a0[0] = a0[0] + a2;
    v10 = ::0x4ac590::core::cmp::max_by(a3, a0[4]);
    a0[4] = v10;
    return v10;
}
