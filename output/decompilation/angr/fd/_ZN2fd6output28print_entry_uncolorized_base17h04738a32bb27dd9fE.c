long long fd::output::print_entry_uncolorized_base(unsigned long long a0, void* a1, struct_0 *a2)
{
    int v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x58]
    char *v5;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x48]
    void* v7;  // [bp-0x40]
    char *v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v12;  // rax

    (char)v0.from_utf8_lossy(a1.stripped_path(a2->field_1e7), a2);
    if (!((char)(((0 ^ a2->field_168) & (0 ^ -(a2->field_168))) >> 63)))
    {
        fd::output::replace_path_separator(&v3, v1, v2, a2->field_170, a2->field_178);
        (char)v0.to_mut();
        core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        v2 = v5;
        *((int128_t *)&v0) = *((int128_t *)&v3);
    }
    v8 = &(char)v0;
    v9 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v3 = &g_470810;
    v4 = 1;
    v7 = 0;
    v5 = &v8;
    v6 = 1;
    v12 = a0.write_fmt(&v3);
    if (!v12)
        v12 = fd::output::print_trailing_slash(a0, a1, *((long long *)&a2->field_b8), a2->field_c0, 0);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v0);
    return v12;
}
