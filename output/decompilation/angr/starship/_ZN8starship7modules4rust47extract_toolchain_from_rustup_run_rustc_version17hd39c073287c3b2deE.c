void starship::modules::rust::extract_toolchain_from_rustup_run_rustc_version(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    char v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    int v4;  // [bp-0x48], Other Possible Types: char
    char v5;  // [bp-0x38]
    unsigned long long v7;  // r12
    unsigned long v8;  // rbp
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    if (a1->field_30)
    {
        v0.from_utf8(&a1->padding_0[24]);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v7 = *((long long *)&v3);
            if ((char)core::slice::<impl [T]>::starts_with(v2, v7, "error: toolchain '' is not installed\nError formatting `rust` version:\n", 18) && (char)core::slice::<impl [T]>::ends_with(v2, v7, "' is not installed\nError formatting `rust` version:\n", 19))
            {
                v8 = v7 - 19;
                v9 = 18.get(v8, v2, v7);
                if (!v9)
                    core::str::slice_error_fail(v2, v7, 18, v8, &g_11f6030); /* do not return */
                v4.to_vec(v9, v10);
                *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v5);
                *((void*)&(&a0->field_0)[1]) = v4;
                a0->field_0 = 1;
                core::ptr::drop_in_place<alloc::string::String>(&v1);
            }
            else
            {
                core::ptr::drop_in_place<alloc::string::String>(&v1);
                a0->field_0 = 4;
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::string::FromUtf8Error>>(&v0);
            a0->field_0 = 4;
        }
    }
    else
    {
        (char)v0.from_utf8(a1);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v3);
            *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
            a0->field_0 = 0;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::string::FromUtf8Error>>(&(char)v0);
            a0->field_0 = 4;
        }
        a1 = &a1->padding_0[24];
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a1);
    return;
}
