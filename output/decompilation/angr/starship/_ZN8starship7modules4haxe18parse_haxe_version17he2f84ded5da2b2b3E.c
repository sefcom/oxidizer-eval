long long starship::modules::haxe::parse_haxe_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned int
    char v1;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x88]
    char v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x60]
    char v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]

    v0.new("(?:[0-9a-zA-Z][-+0-9.a-zA-Z]+)Error in module `helm`:\nsrc/modules/helm.rs", 30);
    if (!*((long long *)&v0))
    {
        core::ptr::drop_in_place<core::result::Result<regex::regex::string::Regex,regex::error::Error>>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v8 = v3;
    memcpy(&v7, &v1, 16);
    v6 = *((long long *)&v0);
    v0 = 0;
    v1 = a1;
    v2 = a2;
    v3 = 0;
    v4 = a2;
    v5 = 1;
    v0.set_span(a2);
    memcpy(&v11, &v4, 16);
    memcpy(&v10, &v2, 16);
    memcpy(&v9, &v0, 16);
    v0.search_half(v6, *((long long *)&v7), &v9);
    if (*((long long *)&v0))
    {
        v0.to_vec(core::str::<impl str>::trim_matches(a1, a2), a2);
        *((unsigned long long *)&a0[16]) = v2;
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v6);
}
