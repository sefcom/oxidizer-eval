long long fish::reader::ReaderData::insert_string(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x88]
    void* v1;  // [bp-0x78]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    void* v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    struct_0 *v10;  // rax
    struct_0 *v11;  // 4096
    struct_0 *v12;  // rax
    unsigned long long v13;  // rax

    v10 = &a0->padding_80[240];
    if (!a1)
        v11 = a0;
    else
        v11 = v10;
    v12 = v11;
    v5.to_vec(a2, a3);
    v6 = 0;
    v0 = 0;
    v7 = v12->field_78;
    v8 = v12->field_78;
    v2 = 0;
    v3 = 4;
    v4 = 0;
    v1 = 0;
    v13 = a0.push_edit_internal(a1, &v0, !a0->field_708);
    if (a1)
        return v13;
    a0->field_850 = 2;
    a0->field_844 = 0;
    return v13;
}
