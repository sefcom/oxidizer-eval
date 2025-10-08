long long zoxide::config::maxage(unsigned long long a0)
{
    void* v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]

    std::env::var_os(&v2, "_ZO_MAXAGEinvalid unicode in _ZO_MAXAGEunable to parse _ZO_MAXAGE as integer: ", 10);
    v1 = 0x40c3880000000000;
    v0 = 0;
    return a0.map_or(&v2, &v0);
}
