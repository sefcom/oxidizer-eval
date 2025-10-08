long long fish::reader::Reader::expand_abbreviation_at_cursor(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    int v0;  // [bp-0xe8]
    unsigned long v1;  // [bp-0xe0]
    int v2;  // [bp-0xd8]
    char v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xc0]
    unsigned int v5;  // [bp-0xbc]
    int v6;  // [bp-0xb8], Other Possible Types: char
    int v7;  // [bp-0xa8]
    char v8;  // [bp-0x98]
    void* v9;  // [bp-0x88]
    void* v10;  // [bp-0x78]
    void* v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    void* v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x40]
    void* v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    unsigned long long v18[16];  // [bp-0x28]
    char v20;  // al
    unsigned long long v21[16];  // rdx
    unsigned int v22;  // ebp
    unsigned long long v23;  // rax

    v20 = a0.active_edit_line();
    if (a0->field_4f9 != 1 || (v20 & 1))
        return 0;
    fish::reader::reader_expand_abbreviation_at_cursor(&v6, v21[5], v21[6], (a2 <= v21[15] ? (unsigned int)(v21[15] - a2) : 0), a1);
    v22 = vvar_30{reg 56} & 0xffffff00 | *((long long *)&v6) != 2;
    if (*((long long *)&v6) == 2)
    {
        core::ptr::drop_in_place<core::option::Option<fish::abbrs::Replacement>>(&v6);
        return v22;
    }
    memcpy(&v3, &v8, 16);
    v2 = v7;
    v0 = v6;
    v23 = v4.from(v5);
    v15 = *((long long *)&v8);
    memcpy(&v14, &v7, 16);
    v16 = 0;
    v9 = 0;
    v17 = v23;
    v18[0] = v21;
    v11 = 0;
    v12 = 4;
    v13 = 0;
    v10 = 0;
    a0.push_edit(0, &v9);
    a0.update_buff_pos(0, (long long)v0, v1);
    return v22;
    return 0;
}
