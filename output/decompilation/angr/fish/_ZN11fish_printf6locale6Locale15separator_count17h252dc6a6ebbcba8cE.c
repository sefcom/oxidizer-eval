long long fish_printf::locale::Locale::separator_count(struct_0 *a0, unsigned long a1)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x38]
    void* v4;  // rbx
    void* v5;  // r13
    char v6;  // dl
    unsigned long long v7;  // cc_ndep
    void* v8;  // rax
    unsigned long v9;  // r13
    unsigned long v10;  // cc_dep1
    unsigned long v13;  // rax
    unsigned long long v14;  // r14
    unsigned long long v15;  // rcx

    if (a0->field_4 == 0x110000)
        return 0;
    v0 = 0;
    v1 = 4;
    v2 = a0->field_8;
    if ((v0.next() & 1))
    {
        v4 = 0;
        v5 = 0;
        do
        {
            v8 = v5;
            v9 = v6;
            v5 = v9 + v8;
            if ((char)__CFADD__(v9, v8))
                core::panicking::panic_const::panic_const_add_overflow(&g_1518398); /* do not return */
            if (a1 <= v5)
                return v4;
            v10 = v6;
            if (v6)
            {
                v4 += 1;
                v7 = _ccall(17, v10, 0, v7);
                if ((char)_ccall(4, 24, v4 + 1, 0, _ccall(17, v10, 0, v7)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_15183b0); /* do not return */
            }
        } while ((v0.next() & 1));
    }
    else
    {
        v5 = 0;
        v4 = 0;
    }
    v13 = (a0->field_c ? a0->field_8 >> 24 : 0);
    if (!(char)v13)
    {
        return v4;
    }
    else if (a1 > v5)
    {
        v14 = a1 + ~(v5);
        v15 = v13 & 4294967295;
        if (v14 >> 32)
        {
            if (!((char)__CFADD__(v4, (unsigned long long)((0 CONCAT v14) % v15) CONCAT (unsigned long long)((0 CONCAT v14) / v15))))
                return v4 + ((unsigned long long)((0 CONCAT v14) % v15) CONCAT (unsigned long long)((0 CONCAT v14) / v15));
        }
        else
        {
            if (!((char)__CFADD__(v4, ((unsigned int)((0 CONCAT (unsigned int)v14) % (v15 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v14) / (v15 & 4294967295))) & 4294967295)))
                return v4 + (((unsigned int)((0 CONCAT (unsigned int)v14) % (v15 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v14) / (v15 & 4294967295))) & 4294967295);
        }
        core::panicking::panic_const::panic_const_add_overflow(&g_1518380); /* do not return */
    }
    else
    {
        return v4;
    }
}
