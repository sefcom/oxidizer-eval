long long uu_dd::Input::fill_consecutive(unsigned long a0, struct_2 *a1, struct_3 *a2)
{
    struct_0 *v0;  // [bp-0x70]
    int v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x50], Other Possible Types: unsigned long long
    uint128_t v4;  // [bp-0x48]
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    void* v8;  // rbp
    void* v9;  // r14
    void* v10;  // r12
    unsigned long long v11;  // rdx
    unsigned long v12;  // rdx

    v6 = a1->field_8->field_70;
    if (!v6)
    {
        v1 = &g_5deb70;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_5deb80); /* do not return */
    }
    *((int128_t *)&v1) = *((int128_t *)&(&a2->padding_0)[1]);
    v3 = v6;
    if ((char)v1.next())
    {
        v8 = 0;
        v9 = 0;
        v10 = 0;
        do
        {
            if (a1.read(v7, v11))
            {
                v0->field_8 = v12;
                v0->field_0 = 1;
                return a0;
            }
            if (a1->field_8->field_70 == v12)
            {
                v8 += 1;
                continue;
            }
            else
            {
                if (!v12)
                    break;
                v9 += 1;
            }
            v10 += v12;
            v7 = (char)v1.next();
        } while (v7);
    }
    else
    {
        v10 = 0;
        v9 = 0;
        v8 = 0;
    }
    a2.truncate(v10);
    v0->field_8 = v8;
    v0->field_10 = v9;
    v0->field_18 = v10;
    v0->field_20 = 0;
    v0->field_0 = 0;
    return a0;
}
