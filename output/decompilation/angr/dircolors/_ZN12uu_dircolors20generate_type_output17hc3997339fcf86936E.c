long long uu_dircolors::generate_type_output(struct_0 *a0, char *a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    int v3;  // [bp-0x20], Other Possible Types: char
    char v4;  // [bp-0x10]

    if (*(a1) == 2)
    {
        v0.from_iter(_ZN6uucore8features6colors10FILE_TYPES17h68d78252f17229b3E, g_58bb30 * 48 + _ZN6uucore8features6colors10FILE_TYPES17h68d78252f17229b3E, &g_589de8);
        alloc::str::join_generic_copy(&v3, v1, v2, "\n:/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
    }
    else
    {
        v0.from_iter(_ZN6uucore8features6colors10FILE_TYPES17h68d78252f17229b3E, g_58bb30 * 48 + _ZN6uucore8features6colors10FILE_TYPES17h68d78252f17229b3E, &g_589de8);
        alloc::str::join_generic_copy(&v3, v1, v2, ":/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
    }
    a0->field_10 = *((long long *)&v4);
    *((void*)&a0->field_0) = v3;
    ::0x4ada80::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return a0;
}
