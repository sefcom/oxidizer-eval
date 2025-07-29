void uu_env::check_and_handle_string_args(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_0 *a6)
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    char v6;  // [bp-0x78], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    char v12;  // [bp-0x48]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    v4 = a1;
    v5 = a2;
    v3 = 0x8000000000000000;
    v1 = a3;
    v2 = a4;
    v0 = 0x8000000000000000;
    v13 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if (v13)
    {
        if (a6)
            uu_env::debug_print_args(a6->field_8, *((long long *)&a6->field_10));
        uu_env::parse_args_from_str(&v6, v13, v14);
        if (v6 == 0x8000000000000000)
        {
            a0->field_0 = v7;
            *((unsigned long long *)&a0->field_8) = v8;
            ::0x4b2c80::core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v0);
        }
        else
        {
            v9 = v6;
            v10 = v7;
            v11 = v8;
            v12.into_iter(&v9);
            a5.spec_extend(&v12, &g_5a9ab8);
            a0->field_8 = 1;
            a0->field_0 = 0;
            ::0x4b2c80::core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v0);
        }
    }
    else
    {
        ::0x4b2c80::core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v0);
        a0->field_8 = 0;
        a0->field_0 = 0;
    }
    ::0x4b2c80::core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v3);
    return;
}
