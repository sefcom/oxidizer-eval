long long fish::wcstringutil::split_about(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    void* v0;  // [bp-0x90]
    void* v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    struct_0 *v10;  // [bp-0x38]
    unsigned long long v11;  // rbp
    unsigned long long v12;  // r14
    char v13;  // al
    unsigned long long v14;  // r15
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r15
    unsigned long long v17;  // rdx
    unsigned long long v19;  // r13
    unsigned long long v20;  // rbp
    unsigned long long v22;  // r15
    unsigned long long v23;  // rdx
    unsigned long long v25;  // rbp
    unsigned long long v31;  // r15

    v11 = a2;
    v12 = a1;
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v13 = !a2;
    if (!a5 || !a2)
    {
LABEL_1424539:
        if (a6 && v13)
            goto LABEL_1424763;
        goto LABEL_142474c;
    }
    if (!a4)
    {
        do
        {
            v31 = a5;
            if (v11 == 1)
            {
                v11 = 1;
                break;
            }
            v1.push(0.index(1, v12, v11, &g_14e48c0), a2, &g_14e48d8);
            v11 -= 1;
            v12 += 4;
            a5 = v31 - 1;
        } while (v31 != 1);
        goto LABEL_142474c;
    }
    v14 = a5 - 1;
    v15 = a2;
    if (a6)
    {
        while (true)
        {
            v11 = v15;
            v16 = v14;
            v4 = v12;
            v5 = v11;
            v6 = a4;
            v0 = 0;
            v7 = a3;
            v8 = a4;
            v9 = &v0;
            if (!((char)v4.try_fold(&v7) & 1) || v11 == v17)
                goto LABEL_14246ee;
            if (v17)
                v1.push(0.index(v17, v12, v11, &g_14e48c0), a2, &g_14e48d8);
            v19 = v17 + a4;
            if ((char)__CFADD__(v17, a4))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e48f0); /* do not return */
            v20 = v11;
            v11 = v20 - v19;
            if (v20 < v19)
                core::slice::index::slice_start_index_len_fail(v19, v11, &g_14e4908); /* do not return */
            v12 += v19 * 4;
            v13 = v20 == v19;
            if (v16 < 1)
                goto LABEL_1424539;
            v14 = v16 - 1;
            v15 = v11;
            goto LABEL_1424539;
        }
    }
    else
    {
        while (true)
        {
            v11 = v15;
            v22 = v14;
            v4 = v12;
            v5 = v11;
            v6 = a4;
            v0 = 0;
            v7 = a3;
            v8 = a4;
            v9 = &v0;
            if (!((char)v4.try_fold(&v7) & 1) || v11 == v23)
                break;
            v1.push(0.index(v23, v12, v11, &g_14e48c0), a2, &g_14e48d8);
            v19 = v23 + a4;
            if ((char)__CFADD__(v23, a4))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e48f0); /* do not return */
            v25 = v11;
            v11 = v25 - v19;
            if (v25 < v19)
                core::slice::index::slice_start_index_len_fail(v19, v11, &g_14e4908); /* do not return */
            v12 += v19 * 4;
            v13 = v25 == v19;
            if (v22 < 1)
                goto LABEL_1424539;
            v14 = v22 - 1;
            v15 = v11;
            goto LABEL_1424539;
        }
LABEL_14246ee:
LABEL_142474c:
        v1.push(v12, v11, &g_14e4920);
    }
LABEL_1424763:
    v10->field_10 = 0;
    v10->field_0 = *((int128_t *)&v1);
    return v10;
}
