long long uu_more::Pager::load_visible_lines(struct_2 *a0)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [sp-0x48]
    void* v2;  // [sp-0x40]
    char v3;  // [bp-0x38]
    void* v4;  // [bp-0x28]
    unsigned long long v6;  // rdi
    void* v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rax

    v6 = a0->field_18;
    v7 = a0->field_20;
    a0->field_20 = 0;
    core::ptr::drop_in_place<[alloc::string::String]>(v6, v7);
    a0->field_78 = 0;
    v8 = a0.seek_to_line(a0->field_50);
    if (v8)
        return v8;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (a0->field_58)
    {
        while (true)
        {
            v2 = 0;
            if (((char)a0->field_48->field_80(a0->field_40, &v0) & 1))
            {
                v10 = v9.from();
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                return v10;
            }
            if (!v9)
                break;
            if ((char)a0.should_squeeze_line(1, v2))
            {
                a0->field_78 = a0->field_78 + 1;
            }
            else
            {
                v4 = v2;
                memcpy(&v3, &v0, 16);
                v0 = 0;
                v1 = 1;
                v2 = 0;
                a0->padding_0[16].push(&v3);
            }
            if (a0->field_20 >= a0->field_58)
                break;
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return 0;
}
