long long uu_tail::follow::files::FileHandling::remove(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x108]
    char v1;  // [bp-0xf0]

    v0.canonicalize_path(a2, a3);
    v1.remove(a1 + 24, &v0);
    if (*((int *)&v1) == 3)
        core::option::unwrap_failed(&g_637b18); /* do not return */
    memcpy(a0, &v1, 216);
    ::0x511020::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    return a0;
}
