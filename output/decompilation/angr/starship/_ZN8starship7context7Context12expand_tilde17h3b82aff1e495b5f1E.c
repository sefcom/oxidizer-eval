long long starship::context::Context::expand_tilde(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    if (!a1->field_0[1].starts_with(a1->field_8, "~/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/which-8.0.0/src/helper.rs", 1))
    {
        a0->field_10 = a1->field_8;
        *((unsigned long long [2])&a0->field_0) = a1->field_0;
        return a0;
    }
    v7 = a1->field_0[1].strip_prefix(a1->field_8).unwrap(v6, &g_11f34d0);
    starship::utils::home_dir(&v3);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
        core::option::unwrap_failed(&g_11f34e8); /* do not return */
    memcpy(&v0, &v3, 16);
    v2 = *((long long *)&v4);
    a0.join(v1, *((long long *)&v4), v7, v6);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(a1);
    return a0;
}
