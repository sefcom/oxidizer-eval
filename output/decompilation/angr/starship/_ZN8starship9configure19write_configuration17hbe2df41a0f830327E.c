void starship::configure::write_configuration(unsigned long a0, unsigned long long a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x6c]
    unsigned long long v2;  // [bp-0x60]
    char v3;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    uint128_t v6;  // [bp-0x40]
    char v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x18]
    unsigned long long v10;  // rax

    v0.get_config_path_os();
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        v3 = &g_11f3380;
        v4 = 1;
        v5 = 8;
        v6 = 0;
        std::io::stdio::_eprint(&v3);
        std::process::exit(1); /* do not return */
    }
    v8 = v2;
    memcpy(&v7, &v0, 16);
    v3.spec_to_string(a1);
    v0.create(&v7);
    if (v0 != 1)
        v10 = starship::configure::write_configuration::{{closure}}(v4, v5, v1);
    v10.expect();
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    return;
}
