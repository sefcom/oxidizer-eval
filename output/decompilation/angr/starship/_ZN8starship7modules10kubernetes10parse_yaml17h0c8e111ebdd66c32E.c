long long starship::modules::kubernetes::parse_yaml(char *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x18]
    unsigned long long v5;  // rax

    v0.load_from_str(a1, a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v5 = v1;
        memcpy(&v3, &v2, 16);
        if (v5 != 0x8000000000000000)
        {
            memcpy(&v1, &v3, 16);
            v0 = v5;
            return (unsigned long long)starship::modules::kubernetes::parse_yaml::{{closure}}(a0, &v0);
        }
    }
    else
    {
        v5 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<yaml_rust2::yaml::Yaml>,yaml_rust2::scanner::ScanError>>(&v0);
    }
    *(a0) = 10;
    return v5;
}
