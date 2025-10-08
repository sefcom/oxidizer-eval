long long fish::reader::ReaderData::set_command_line_and_position(struct_1 *a0, unsigned int a1, struct_0 *a2, unsigned int a3)
{
    void* v0;  // [bp-0x88]
    void* v1;  // [bp-0x78]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    int v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x40]
    uint128_t v7;  // [bp-0x38]
    unsigned long v8;  // [bp-0x28]
    struct_1 *v10;  // r15
    unsigned long v11;  // rax
    struct_1 *v12;  // 4096
    struct_1 *v13;  // r15
    unsigned long v14;  // rcx
    unsigned long v15;  // rax

    v10 = &a0[6].padding_0[32];
    v11 = &a0->field_30;
    if (!a1)
        v12 = a0;
    else
        v12 = v10;
    v13 = v12;
    v14 = &a0[7].padding_0[24];
    if (!a1)
        v15 = v11;
    else
        v15 = v14;
    v0 = 0;
    v7 = 0;
    v8 = *((long long *)v15);
    v2 = 0;
    v3 = 4;
    v4 = 0;
    *((uint128_t *)&v5) = a2->field_0;
    v6 = a2->field_10;
    v1 = 0;
    a0.push_edit(a1, &v0);
    v13.set_position(a3);
    return a0.update_buff_pos(a1, 1, a3);
}
