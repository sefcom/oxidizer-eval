long long fish::exec::get_performer_for_builtin(struct_2 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0xb0]
    int v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    char v4;  // [bp-0x90], Other Possible Types: uint128_t
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    char v7;  // [bp-0x70]
    int v8;  // [bp-0x68], Other Possible Types: char
    unsigned long long v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    char v13;  // bpl
    struct_1 *v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // r14
    unsigned long v17;  // r14
    void* v18;  // rax
    void* v19;  // rax
    unsigned long v20;  // cc_ndep
    void* v21;  // r12

    if (a0->field_0 != 1)
    {
        v1 = &g_14d7df8;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_14d7e28); /* do not return */
    }
    v13 = 1;
    if (a0->field_d4)
    {
        if (a0->field_70)
        {
            v14 = a0->field_68;
            v15 = a0->field_70 * 32;
            do
            {
                v16 = v15;
                if (!v14->field_18 && !(char)v14.is_close())
                    goto LABEL_13a7e6f;
                else
                    goto LABEL_13a7e50;
LABEL_13a7e50:
                v14 = &v14[1].padding_0[4];
                v17 = v16 - 32;
                v15 = v17;
            } while (v16 != 32);
            v13 = 0;
LABEL_13a7e6f:
        }
        else
        {
            v13 = 0;
            v18 = a1->field_28;
            v19 = v18;
            if (v19)
                goto LABEL_13a7e83;
LABEL_13a7ea0:
            v21 = 0;
LABEL_13a7ea3:
            v0 = v21;
            (char)v1.clone(a2, a3);
            v9 = v3;
            memcpy(&v8, &(char)v1, 16);
            v10.clone(a0->field_50, a0->field_58);
            v3 = v9;
            v1 = v8;
            v6 = v21;
            v7 = v13;
            memcpy(&v4, &v10, 16);
            v5 = *((long long *)&v11);
            return (char)v1.new();
        }
    }
    v18 = a1->field_28;
    v19 = v18;
    if (!v19)
        goto LABEL_13a7ea0;
LABEL_13a7e83:
    if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v18) + 1, 0, _ccall(20, v19, 0, v20)))
        [D] Unsupported jumpkind Ijk_NoDecode at address 20610925()
    v21 = a1->field_28;
    goto LABEL_13a7ea3;
}
