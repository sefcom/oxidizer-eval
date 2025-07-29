long long uu_truncate::truncate(char a0, unsigned long a1, struct_0 *a2, struct_0 *a3, unsigned long long a4, unsigned int a5)
{
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    struct struct_1 v4[16];  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    char v8;  // dil
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbx
    char *v11;  // rdi
    unsigned long v12;  // rsi

    v8 = a0 ^ 1;
    if (!((char)(((0 ^ *((long long *)&a2->field_0)) & (0 ^ -(*((long long *)&a2->field_0)))) >> 63)))
    {
        if (*((long long *)&a3->field_0) == 0x8000000000000000)
        {
            *((int128_t *)&v1) = *((int128_t *)&a2->field_0);
            v3 = a2->field_10;
            v9 = uu_truncate::truncate_reference_file_only(v2, a2->field_10, a4, a5, v8);
LABEL_49f495:
            v10 = v9;
            v11 = &(char)v1;
        }
        else
        {
            v12 = a2->field_10;
            v6 = a2->field_10;
            *((int128_t *)&v4[0]) = *((int128_t *)&a2->field_0);
            *((int128_t *)&v0) = *((int128_t *)&a3->field_0);
            v3 = a3->field_10;
            v10 = uu_truncate::truncate_reference_and_size(v5, v12, v2, a3->field_10, a4, a5, v8);
            ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
            v11 = &(char)v4;
        }
        ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(v11);
        return v10;
    }
    else if (*((long long *)&a3->field_0) != 0x8000000000000000)
    {
        *((int128_t *)&v1) = *((int128_t *)&a3->field_0);
        v3 = a3->field_10;
        v9 = uu_truncate::truncate_size_only(v2, a3->field_10, a4, a5, v8);
        goto LABEL_49f495;
    }
    else
    {
        core::panicking::panic("internal error: entered unreachable codea Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 40, &g_577ee8); /* do not return */
    }
}
