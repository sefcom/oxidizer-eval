void uu_ptx::format_tex_field(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    int v3;  // [bp-0x20], Other Possible Types: char
    char v4;  // [bp-0x10]

    v0.from_iter(a1, a2 + a1, &g_73b350);
    alloc::str::join_generic_copy(&v3, v1, v2, 1, 0);
    a0->field_10 = *((long long *)&v4);
    *((void*)&a0->field_0) = v3;
    ::0x59e700::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return;
}
