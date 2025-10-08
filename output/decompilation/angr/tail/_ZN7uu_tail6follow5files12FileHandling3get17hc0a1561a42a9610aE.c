long long uu_tail::follow::files::FileHandling::get(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    v0.canonicalize_path(a1, a2);
    v3 = a0 + 24.get_inner(&v0);
    if (!v3)
        core::option::unwrap_failed(&g_5733d8); /* do not return */
    core::ptr::drop_in_place<std::path::PathBuf>(v0, *((long long *)&v1));
    return v3 + 24;
}
