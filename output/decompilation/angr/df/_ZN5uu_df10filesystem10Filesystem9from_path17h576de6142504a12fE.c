long long uu_df::filesystem::Filesystem::from_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x77]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v12;  // rdx

    v4 = a3.as_ref();
    v5 = v12;
    v0.spec_to_string(&v4);
    uu_df::filesystem::mount_info_from_path(&v2, a1, a2, a3);
    v7 = a1;
    v8 = a2;
    memcpy(&v4, &v0, 16);
    v6 = v1;
    if (!v2)
    {
        v10 = v1;
        memcpy(&v9, &v0, 16);
        a0.from_mount(a1, a2, a3, &v9);
        return a0;
    }
    a0->field_8 = v3;
    a0->field_0 = 0x8000000000000000;
    core::ptr::drop_in_place<uu_df::filesystem::Filesystem::from_path<&&alloc::string::String>::{{closure}}>(&v4);
    return a0;
}
