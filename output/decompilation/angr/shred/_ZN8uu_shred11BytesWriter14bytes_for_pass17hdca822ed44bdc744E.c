long long uu_shred::BytesWriter::bytes_for_pass(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (a0->field_0 != 1)
    {
        v2 = a1.index_mut(&a0->padding_1[335]);
        a0->padding_1[15].fill_bytes(v2, v3);
        return v2;
    }
    v1 = a0->field_10008.index(a0->field_10008 + a1, &a0->padding_1, 65538, &g_4f9f80);
    a0->field_10008 = (a1 + a0->field_10008) % 3;
    return v1;
}
