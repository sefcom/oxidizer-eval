long long starship::modules::package::get_setup_cfg_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    char v0;  // [bp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    unsigned long long v2;  // [bp-0x198]
    char v3;  // [bp-0x188], Other Possible Types: unsigned long long
    char v4;  // [bp-0x180]
    char v5;  // [bp-0x178]
    unsigned long long v6;  // [bp-0xd8]
    char v7;  // [bp-0xd0]
    unsigned long long v9;  // r15
    unsigned long long v10;  // rdx

    v3.read_file_from_pwd(a1, "setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 9);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v2 = *((long long *)&v5);
    memcpy(&v0, &v3, 16);
    v3.load_from_str(v1, *((long long *)&v5));
    if (v3 == 0x8000000000000000)
    {
        v3.drop_in_place<core::result::Result<ini::Ini,ini::ParseError>>();
        *(a0) = 0x8000000000000000;
    }
    else
    {
        memcpy(&v7, &v4, 168);
        v6 = v3;
        v9 = v6.get_from();
        if (!v9 || (char)core::slice::<impl [T]>::starts_with(v9, v10, "attr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 5) || (char)core::slice::<impl [T]>::starts_with(v9, v10, "file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 5))
            *(a0) = 0x8000000000000000;
        else
            starship::modules::package::format_version(a0, v9, v10, a2[6], a2[7]);
        core::ptr::drop_in_place<ini::Ini>(&v6);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
