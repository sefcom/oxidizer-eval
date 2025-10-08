void uu_env::check_and_handle_string_args(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_0 *a6)
{
    char v0;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx

    v7 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if (v7)
    {
        if (a6)
            uu_env::debug_print_args(a6->field_8, *((long long *)&a6->field_10));
        uu_env::parse_args_from_str(&v0, v7, v8);
        if (v0 == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = v1;
            *((unsigned long long *)&a0[8]) = v2;
        }
        else
        {
            v3 = v0;
            v4 = v1;
            v5 = v2;
            v6.into_iter(&v3);
            a5.extend_trusted(&v6);
            *((char *)&a0[8]) = 1;
            *((unsigned long long *)a0) = 0;
        }
        core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, a3);
    }
    else
    {
        core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, a3);
        *((char *)&a0[8]) = 0;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, a1);
    return;
}
