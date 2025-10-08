long long fd::output::print_entry_format(unsigned long long a0, void* a1, struct_0 *a2, unsigned long long a3)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char *v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    void* v9;  // [bp-0x40]
    char v10;  // [bp-0x30]
    unsigned long long v12;  // rax
    void* v13;  // r8
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax

    v12 = a1.stripped_path(a2->field_1e7);
    v13 = 0;
    if (!((char)(((0 ^ a2->field_168) & (0 ^ -(a2->field_168))) >> 63)))
        v13 = a2->field_170;
    v0.generate(a3, v12, v14, v13, a2->field_178);
    v10.from_utf8_lossy(v1, v2);
    v3 = &v10;
    v4 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v5 = &g_470810;
    v6 = 1;
    v9 = 0;
    v7 = &v3;
    v8 = 1;
    v15 = a0.write_fmt(&v5);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v0, v1);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v10);
    return v15;
}
