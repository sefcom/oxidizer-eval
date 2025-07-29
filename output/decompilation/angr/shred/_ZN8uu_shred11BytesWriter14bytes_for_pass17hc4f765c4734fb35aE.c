long long uu_shred::BytesWriter::bytes_for_pass(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // r14
    unsigned long v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long v12;  // rdx

    v0 = v2;
    v3 = a1->field_0;
    if (!v3)
    {
        v10 = a2.index_mut(&a1->padding_1[335]);
        v11 = a1->padding_1[15].fill_bytes(v10, a2);
        a0->field_0 = v10;
        a0->field_8 = v12;
        return v11;
    }
    else if (v3 == 1)
    {
        v4 = a2.index_mut(&a1->padding_1);
        v5 = std::io::default_read_exact(&a1->field_10008, v4, a2);
        if (!v5)
        {
            a0->field_0 = v4;
            a0->field_8 = v6;
            return v5;
        }
        a0->field_8 = v5;
        a0->field_0 = 0;
        return v5;
    }
    else
    {
        v7 = a1->field_10008.index(a1->field_10008 + a2, &a1->padding_1);
        v8 = a2 + a1->field_10008;
        a1->field_10008 = v8 % 3;
        a0->field_0 = v7;
        a0->field_8 = v9;
        return v8 / 3 * 3;
    }
}
