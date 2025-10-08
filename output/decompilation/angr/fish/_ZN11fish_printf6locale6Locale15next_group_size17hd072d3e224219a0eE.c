long long fish_printf::locale::Locale::next_group_size(struct_0 *a0, unsigned long a1)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x38]
    unsigned long long v4;  // r12
    void* v5;  // rax
    void* v6;  // r13
    unsigned int v7;  // edx
    unsigned long v8;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx

    v0 = 0;
    v1 = 4;
    v2 = a0->field_8;
    v4 = v2 >> 24;
    v5 = 0;
    while (true)
    {
        v6 = v5;
        if (!(v0.next() & 1))
            break;
        v8 = v7;
        v5 = v8 + v6;
        if ((char)__CFADD__(v8, v6))
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_1518350); /* do not return */
        }
        else if (a1 <= v5)
        {
            if (a1 < v6)
                core::panicking::panic_const::panic_const_sub_overflow(&g_1518368); /* do not return */
            return a1 - v6;
        }
    }
    if ((&g_1000000 <= v2 & a0->field_c))
    {
        v9 = a1 - v6;
        if (a1 < v6)
            core::panicking::panic_const::panic_const_sub_overflow(&g_1518338); /* do not return */
    }
    else if (a1 < v6)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_1518320); /* do not return */
    }
    else
    {
        return a1 - v6;
    }
    v10 = (!v9 >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v9) % (v4 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (v4 & 4294967295))) >> 32 : ((unsigned long long)((0 CONCAT v9) % v4) CONCAT (unsigned long long)((0 CONCAT v9) / v4)) >> 64);
    if (v10)
        v11 = v10;
    else
        v11 = v4;
    return v11;
}
