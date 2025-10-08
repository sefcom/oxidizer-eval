void bat::assets::build_assets::acknowledgements::normalize_license_text(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    char v5;  // [bp-0x78]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x48]

    v3.new("\\s +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 2);
    v7.unwrap(&v3, &g_acdff0);
    v0.replacen(&v7, a1, a2);
    v3.new(" +Failed to load one or more themes from '' (reason: '')\nNo themes were found in '', using the default set\n", 2);
    v6.unwrap(&v3, &g_ace008);
    v3.replacen(&v6, v1, v2);
    a0.spec_to_string(v4, *((long long *)&v5));
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v6);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v0);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v7);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v3);
    return;
}
