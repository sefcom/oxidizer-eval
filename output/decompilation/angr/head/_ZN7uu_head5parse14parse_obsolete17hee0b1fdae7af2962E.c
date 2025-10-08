long long uu_head::parse::parse_obsolete(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned int v5;  // edx
    unsigned long v6;  // r12
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned int v9;  // r13d
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    v4 = v0.next();
    if (v5 == 45)
    {
        v0.next();
        if (v5 - 48 <= 9)
        {
            v6 = v4 + 1;
            do
            {
                v7 = v0.next();
                if (v5 == 0x110000)
                {
                    v9 = 0;
                    v8 = a2;
                    break;
                }
                v8 = v7;
            } while (v5 - 48 < 10);
            v10 = v8;
            v11 = v6.get(v10, a1, a2);
            if (!v11)
                core::str::slice_error_fail(a1, a2, v6, v10, &g_4f7a28); /* do not return */
            uu_head::parse::process_num_block(a0, v11, a2, v9, &v0);
            return a0;
        }
    }
    *(a0) = 9223372036854775809;
    return a0;
}
