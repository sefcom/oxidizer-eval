long long starship::modules::kotlin::get_kotlin_version(unsigned long long *a0, void* a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    int v2;  // [bp-0x58]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x38]
    int v5;  // [bp-0x28]
    char v6;  // [bp-0x18]

    v0.exec_cmd(a1, a2, a3, &g_11f3e00, 1);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        memcpy(&v6, &v3, 16);
        v5 = v2;
        memcpy(&v4, &v0, 16);
        starship::utils::get_command_string_output(&v0, &v4);
        starship::modules::kotlin::parse_kotlin_version(a0, v1, (long long)v2);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
