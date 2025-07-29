long long uu_wc::utf8::read::BufReadDecoder<B>::next_strict(struct_0 *a0, struct_1 *a1)
{
    unsigned long long *v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x37]
    unsigned long v6;  // r15
    unsigned long long v7;  // r13
    char v8;  // dl
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    struct_0 *v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // r13
    unsigned long long v14;  // r13
    char v16;  // bpl
    unsigned long long v17;  // rdx

    v6 = &a1->field_18;
    while (true)
    {
        if (a1->field_10)
        {
            a1.consume(a1->field_10);
            a1->field_10 = 0;
        }
        v1.fill_buf(a1);
        if (!v1)
        {
            v11 = a0;
            v11->field_0 = 1;
            v11->field_8 = 0;
            v11->field_10 = v2;
            return v11;
        }
        v7 = v2;
        if (a1->field_1c)
        {
            if (!v7)
            {
                v6.take_buffer();
                a0->field_0 = 1;
                v11->field_8 = v12;
                v11->field_10 = v17;
                return v11;
            }
            a1->field_10 = v6.try_complete_offsets(v1, v7);
            if (v8 != 2)
                break;
            continue;
        }
        if (!v7)
        {
            *(v0) = 2;
            return a0;
        }
        core::str::converts::from_utf8(&v1, v1, v7);
        if (!((char)v1 & 1))
            goto LABEL_4bc1f0;
        if (v2)
        {
            v13 = v2;
            v14 = v13;
            goto LABEL_4bc1e9;
        }
        else if (!(v3 & 1))
        {
            a1->field_10 = v7;
            v9 = v1.new(v7);
            a1->field_18 = v9;
            a1->field_1c = v9 >> 32;
        }
        else
        {
            v14 = v4;
LABEL_4bc1e9:
            v16 = !v13;
LABEL_4bc1f0:
            v11 = a0;
            a1->field_10 = v7;
            v1.fill_buf(a1);
            if (!v1)
            {
                v11->field_0 = 1;
                v11->field_8 = 0;
                v11->field_10 = v10;
                return v11;
            }
            v12 = v7.index(v1, v2, &g_59f5a8);
            if ((v16 & 1))
            {
                v11->field_0 = 1;
                v11->field_8 = v12;
                v11->field_10 = v17;
                return v11;
            }
            v11->field_0 = 0;
            v11->field_8 = v12;
            v11->field_10 = v17;
            return v11;
        }
    }
    v12 = v6.take_buffer();
    v11 = a0;
    if ((v8 & 1))
    {
        v11->field_0 = 1;
        v11->field_8 = v12;
        v11->field_10 = v17;
        return v11;
    }
    v11->field_0 = 0;
    v11->field_8 = v12;
    v11->field_10 = v17;
    return v11;
}
