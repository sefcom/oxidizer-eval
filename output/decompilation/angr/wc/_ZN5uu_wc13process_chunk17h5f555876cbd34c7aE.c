long long uu_wc::process_chunk(unsigned long long a0[5], unsigned long long a1, unsigned long a2, void* *a3)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v3;  // r12
    unsigned int v4;  // eax
    unsigned long long v5;  // r13
    unsigned long long v6;  // rdx
    unsigned long long v8;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    v4 = core::str::validations::next_code_point(&v0);
    v5 = a0[4];
    if (v4)
    {
        do
        {
            if ((unsigned int)(v6 - 12) < 2)
            {
LABEL_4b0c20:
                v5 = ::0x4ac590::core::cmp::max_by(v3, v5);
                a0[4] = v5;
                v3 = 0;
                continue;
            }
            else if ((unsigned int)v6 != 9)
            {
                if ((unsigned int)v6 != 10)
                {
                    v3 += ((unsigned int)v6 < 127 ? 32 <= (unsigned int)v6 : ((unsigned int)v6 <= 159 ? 0 : (int)unicode_width::tables::lookup_width(v6 & 4294967295)));
                    continue;
                }
                goto LABEL_4b0c20;
            }
            else
            {
                v3 = (v3 & 18446744073709551608) + 8;
            }
            *(a3) = v3;
        } while ((int)core::str::validations::next_code_point(&v0));
    }
    a0[0] = a0[0] + a2;
    v8 = ::0x4ac590::core::cmp::max_by(v3, v5);
    a0[4] = v8;
    return v8;
}
