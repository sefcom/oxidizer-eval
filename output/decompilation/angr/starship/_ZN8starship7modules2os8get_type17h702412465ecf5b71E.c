long long starship::modules::os::get_type(unsigned long long a0, char a1, unsigned long long a2)
{
    char v0;  // [bp-0x41]
    char *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    void* v7;  // [bp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = <os_info::os_type::Type as core::fmt::Debug>::fmt;
    v3 = &g_525500;
    v4 = 1;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    return a0.map_or_else(0, a2, &v3);
}
