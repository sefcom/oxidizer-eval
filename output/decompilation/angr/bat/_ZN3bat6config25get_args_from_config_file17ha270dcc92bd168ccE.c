void bat::config::get_args_from_config_file(unsigned long long a0)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    void* v5;  // [bp-0x28]
    char v6;  // [bp-0x20]

    v3 = 0;
    v4 = 1;
    v5 = 0;
    bat::config::system_config_file(&v6);
    std::fs::read_to_string(&v0, &v6);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
    }
    else
    {
        v3.spec_extend(v1, v2 + v1);
        v3.push(10);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    bat::config::config_file(&v6);
    std::fs::read_to_string(&v0, &v6);
    if (v0 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
    }
    else
    {
        v3.spec_extend(v1, v2 + v1);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    bat::config::get_args_from_str(a0, 1, 0);
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
