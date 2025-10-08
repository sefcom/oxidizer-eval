long long uu_chroot::enter_chroot(unsigned long long a0, unsigned long long a1, char a2)
{
    char *v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    char v4;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x80]
    char *v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    void* v8;  // [bp-0x68]
    char v9;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned long long v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    unsigned long long v13;  // rax
    unsigned int v14;  // eax
    unsigned long long v15;  // rdx

    v9.to_vec(a0, a1);
    v4.spec_new_impl(&v9);
    v13 = v4.unwrap();
    v14 = chroot(v13);
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v13, v15);
    if (v14)
    {
        v2 = a0;
        v3 = a1;
        v0 = &v2;
        v1 = <std::path::Display as core::fmt::Display>::fmt;
        v4 = &g_4195b0;
        v5 = 1;
        v8 = 0;
        v6 = &v0;
        v7 = 1;
        v11.map_or_else(&v4);
        v10 = *(__errno_location()) * 0x100000000 | 2;
        v9 = 0;
        return v9.new();
    }
    if (a2)
        return 0;
    std::env::set_current_dir().unwrap();
    return 0;
}
