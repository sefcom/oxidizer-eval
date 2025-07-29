long long uu_join::State::combine(struct_1 *a0, unsigned long long a1, struct_1 *a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long v7;  // [bp-0x70]
    char v8;  // [bp-0x68]
    char *v9;  // [bp-0x68]
    struct_1 *v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    struct_1 *v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    void* v19;  // r15
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    void* v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v0 = a0.get_current_key();
    v14 = v0;
    v1 = v17;
    v15 = v17;
    v4 = a0.into_iter();
    v5 = v17;
    v18 = v4.next();
    if (!v18)
        return 0;
    v19 = v18;
    if (a3->field_140)
    {
        do
        {
            v2 = a2.into_iter();
            v3 = v17;
            while (true)
            {
                v20 = v2.next();
                if (!v20)
                    break;
                v9 = &v14;
                v10 = a0;
                v11 = v19;
                v12 = a2;
                v13 = v20;
                v21 = a3.print_format(a1, &v9);
                if (v21)
                    return v21;
                v8 = a3->field_148;
                v22 = a1.write_all(&v8, 1);
                if (v22)
                    return v22;
            }
            v19 = v4.next();
        } while (v19);
    }
    else
    {
        if (!v0)
        {
            v0 = a3->field_120;
            v1 = a3->field_128;
        }
        v7 = a0->field_40;
        v6 = a2->field_40;
        do
        {
            v2 = a2.into_iter();
            v3 = v17;
            while (true)
            {
                v23 = v2.next();
                if (!v23)
                    break;
                v24 = a1.write_all(v0, v1);
                if (v24)
                    return v24;
                v25 = a3->field_108.print_fields(a3->field_110, a1, v19, v7);
                if (v25)
                    return v25;
                v26 = a3->field_108.print_fields(a3->field_110, a1, v23, v6);
                if (v26)
                    return v26;
                v8 = a3->field_148;
                v27 = a1.write_all(&v8, 1);
                if (v27)
                    return v27;
            }
            v19 = v4.next();
        } while (v19);
    }
    return 0;
}
