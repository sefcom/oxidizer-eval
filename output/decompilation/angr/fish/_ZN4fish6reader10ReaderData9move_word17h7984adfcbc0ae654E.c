long long fish::reader::ReaderData::move_word(struct_0 *a0, unsigned int a1, unsigned int a2, unsigned int a3, char a4, unsigned int a5)
{
    char v0;  // [sp-0x4a]
    char v1;  // [sp-0x49]
    unsigned int v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    struct_0 *v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x38]
    unsigned int v6;  // [bp-0x34]
    struct_0 *v8;  // rbx
    struct_0 *v9;  // 4096
    unsigned long long v10;  // cc_ndep
    struct_0 *v11;  // rbx
    void* v12;  // r15
    void* v13;  // r14
    void* v14;  // rbp
    char v15;  // al
    unsigned long v16;  // cc_dep1
    unsigned long v17;  // rax
    void* v18;  // r13
    unsigned long long v20;  // r15
    void* v21;  // rbp
    unsigned int v22;  // esi
    unsigned int v23;  // r9d
    void* v24;  // rdx
    void* v25;  // rcx
    char v26;  // r8b
    unsigned long v27;  // rax

    v8 = &a0->padding_80[240];
    if (!a1)
        v9 = a0;
    else
        v9 = v8;
    v11 = v9;
    if (a2)
    {
        v12 = *((long long *)&v11->padding_0[48]);
        v13 = v11->field_78;
        if (v13 == v12)
            return v27;
        v6 = a3;
        v5 = a2;
        v2 = a1;
        v3 = a5;
        v4 = a0;
        v1 = 0;
        v0 = a4;
        v14 = 0;
        do
        {
            v12 = v13 + v14;
            v15 = v0.consume_char((unsigned int)v11.at(v12));
            v16 = v15;
            if (!v15)
            {
                v17 = v2;
                if (!v14)
                {
                    v18 = v13;
                    v12 = v18 + 1;
                    if ((char)_ccall(4, 24, v18 + 1, 0, _ccall(20, v14, 0, v10)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14e0078); /* do not return */
                    goto LABEL_13fc6f2;
                }
            }
            if ((char)_ccall(4, 24, v12 + 1, 0, _ccall(17, v16, 0, v10)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e0090); /* do not return */
            v10 = _ccall(24, v12 + 1, 0, _ccall(17, v16, 0, v10));
            v14 += 1;
        } while (v12 + 1 != v12);
    }
    else
    {
        v13 = v11->field_78;
        if (!v13)
            return v27;
        v6 = a3;
        v5 = a2;
        v2 = a1;
        v3 = a5;
        v4 = a0;
        v1 = 0;
        v0 = a4;
        v20 = 18446744073709551615;
        v12 = 0;
        v21 = 0;
        do
        {
            if (!(char)v0.consume_char((unsigned int)v11.at(v13 + v20)))
            {
                v12 = v13 - v21;
                if (!v21)
                {
                    v12 = v13 - 1;
                    break;
                }
                else
                {
                    break;
                }
            }
            v21 += 1;
            v20 -= 1;
        } while (v13 != v21);
    }
    v17 = v2;
LABEL_13fc6f2:
    if (!(char)v6)
        return v4.update_buff_pos(v17, 1, v12);
    if (!(char)v17)
        v4->field_844 = 1;
    if ((char)v5)
    {
        v22 = v17;
        v23 = (char)v3;
        v24 = v13;
        v25 = v12;
        v26 = 0;
    }
    else
    {
        v22 = v17;
        v23 = (char)v3;
        v24 = v12;
        v25 = v13;
        v26 = 1;
    }
    return v4.kill(v22, v24, v25, v26, v23);
}
