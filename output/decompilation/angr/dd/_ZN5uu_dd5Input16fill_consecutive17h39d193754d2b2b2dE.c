long long uu_dd::Input::fill_consecutive(struct_1 *a0, struct_3 *a1, struct_0 *a2)
{
    struct_1 *v0;  // [bp-0x70]
    struct_0 *v1;  // [bp-0x68]
    int v2;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50], Other Possible Types: unsigned long long
    uint128_t v5;  // [bp-0x48]
    unsigned long v7;  // rax
    struct_0 *v8;  // r12
    struct_1 *v9;  // rbx
    struct_4 *v10;  // rax
    void* v11;  // r13
    void* v12;  // rbp
    void* v13;  // r14
    unsigned long long v14;  // rdx
    void* v15;  // rdx

    v7 = a1->field_8->field_70;
    if (!v7)
    {
        v2 = &g_53d1a0;
        v3 = 1;
        v4 = 8;
        v5 = 0;
        core::panicking::panic_fmt(&v2, &g_53dd80); /* do not return */
    }
    v8 = a2;
    v9 = a0;
    *((unsigned long long [2])&v2) = a2->field_8;
    v4 = v7;
    v10 = (char)v2.next();
    if (v10)
    {
        v1 = a2;
        v0 = a0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        do
        {
            if (((char)a1.read(v10, v14) & 1))
            {
                v0->field_8 = v15;
                v0->field_0 = 1;
                return v0;
            }
            v10 = a1->field_8;
            if (a1->field_8->field_70 == v15)
            {
                v11 += 1;
                continue;
            }
            else
            {
                if (!v15)
                    break;
                v12 += 1;
            }
            v13 += v15;
            v10 = (char)v2.next();
        } while (v10);
        v8 = v1;
        v9 = v0;
        if (v13 > v1->field_8[1])
        {
            v9->field_8 = v11;
            v9->field_10 = v12;
            v9->field_18 = v13;
            v9->field_20 = 0;
            v9->field_0 = 0;
            return v10;
        }
    }
    else
    {
        v11 = 0;
        v12 = 0;
        v13 = 0;
    }
    v8->field_8[1] = v13;
    v9->field_8 = v11;
    v9->field_10 = v12;
    v9->field_18 = v13;
    v9->field_20 = 0;
    v9->field_0 = 0;
    return v10;
}
