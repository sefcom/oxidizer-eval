long long uu_ln::simple_backup_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax

    core::str::converts::from_utf8(&v0, a1, a2);
    if (*((int *)&v0) == 1)
        core::option::unwrap_failed(&g_4f6200); /* do not return */
    v0.to_vec(v1, *((long long *)&v2));
    v0.spec_extend(a3, a4 + a3);
    v4 = *((long long *)&v2);
    a0->field_10 = v4;
    a0->field_0 = *((int128_t *)&v0);
    return v4;
}
