long long uu_uniq::Uniq::cmp_keys::h116581db8bca43c7(struct_1 *a0, unsigned long a1, unsigned int a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    unsigned long long v3;  // [sp-0x48]
    unsigned long long v4[3];  // [bp-0x40]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    struct_0 *v7;  // [sp-0x28]
    unsigned long long v8;  // [sp-0x20]
    unsigned long long v9;  // [sp-0x18]
    struct_0 *v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v16;  // rcx
    void* v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r8
    unsigned long long v21;  // r9
    unsigned long long v22;  // rax
    unsigned long long v24;  // r8
    unsigned long long v25;  // r9
    unsigned long long v26;  // r8
    unsigned long long v27;  // r9
    unsigned long long v28;  // r8
    unsigned long long v29;  // r9
    unsigned long long v30;  // r8
    unsigned long long v31;  // r9

    v11 = a0;
    v7 = &a0->field_0;
    v8 = a3;
    v9 = a4;
    uu_uniq::Uniq::skip_fields::h2a07e332503a88d4(v4, *((long long *)&a0->field_0), *((long long *)&a0->field_8), a1, a2, a1);
    v12 = *((long long *)&v6);
    v13 = v11->field_20;
    if (!v11->field_10)
    {
        if (!v13)
        {
            if (!v12)
                goto LABEL_488ba4;
            if (!v11->field_34)
            {
LABEL_488bd3:
                v19 = *((long long *)&v5);
                v0 = v19;
                v1 = v12 + v19;
                v22 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h84104d26f807d7eb(&v7, &v0, &g_4f2b48, v18, v24, v25);
                goto LABEL_488c31;
            }
            v16 = v12;
            if (false)
            {
LABEL_488b6d:
                v19 = *((long long *)&v5);
                v0 = v19;
                v1 = v12 + v19;
                v2 = 0;
                v3 = v16;
                v22 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h84104d26f807d7eb(&v7, &v0, &g_4f2bf0, v3, v28, v29);
                goto LABEL_488c31;
            }
        }
        else
        {
            if (!v12)
                goto LABEL_488ba4;
            v16 = v11->field_28;
            if (!v11->field_34)
                goto LABEL_488bce;
            v17 = 0;
LABEL_488b21:
            if (!(!v17))
                goto LABEL_488b6d;
        }
        if (!(v16 == v12))
            goto LABEL_488b6d;
        v19 = *((long long *)&v5);
        v0 = v19;
        v1 = v12 + v19;
        v22 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h84104d26f807d7eb(&v7, &v0, &g_4f2bb8, v16, v26, v27);
    }
    else
    {
        v16 = v14;
        if (!v12)
        {
LABEL_488ba4:
            v19 = *((long long *)&v5);
            v0 = v19;
            v1 = v12 + v19;
            v22 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h84104d26f807d7eb(&v7, &v0, &g_4f2b48, v18, v20, v21);
            goto LABEL_488c31;
        }
        v17 = v11->field_18;
        if (!(!v11->field_34))
            goto LABEL_488b21;
        if (v17)
        {
LABEL_488bff:
            v19 = *((long long *)&v5);
            v0 = v19;
            v1 = v12 + v19;
            v2 = v17;
            v3 = v18;
            v22 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h84104d26f807d7eb(&v7, &v0, &g_4f2b80, v3, v30, v31);
            goto LABEL_488c31;
        }
LABEL_488bce:
        if (v16 == v12)
            goto LABEL_488bd3;
        v17 = 0;
        goto LABEL_488bff;
    }
LABEL_488c31:
    if (v4[0])
    {
        __rust_dealloc(v19);
        v22 = v22 & 4294967295 & 4294967295;
        return v22;
    }
    return v22;
}
