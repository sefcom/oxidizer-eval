long long just::function::clean(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    char v5;  // [bp-0x10]

    v3.lexiclean(a2, a3);
    core::str::converts::from_utf8(&v0, v4, *((long long *)&v5));
    if (*((int *)&v0) == 1)
        core::option::unwrap_failed(&g_82fdf0); /* do not return */
    v0.to_vec(v1, v2);
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v2;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v0);
    a0->field_0 = 0;
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return a0;
}
