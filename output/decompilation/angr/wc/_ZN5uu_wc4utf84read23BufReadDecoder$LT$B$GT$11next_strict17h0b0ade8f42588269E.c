long long uu_wc::utf8::read::BufReadDecoder<B>::next_strict(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x37]
    unsigned long v5;  // r15
    unsigned long long v6;  // r13
    char v7;  // dl
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // r13
    unsigned long long v11;  // r13
    char v13;  // bpl
    unsigned long long v14;  // rdx

    v5 = &a1->field_38;
    while (true)
    {
        if (a1->field_30)
        {
            a1.consume(a1->field_30);
            a1->field_30 = 0;
        }
        v0.fill_buf(a1);
        if (!v0)
        {
            a0->field_0 = 1;
            a0->field_8 = 0;
            a0->field_10 = v1;
            return a0;
        }
        v6 = v1;
        if (a1->field_3c)
        {
            if (v6)
            {
                a1->field_30 = v5.try_complete_offsets(v0, v6);
                if (v7 == 2)
                    continue;
                v9 = v5.take_buffer();
                if (!(!(v7 & 1)))
                    goto LABEL_4bc06f;
                goto LABEL_4bc015;
            }
            else
            {
                v9 = v5.take_buffer();
LABEL_4bc06f:
                a0->field_0 = 1;
                break;
            }
        }
        if (!v6)
        {
            a0->field_0 = 2;
            return a0;
        }
        core::str::converts::from_utf8(&v0, v0, v6);
        if (!((char)v0 & 1))
            goto LABEL_4bc03d;
        if (v1)
        {
            v10 = v1;
            v11 = v10;
            goto LABEL_4bc036;
        }
        else if (!(v2 & 1))
        {
            a1->field_30 = v6;
            v8 = v0.new(v6);
            a1->field_38 = v8;
            a1->field_3c = v8 >> 32;
        }
        else
        {
            v11 = v3;
LABEL_4bc036:
            v13 = !v10;
LABEL_4bc03d:
            a1->field_30 = v6;
            v0.fill_buf(a1);
            if (!v0)
            {
                a0->field_0 = 1;
                a0->field_8 = 0;
                a0->field_10 = v1;
                return a0;
            }
            v9 = v6.index(v0, v1, &g_59f5a8);
            if (!(!(v13 & 1)))
                goto LABEL_4bc06f;
LABEL_4bc015:
            a0->field_0 = 0;
            break;
        }
    }
    a0->field_8 = v9;
    a0->field_10 = v14;
    return a0;
}
