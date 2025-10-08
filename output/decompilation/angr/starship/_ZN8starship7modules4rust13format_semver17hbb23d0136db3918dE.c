long long starship::modules::rust::format_semver(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    char *v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    void* v8;  // [bp-0x28]
    unsigned long long v10;  // rdx

    v2 = core::str::<impl str>::find(a1, a2, 45).map_or(v10, a1, a2, a1, a2);
    v3 = v10;
    v0 = &v2;
    v1 = <&T as core::fmt::Display>::fmt;
    v4 = &g_11f37f0;
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    return a0.map_or_else(0, a2, &v4);
}
