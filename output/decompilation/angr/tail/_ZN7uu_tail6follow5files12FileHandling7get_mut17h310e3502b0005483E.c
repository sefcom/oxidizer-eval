long long uu_tail::follow::files::FileHandling::get_mut(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    v0.canonicalize_path(a1, a2);
    v2 = a0 + 24.get_inner_mut(&v0);
    if (!v2)
        core::option::unwrap_failed(&g_637b48); /* do not return */
    ::0x511020::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return v2 + 24;
}
