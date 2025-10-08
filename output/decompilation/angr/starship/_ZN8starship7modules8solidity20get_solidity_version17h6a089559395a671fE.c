long long starship::modules::solidity::get_solidity_version(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x78]
    char v1;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50], Other Possible Types: unsigned long long
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x38]

    v3 = a2;
    v4 = a3 * 16 + a2;
    v7.find_map(&v3, a1);
    if (!((char)(((0 ^ *((long long *)&v7)) & (0 ^ -(*((long long *)&v7)))) >> 63)))
    {
        starship::utils::get_command_string_output(&v5, &v7);
        memcpy(&v1, &v6, 16);
        v0 = v5;
        starship::modules::solidity::parse_solidity_version(a0, v1, v2);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
