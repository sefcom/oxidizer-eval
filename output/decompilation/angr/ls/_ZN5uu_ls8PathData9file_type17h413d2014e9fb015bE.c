long long uu_ls::PathData::file_type(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx

    v0 = v2;
    a0->field_f8.get_or_try_init(a0, a1);
    if (!a0->field_f8)
        return 0;
    return &a0[1].padding_0[3];
}
