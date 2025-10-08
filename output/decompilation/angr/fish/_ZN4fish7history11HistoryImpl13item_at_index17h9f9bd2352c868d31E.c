long long fish::history::HistoryImpl::item_at_index(void* a0, struct_0 *a1, unsigned long a2)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    int v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx

    if (!a2)
    {
        *((unsigned long long *)a0) = 9223372036854775809;
        return a0;
    }
    v6 = a2 - 1;
    v7 = a1->field_50;
    v8 = v7 - (v7 & a1->field_fc);
    v9 = v6 - v8;
    if (v6 < v8)
    {
        v10 = v8 - a2;
        if (v10 >= v7)
            core::panicking::panic_bounds_check(v10, v7, &g_14da000); /* do not return */
        v11 = v10 * 80 + a1->field_48;
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((unsigned long long *)&a0[8]) = v11;
        return a0;
    }
    else
    {
        a1.load_old_if_needed();
        if ((a1->field_0 & 1))
        {
            v12 = a1->field_68;
            if (v9 < v12)
            {
                v13 = ~(v9);
                v14 = v13 + v12;
                if (!((char)__CFADD__(v13, v12)))
                    core::panicking::panic_bounds_check(v14, v12, &g_14d9fe8); /* do not return */
                v0.decode_item(*((long long *)&a1->field_8), a1->field_10, *((long long *)(a1->field_60 + v14 * 8)));
                if (*((long long *)&v0) != 0x8000000000000000)
                {
                    *((int128_t *)&a0[64]) = *((int128_t *)&v4);
                    a0[48] = v3;
                    a0[32] = v2;
                    a0[16] = v1;
                    *(a0) = v0;
                    return a0;
                }
                *((unsigned long long *)a0) = 9223372036854775809;
                return a0;
            }
        }
        *((unsigned long long *)a0) = 9223372036854775809;
        return a0;
    }
}
