long long check_docs::validate_md_files(unsigned long long a0, unsigned long long a1, unsigned long long a2[3])
{
    unsigned long long v0;  // [bp-0x70]
    void* v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned short v4;  // [bp-0x28]

    v3.into_searcher(a2[1], a2[2]);
    v1 = 0;
    v2 = a2[2];
    v4 = 0;
    v0 = a1;
    a0.collect(&v0);
    core::ptr::drop_in_place<alloc::string::String>(a2);
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(a1);
    return a0;
}
