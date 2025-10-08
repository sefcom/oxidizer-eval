long long starship::modules::nix_shell::NixShellType::in_new_nix_shell()
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    char v7;  // [bp-0x10]
    unsigned int v9;  // eax

    v3.get_env("PATHC++ trueTERM", 4);
    if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)))
    {
        v2 = v5;
        memcpy(&v0, &v3, 16);
        v3 = std::path::Path::to_path_buf;
        v4 = v1;
        v5 = v2;
        v6 = std::sys::pal::unix::os::split_paths::is_separator;
        v7 = 0;
        v9 = v3.try_fold().eq(1);
        core::ptr::drop_in_place<alloc::string::String>(&v0);
        return v9;
    }
    return 0;
}
