long long uu_df::filesystem::Filesystem::from_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x77]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    char v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x28]
    unsigned long long v13;  // rdx

    v5 = a3.as_ref();
    v6 = v13;
    v0.spec_to_string(&v5);
    uu_df::filesystem::mount_info_from_path(&v2, a1, a2, a3);
    v8 = a1;
    v9 = a2;
    memcpy(&v5, &v0, 16);
    v7 = v1;
    if (v2 != 1)
    {
        v11 = v1;
        memcpy(&v10, &v0, 16);
        return a0.from_mount(a1, a2, v4, &v10);
    }
    a0->field_8 = v3;
    a0->field_0 = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<uu_df::filesystem::Filesystem::from_path<&&alloc::string::String>::{{closure}}>(&v5);
}
