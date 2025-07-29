long long uu_sort::tokenize_default(unsigned long long a0, unsigned long a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    char v4;  // cl
    char v5;  // bpl
    unsigned long long v6;  // rax
    unsigned int v7;  // edx
    unsigned long long v8;  // rax

    a2.push(0, 0, &g_670650);
    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v4 = 1;
    while (true)
    {
        v5 = v4;
        v6 = v0.next();
        if (v7 != 32)
        {
            if (v7 == 0x110000)
            {
                v8 = a2[2];
                if (!a2[2])
                    core::option::unwrap_failed(&g_670668); /* do not return */
                *((unsigned long *)(a2[1] + v8 * 16 - 8)) = a1;
                return v8 * 16;
            }
            if (v7 - 9 < 5)
                goto LABEL_50cd8f;
            v4 = 0;
            if (v7 < 128)
                continue;
            v4 = ::0x508620::core::unicode::unicode_data::white_space::lookup(v7);
            if (!(!((v5 | ~(v4)) & 1)))
                continue;
LABEL_50cd97:
            if (!a2[2])
                core::option::unwrap_failed(&g_670680); /* do not return */
            *((unsigned long long *)(a2[1] + a2[2] * 16 - 8)) = v6;
            a2.push(v6, 0, &g_670698);
            v4 = 1;
        }
        else
        {
LABEL_50cd8f:
            v4 = 1;
            if (!(!(v5 & 1)))
                continue;
            goto LABEL_50cd97;
        }
    }
}
