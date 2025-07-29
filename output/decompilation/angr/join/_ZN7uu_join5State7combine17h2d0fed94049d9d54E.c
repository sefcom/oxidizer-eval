long long uu_join::State::combine(struct_3 *a0, unsigned long long a1, struct_1 *a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long v6;  // [bp-0x70]
    char v7;  // [bp-0x68]
    char *v8;  // [bp-0x68]
    struct_1 *v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    struct_1 *v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    void* v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    void* v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v0 = a0.get_current_key();
    v13 = v0;
    v1 = v16;
    v14 = v16;
    v4 = a0.into_iter();
    v5 = v16;
    v17 = v4.next();
    if (!v17)
        return 0;
    v18 = v17;
    if (a3->field_10)
    {
        do
        {
            v2 = a2.into_iter();
            v3 = v16;
            while (true)
            {
                v19 = v2.next();
                if (!v19)
                    break;
                v8 = &v13;
                v9 = &a0;
                v10 = v18;
                v11 = a2;
                v12 = v19;
                v20 = a3.print_format(a1, &v8);
                if (v20)
                    return v20;
                v7 = a3->field_28;
                v21 = a1.write_all(&v7, 1);
                if (v21)
                    return v21;
            }
            v18 = v4.next();
        } while (v18);
    }
    else
    {
        if (!v0)
        {
            v0 = a3->field_18;
            v1 = a3->field_20;
        }
        v6 = a2->field_40;
        do
        {
            v2 = a2.into_iter();
            v3 = v16;
            while (true)
            {
                v22 = v2.next();
                if (!v22)
                    break;
                v23 = a1.write_all(v0, v1);
                if (v23)
                    return v23;
                v24 = a3.print_fields(a1, v18, *((long long *)&a0->field_40));
                if (v24)
                    return v24;
                v25 = a3.print_fields(a1, v22, v6);
                if (v25)
                    return v25;
                v7 = a3->field_28;
                v26 = a1.write_all(&v7, 1);
                if (v26)
                    return v26;
            }
            v18 = v4.next();
        } while (v18);
    }
    return 0;
}
