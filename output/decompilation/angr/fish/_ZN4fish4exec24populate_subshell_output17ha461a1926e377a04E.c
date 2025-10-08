long long fish::exec::populate_subshell_output(unsigned long long a0, struct_0 *a1, unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x58]
    struct_0 *v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    struct_0 *v5;  // rax
    struct_0 *v6;  // rdx
    struct_0 *v7;  // rax
    void* v8;  // r13
    unsigned long long v9;  // rax
    struct_0 *v10;  // rdx
    struct_0 *v12;  // rbx
    char v13;  // bpl
    char v15;  // sil
    struct_0 *v16;  // r15
    struct_0 *v17;  // rbp
    unsigned long long v18;  // rdx
    unsigned long long v19;  // 4096
    struct_0 *v20;  // rcx
    void* v21;  // rax
    void* v22;  // rsi
    unsigned long v24;  // rax

    if (!a2)
        return v24;
    v0 = 32 * a2 + (char *)a1;
    v5 = &a1[1].padding_0[7];
    if (a3)
    {
        while (true)
        {
            v1 = v5;
            if (a1->field_18)
            {
                fish::common::str2wcstring(&v2, a1->field_8, a1->field_10);
                a0.push(&v2, &g_14d7f90);
            }
            else
            {
                v7 = a1->field_10;
                if (a1->field_10)
                {
                    v8 = 0;
                    do
                    {
                        v2 = a1->field_8 + v8;
                        v3 = v7 + a1->field_8;
                        v9 = v2.position();
                        v10 = v6;
                        if (((char)v9 & 1))
                        {
                            v10 = v6 + v8;
                            if ((char)__CFADD__(v6, v8))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14d7fd8); /* do not return */
                        }
                        v12 = v10;
                        v13 = v9 == 1;
                        if (!((char)v9 & 1))
                            v12 = a1->field_10;
                        fish::common::str2wcstring(&v2, v8.index(v12, a1->field_8, a1->field_10, &g_14d7ff0), a2);
                        a0.push(&v2, &g_14d8008);
                        v8 = &v12->padding_0[v13];
                        if ((char)__CFADD__(v13, v12))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8020); /* do not return */
                        v7 = a1->field_10;
                    } while (v8 < a1->field_10);
                }
            }
            a1 = v1;
            if (a1 == v0)
                return 0;
            v5 = 32 * (a1 != v0) + (char *)a1;
            if (!a1)
                return 32 * (a1 != v0) + (char *)a1;
        }
    }
    else
    {
        while (true)
        {
            v16 = a1;
            v17 = v5;
            if (v16->field_18)
            {
                fish::common::str2wcstring(&v2, v16->field_8, v16->field_10);
                v18 = &g_14d7f90;
                v19 = a0;
            }
            else
            {
                v20 = v16->field_10;
                if (v20)
                {
                    v21 = v16->field_8 + v20;
                    v22 = 0;
                    if (v21 != 1)
                        v22 = -((char)v21[1] == 10);
                }
                else
                {
                    v22 = 0;
                }
                fish::common::str2wcstring(&v2, 0.index(v22 + v20, v16->field_8, v20, &g_14d7fa8), a2);
                v18 = &g_14d7fc0;
                v19 = a0;
            }
            v19.push(v15, v18);
            if (v17 == v0)
                return 0;
            v5 = 32 * (v17 != v0) + (char *)v17;
            a1 = v17;
            if (!a1)
                return 32 * (v17 != v0) + (char *)v17;
        }
    }
}
