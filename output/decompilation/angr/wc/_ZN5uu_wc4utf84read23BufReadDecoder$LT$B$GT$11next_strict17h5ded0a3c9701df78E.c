long long uu_wc::utf8::read::BufReadDecoder<B>::next_strict(unsigned long long a0[3], struct_0 *a1)
{
    struct_1 *v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x37]
    unsigned long v6;  // r15
    unsigned long long v7;  // r13
    char v8;  // dl
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // r13
    unsigned long long v12;  // r13
    char v14;  // bpl
    unsigned long long v15;  // rdx
    unsigned long long v16[3];  // rcx

    v6 = &a1->field_38;
    while (true)
    {
        if (a1->field_30)
        {
            a1.consume(a1->field_30);
            a1->field_30 = 0;
        }
        v1.fill_buf(a1);
        if (!v1)
        {
            v0->field_0 = 1;
            v0->field_8 = 0;
            v0->field_10 = v2;
            return v2;
        }
        v7 = v2;
        if (a1->field_3c)
        {
            if (v7)
            {
                a1->field_30 = v6.try_complete_offsets(v1, v7);
                if (v8 == 2)
                    continue;
                v10 = v6.take_buffer();
                if ((v8 & 1))
                    goto LABEL_4649ce;
                goto LABEL_464962;
            }
            else
            {
                v10 = v6.take_buffer();
LABEL_4649ce:
                v16 = a0;
                v0->field_0 = 1;
                break;
            }
        }
        if (!v7)
        {
            v0->field_0 = 2;
            return a0;
        }
        core::str::converts::from_utf8(&v1, v1, v7);
        if ((int)v1 != 1)
            goto LABEL_464997;
        if (v2)
        {
            v11 = v2;
            v12 = v11;
            goto LABEL_464990;
        }
        else if (!(v3 & 1))
        {
            a1->field_30 = v7;
            v9 = v1.new(v7);
            a1->field_38 = v9;
            a1->field_3c = v9 >> 32;
        }
        else
        {
            v12 = v4;
LABEL_464990:
            v14 = !v11;
LABEL_464997:
            a1->field_30 = v7;
            v1.fill_buf(a1);
            if (!v1)
            {
                v0->field_0 = 1;
                v0->field_8 = 0;
                v0->field_10 = v2;
                return v2;
            }
            v10 = 0.index(v7, v1, v2, &g_4f8f58);
            if ((v14 & 1))
                goto LABEL_4649ce;
LABEL_464962:
            v16 = a0;
            v0->field_0 = 0;
            break;
        }
    }
    v16[1] = v10;
    v16[2] = v15;
    return v10;
}
