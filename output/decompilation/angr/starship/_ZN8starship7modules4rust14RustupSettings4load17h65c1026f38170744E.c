void starship::modules::rust::RustupSettings::load(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x28]

    home::rustup_home(&v3);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v3);
    }
    else
    {
        memcpy(&v1, &v4, 16);
        v0 = v3;
        v5.join(v1, v2, "settings.tomlRustup settings version is , expected \"12\"", 13);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        std::fs::read_to_string(&v3, &v5);
        if (v3 != 0x8000000000000000)
        {
            memcpy(&v1, &v4, 16);
            v0 = v3;
            a0.from_toml_str(v1, v2);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            return;
        }
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v3);
    }
    *(a0) = 9223372036854775809;
    return;
}
