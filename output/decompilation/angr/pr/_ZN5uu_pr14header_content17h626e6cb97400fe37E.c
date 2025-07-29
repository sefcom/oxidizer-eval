long long uu_pr::header_content(struct_1 *a0, struct_3 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    char *v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xb0]
    void* v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    unsigned long v8;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x80]
    char *v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    char *v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    struct_2 *v18;  // rax
    unsigned long v19;  // rax

    v0 = a2;
    if (!a1->field_141)
    {
        a0->field_0 = 0;
        a0->field_8 = 8;
        a0->field_10 = 0;
        return v19;
    }
    uucore::mods::locale::get_message(&v16, "pr-pagepr-error-reading-inputpr-error-unknown-filetypepr-error-is-directorypr-error-socket-not-supportedpr-error-no-such-file", 7);
    v6 = &a1->padding_0[120];
    v7 = <alloc::string::String as core::fmt::Display>::fmt;
    v8 = &a1->padding_0[48];
    v9 = <alloc::string::String as core::fmt::Display>::fmt;
    v10 = &v16;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v12 = &v0;
    v13 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v1 = &g_755fd0;
    v2 = 4;
    v5 = 0;
    v3 = &v6;
    v4 = 4;
    v14.map_or_else(&v1);
    ::0x5a6940::core::ptr::drop_in_place<alloc::string::String>(&v16);
    memcpy(&v1, &v14, 16);
    v3 = v15;
    v18 = 8.alloc_impl(120);
    if (!v18)
        alloc::alloc::handle_alloc_error(8, 120); /* do not return */
    v8 = v3;
    memcpy(&v6, &v1, 16);
    v18->field_0 = 0;
    v18->field_8 = 1;
    v18->field_10 = 0;
    v18->field_20 = 1;
    v18->field_28 = 0;
    v18->field_30 = *((int128_t *)&v6);
    v18->field_40 = v8;
    v18->field_48 = 0;
    v18->field_50 = 1;
    *((uint128_t *)&(&v18->field_50)[1]) = 0;
    *((unsigned long long *)((char *)&v18->field_58 + 8)) = 1;
    v18->field_68 = 0;
    a0->field_0 = 5;
    a0->field_8 = &v18->field_0;
    a0->field_10 = 5;
    return v18;
}
