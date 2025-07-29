long long uu_wc::escape_name_wrapper(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30], Other Possible Types: unsigned long long
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]

    uucore::features::quoting_style::locale_aware_escape_name(&v0, a1, a2, 1);
    v3.into_string(&v0);
    memcpy(&v1, &v4, 16);
    v2 = *((long long *)&v5);
    v0 = v3;
    a0.expect(&v0);
    return a0;
}
