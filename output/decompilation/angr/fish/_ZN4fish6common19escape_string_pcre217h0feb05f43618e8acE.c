long long fish::common::escape_string_pcre2(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x64]
    void* v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    struct_0 *v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v8;  // rsi
    unsigned int v9;  // eax
    unsigned int v10;  // edx
    unsigned int v11;  // r12d
    unsigned int v12;  // r12d

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v8 = a2 >> 1;
    if ((char)__CFADD__(v8, a2))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c0940); /* do not return */
    v1.reserve(v8 + a2);
    v5 = a1;
    v6 = a1 + a2 * 4;
    if ((int)v5.next() != 2)
    {
        do
        {
            v12 = v11;
            v9.unwrap(v12, &g_14bd1b0);
            v0 = v12;
            if (v12 == 10)
            {
                v1.extend("\\n", &g_9f9929);
            }
            else
            {
                if (v0.slice_contains(".", 15))
                    v1.push(92);
                v1.push(v0);
            }
            v9 = v5.next();
            v10 = v10;
        } while (v9 != 2);
    }
    v4->field_10 = 0;
    v4->field_0 = *((int128_t *)&v1);
    return 0;
}
