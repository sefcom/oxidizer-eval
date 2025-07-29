long long uu_dd::progress::ProgUpdate::write_io_lines(struct_0 *a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0xa4]
    int v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x90]
    char v3;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x80]
    char *v5;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x70]
    void* v7;  // [bp-0x68]
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    int v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x38]
    char v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x20]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v15 = a0->padding_0[16].report(a1);
    if (v15)
        return v15;
    v16 = a0[1].padding_0[4].report(a1);
    if (v16)
    {
        return v16;
    }
    else if (a0->field_28)
    {
        v0 = a0->field_28;
        v1.to_vec("count\ndd-progress-truncated-recordbytessiiec", 5);
        v3.spec_to_string(&v0);
        v11 = v2;
        v10 = v1;
        memcpy(&v12, &v3, 16);
        v13 = v5;
        v3.from_iter(&v10);
        uucore::mods::locale::get_message_with_args(&v1, "dd-progress-truncated-recordbytessiiec", 28, &v3);
        v8 = &v1;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &g_5df1b0;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        v17 = a1.write_fmt(&v3);
        ::0x4d5800::core::ptr::drop_in_place<alloc::string::String>(&v1);
        return v17;
    }
    else
    {
        return 0;
    }
}
