long long fish::path::create_dir_all_with_mode(unsigned long long a0[3])
{
    unsigned int v0;  // [bp-0x20]
    char v1;  // [bp-0x1c]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    v1 = 1;
    v0 = 448;
    v4 = v0.create(a0[1].as_ref(a0[2]), v3);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a0[0], a0[1]);
    return v4;
}
