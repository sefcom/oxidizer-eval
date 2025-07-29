void uu_tail::follow::files::FileHandling::insert(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, char a4)
{
    char v0;  // [bp-0x210]
    unsigned long long v1;  // [bp-0x200]
    char v2;  // [bp-0x1f8]
    unsigned long long v3;  // [bp-0x1e8]
    int v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1c8]
    int v6;  // [bp-0xf8], Other Possible Types: char
    char v7;  // [bp-0xe8]

    v0.canonicalize_path(a1, a2);
    if (a4)
    {
        v6.clone(&v0);
        v5 = *((long long *)&v7);
        v4 = v6;
        ::0x5114d0::core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a0);
        a0->field_10 = v5;
        *((void*)&a0->field_0) = v4;
    }
    v3 = v1;
    memcpy(&v2, &v0, 16);
    memcpy(&v6, a3, 216);
    v4.insert(a0 + 1, &v2, &v6);
    core::ptr::drop_in_place<core::option::Option<uu_tail::follow::files::PathData>>(&v4);
    return;
}
