long long fish::reader::ReaderData::fill_history_pager(struct_0 *a0, unsigned int a1, char a2, char a3)
{
    char v0;  // [bp-0xf9]
    uint128_t v1;  // [bp-0xf8]
    char v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xb8]
    unsigned long v8;  // [bp-0xb0]
    unsigned long v9;  // [bp-0xa8]
    char v10;  // [bp-0xa0]
    char v11;  // [bp-0x9f]
    char v12;  // [bp-0x98]
    char v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x78]
    unsigned long v15;  // [bp-0x70]
    char v16;  // [bp-0x68]
    void* v17;  // [bp-0x60], Other Possible Types: char
    char v18;  // [bp-0x50]
    unsigned long v20;  // rbx
    unsigned long v21;  // cc_dep1
    unsigned long long v22;  // r15
    unsigned long v23;  // cc_ndep
    unsigned long long v24;  // cc_ndep
    unsigned long long v25;  // cc_op
    unsigned long v26;  // cc_dep1
    unsigned long v27;  // r15
    uint128_t v28;  // xmm0
    unsigned long v29;  // cc_ndep
    char v30;  // r12b

    v20 = a1;
    v0 = a3;
    if ((char)v20)
    {
        if ((unsigned int)v20 == 1)
        {
            if (!(a0->field_478 & 1))
                core::option::unwrap_failed(&g_14e0c50); /* do not return */
            v21 = a3;
            if (a3)
            {
                v22 = a0->field_488;
                if (!v22)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14e0c80); /* do not return */
                v24 = _ccall(20, v22, 0, v23);
                v25 = 28;
                v26 = v22 - 1;
                v27 = v22 - 1;
                v28 = 0;
LABEL_1405727:
                v1 = v28;
                v30 = 1;
            }
            else
            {
                v24 = _ccall(17, v21, 0, v29);
                v27 = a0->field_480 + 1;
                if ((char)_ccall(4, 24, a0->field_480 + 1, 0, _ccall(17, v21, 0, v29)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e0c68); /* do not return */
                v1 = 0;
                v25 = 19;
                v26 = 0;
            }
        }
        else
        {
            v25 = 17;
            v26 = a0->field_478 & 1;
            if (!(a0->field_478 & 1))
                core::option::unwrap_failed(&g_14e0c98); /* do not return */
            v27 = a0->field_480;
            v28 = a0->field_160;
            goto LABEL_1405727;
        }
    }
    else
    {
        if (a3)
        {
            v1 = 0;
            v30 = 1;
            v25 = 19;
            v26 = 0;
            v27 = 0;
        }
        else
        {
            v17 = 0;
            core::panicking::assert_failed(0, &v0, &g_9f6e78, &v17, &g_14e0c38); /* do not return */
        }
    }
    v2.to_vec(a0->field_198, a0->field_1a0);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0->field_830) + 1, 0, _ccall(v25, v26, 0, v24))))
    {
        v5 = a0->field_830;
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v17, v3, v4);
        v7 = *((long long *)&v18);
        memcpy(&v6, &v17, 16);
        v8 = v5;
        v10 = v30;
        v11 = a2;
        v9 = v27;
        a0->field_828.downgrade();
        v15 = a0->field_828;
        memcpy(&v13, &v2, 16);
        v14 = v4;
        v16 = v20;
        memcpy(&v12, &v1, 16);
        return fish::reader::debounce_history_pager().perform_with_completion(&v6, &v12);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20994164()
}
