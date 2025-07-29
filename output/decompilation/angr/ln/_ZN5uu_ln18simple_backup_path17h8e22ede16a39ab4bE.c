long long uu_ln::simple_backup_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    int v3;  // [bp-0x38], Other Possible Types: char
    unsigned long long v4;  // [bp-0x28]

    v0.try_from(a1, a2);
    if ((v0 & 1))
        core::option::unwrap_failed(&g_588270); /* do not return */
    v0.to_vec(v1, v2);
    v4 = v2;
    memcpy(&v3, &v0, 16);
    v3.append_elements(a3, a4, &g_588020);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    return v4;
}
