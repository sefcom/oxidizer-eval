long long fish::reader::ReaderData::apply_commandline_state_changes(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x108]
    char v1;  // [bp-0x100]
    char v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    void* v11;  // [bp-0x98]
    void* v12;  // [bp-0x88]
    void* v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    void* v15;  // [bp-0x68]
    char v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x50]
    uint128_t v18;  // [bp-0x48]
    unsigned long v19;  // [bp-0x38]
    unsigned long v21;  // rbp
    char *v22;  // rdi
    char v23;  // r15b
    unsigned long long v24;  // rax

    fish::reader::commandline_get_state(&v1, 0);
    if ((char)v3.equal(v4, a0->field_28, a0->field_30) && v9 == a0->field_78)
    {
        v21 = v5;
        if (v5 == 0x8000000000000000)
        {
            v21 = 0x8000000000000000;
        }
        else
        {
            v22 = &v5;
            if (!a0->field_271)
            {
LABEL_13f9f27:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v22);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
                return core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v10);
            }
            v22 = &v5;
            if ((char)v6.equal(v7, a0->field_198, a0->field_1a0) && v8 == a0->field_1e8)
                goto LABEL_13f9f27;
            v0 = v8;
            v17 = v7;
            memcpy(&v16, &v5, 16);
            v11 = 0;
            v18 = 0;
            v19 = a0->field_1a0;
            v13 = 0;
            v14 = 4;
            v15 = 0;
            v12 = 0;
            a0.push_edit(1, &v11);
            v23 = 1;
            a0->padding_80[240].set_position(v0);
        }
    }
    else
    {
        a0.clear_pager();
        a0.set_buffer_maintaining_pager(v3, v4, v9);
        a0->field_845 = 1;
        v5 = v21;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
    v24 = core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v10);
    if (v23)
    {
        return v24;
    }
    else if (v21 != 0x8000000000000000)
    {
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
    }
    else
    {
        return v24;
    }
}
