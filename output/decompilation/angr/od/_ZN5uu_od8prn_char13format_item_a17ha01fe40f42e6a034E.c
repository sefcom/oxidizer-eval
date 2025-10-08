long long uu_od::prn_char::format_item_a(unsigned long long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]

    v0 = &(&_ZN5uu_od8prn_char7A_CHARS17h9f16ee689789fd1aE)[16 * (a1 & 127)];
    v1 = &v0;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &g_41a940;
    v4 = 1;
    v7 = &g_41d150;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    a0.map_or_else(&v3);
    return a0;
}
