long long backdoorautomater::sanitizer::sanitize_service(struct_0 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    uint128_t v5;  // [bp-0x28]

    v2.new("[^a-zA-Z0-9.]+Invalid character in service name !\n", 14);
    v0.unwrap(&v2, &g_62a478);
    if ((char)v0.is_match_at(*((long long *)&v1), *((long long *)&a1->padding_1[7]), a1->field_10))
    {
        v2 = &g_62a490;
        v3 = 1;
        v4 = 8;
        v5 = 0;
        core::panicking::panic_fmt(&v2, &g_62a4a0); /* do not return */
    }
    a0->field_10 = a1->field_10;
    *((int128_t *)&a0->field_0) = *((int128_t *)&a1->field_0);
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v0);
}
