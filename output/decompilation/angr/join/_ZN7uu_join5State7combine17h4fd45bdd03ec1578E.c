long long uu_join::State::combine(struct_0 *a0, unsigned long long a1, struct_0 *a2, struct_1 *a3)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    char *v7;  // [bp-0x68]
    struct_0 *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    struct_0 *v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v15;  // r12
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    void* v18;  // r15
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    void* v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v15 = a0.get_current_key();
    v12 = v15;
    v0 = v16;
    v13 = v16;
    v3 = a0.into_iter();
    v4 = v16;
    v17 = v3.next();
    if (!v17)
        return 0;
    v18 = v17;
    if (a3->field_10)
    {
        do
        {
            v1 = a2.into_iter();
            v2 = v16;
            while (true)
            {
                v19 = v1.next();
                if (!v19)
                    break;
                v7 = &v12;
                v8 = a0;
                v9 = v18;
                v10 = a2;
                v11 = v19;
                v20 = a3.print_format(a1, &v7);
                if (v20)
                    return v20;
                v6 = a3->field_28;
                v21 = a1.write_all(&v6, 1);
                if (v21)
                    return v21;
            }
            v18 = v3.next();
        } while (v18);
    }
    else
    {
        if (!v12)
        {
            v15 = a3->field_18;
            v0 = a3->field_20;
        }
        v5 = a2->field_40;
        do
        {
            v1 = a2.into_iter();
            v2 = v16;
            while (true)
            {
                v22 = v1.next();
                if (!v22)
                    break;
                v23 = a1.write_all(v15, v0);
                if (v23)
                    return v23;
                v24 = a1.print_fields(v18, a0->field_40);
                if (v24)
                    return v24;
                v25 = a1.print_fields(v22, v5);
                if (v25)
                    return v25;
                v6 = a3->field_28;
                v26 = a1.write_all(&v6, 1);
                if (v26)
                    return v26;
            }
            v18 = v3.next();
        } while (v18);
    }
    return 0;
}
