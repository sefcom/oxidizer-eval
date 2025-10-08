long long fish::history::file::unescape_yaml_fish_2_0(unsigned long a0, char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char *v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    struct_0 *v4;  // [bp-0x38]
    char *v6;  // rbx
    void* v7;  // r13
    void* v8;  // r12
    void* v9;  // r12
    unsigned long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long v12;  // r15
    char *v13;  // r13
    char *v14;  // rax
    unsigned int v15;  // eax
    char v16;  // al
    unsigned long v17;  // r15
    unsigned long long v19;  // rsi
    unsigned long long v21;  // rax

    v6 = a2.collect();
    v2 = a1;
    v3 = &a1[a2];
    v7 = 0;
    v0 = &g_14d9a88;
    v1 = &g_14d9ab8;
    v8 = 0;
    while (true)
    {
        v9 = v8;
        v10 = v2.fold();
        if (v9 > a2)
            core::slice::index::slice_start_index_len_fail(v9, a2, &g_14d9b18); /* do not return */
        if (v7 > v11)
            core::slice::index::slice_start_index_len_fail(v9, v19, 0x14d9b00); /* do not return */
        v12 = v10;
        memcpy(v6 + v7, v9 + a1, v10);
        v13 = v7 + v12;
        if ((char)__CFADD__(v7, v12))
            break;
        v14 = v2;
        if (v14 == v3)
        {
            v4->field_0 = v11;
            v4->field_8 = v6;
            v4->field_10 = v13;
            return v4;
        }
        v2 = v14 + 1;
        switch (v15)
        {
        case 92:
            v16 = 92;
            if (v13 >= v11)
            {
                v1 = &g_14d9aa0;
                core::panicking::panic_bounds_check(v13, v11, 0x14d9aa0); /* do not return */
            }
        case 110:
            v16 = 10;
            if (v13 >= v11)
            {
                v1 = &g_14d9ab8;
                core::panicking::panic_bounds_check(v13, v11, &g_14d9ab8); /* do not return */
            }
        default:
            v4->field_0 = v11;
            v4->field_8 = v6;
            v4->field_10 = v13;
            return v4;
        }
        *((char *)(v6 + v13)) = v16;
        v17 = v12 + 2;
        if ((char)__CFADD__(v12, 2))
        {
            v21 = &g_14d9ad0;
            goto LABEL_13bde03;
        }
        else if (!((char)__CFADD__(v9, v17)))
        {
            v7 = v13 + 1;
            v8 = v9 + v17;
        }
        else
        {
            v21 = &g_14d9ae8;
LABEL_13bde03:
            v0 = v21;
            break;
        }
    }
    core::panicking::panic_const::panic_const_add_overflow(v0); /* do not return */
}
