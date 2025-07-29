long long uu_head::parse::parse_obsolete(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x54]
    unsigned long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    unsigned long long v6;  // rax
    unsigned int v7;  // edx
    unsigned int v8;  // eax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned int v11;  // r13d
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v4 = 0;
    v2 = a1;
    v3 = a1 + a2;
    v6 = v2.next();
    if (v7 == 45)
    {
        v2.next();
        if (v7 != 0x110000)
        {
            v8 = v7 - 48;
            if (v8 <= 9)
            {
                v0 = v8;
                v1 = v6 + 1;
                do
                {
                    v9 = v2.next();
                    if (v7 == 0x110000)
                    {
                        v11 = 0;
                        v10 = a2;
                        if (v7 == 0x110000)
                        {
                            *(a0) = 9223372036854775809;
                            return a0;
                        }
                    }
                } while (v7 - 48 < 10);
                v10 = v9;
                if (v0 < 10)
                {
                    v12 = v10;
                    v13 = v1.get(v12, a1, a2);
                    if (!v13)
                        core::str::slice_error_fail(a1, a2, v1, v12, &g_593bd0); /* do not return */
                    uu_head::parse::process_num_block(a0, v13, a2, v11, &v2);
                    return a0;
                }
            }
        }
    }
    *(a0) = 9223372036854775809;
    return a0;
}
