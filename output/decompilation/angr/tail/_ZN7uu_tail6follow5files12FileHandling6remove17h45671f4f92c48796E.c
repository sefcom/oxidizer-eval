void uu_tail::follow::files::FileHandling::remove(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned long long
    char v1;  // [bp-0x100]
    char v2;  // [bp-0xf0]

    v0.canonicalize_path(a2, a3);
    v2.remove(a1 + 24, &v0);
    if (*((int *)&v2) == 3)
        core::option::unwrap_failed(&g_5733c0); /* do not return */
    memcpy(a0, &v2, 216);
    core::ptr::drop_in_place<std::path::PathBuf>(v0, *((long long *)&v1));
    return;
}
