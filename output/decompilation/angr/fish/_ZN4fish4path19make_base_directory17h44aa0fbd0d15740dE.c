long long fish::path::make_base_directory(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v4;  // [bp-0x98], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x90]
    void* v6;  // [bp-0x88]
    char v7;  // [bp-0x78], Other Possible Types: unsigned int
    char v8;  // [bp-0x74]
    unsigned long long v9;  // [bp-0x68]
    char v10;  // [bp-0x60]
    char v11;  // [bp-0x48]
    unsigned long long v13;  // rax
    unsigned long long v14;  // r13
    char *v15;  // r15
    unsigned long long v16;  // rax
    unsigned int v17;  // r14d
    char v18;  // bpl

    v13 = fish::env::environment::EnvStack::globals();
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v10.getf_unless_empty(v13, a1, a2, 20);
    v14 = *((long long *)&v10);
    if (v14)
    {
        v15 = &v10;
        v7.as_string(&v10);
        v0.add(&v7, "/", 5);
    }
    else
    {
        v11.getf_unless_empty(v13, "H", 4, 20);
        if (!*((long long *)&v11))
            goto LABEL_13f0a37;
        v15 = &v11;
        v7.as_string(&v11);
        v0.add(&v7, a3, a4);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    v6 = v3;
    *((int128_t *)&v4) = *((int128_t *)&v1);
    core::ptr::drop_in_place<fish::env::var::EnvVar>(v15);
LABEL_13f0a37:
    errno::set_errno(0);
    if (v6)
    {
        fish::common::wcs2osstring(&v7, 4, v6);
        v16 = fish::path::create_dir_all_with_mode(&v7);
        if (v16)
        {
            v0 = v16;
            std::io::error::repr_bitpacked::decode_repr(&v7, v16);
            v17 = *((int *)&v8);
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            v18 = 0;
            if ((char)v7)
                v17 = 0;
        }
        else
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, 4, v6);
            v3 = v9;
            memcpy(&v1, &v7, 16);
            v1.push(47);
            v18 = fish::path::path_remoteness(v2, v3);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            v17 = 0;
        }
    }
    else
    {
        v17 = 2;
        v18 = 0;
    }
    a0->field_10 = v6;
    a0->field_0 = (int128_t)v4;
    a0->field_1d = v18;
    a0->field_18 = v17;
    a0->field_1c = v14;
    return v6;
}
