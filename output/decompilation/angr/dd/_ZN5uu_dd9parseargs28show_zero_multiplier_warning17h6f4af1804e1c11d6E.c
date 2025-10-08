long long uu_dd::parseargs::show_zero_multiplier_warning()
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    void* v5;  // [bp-0x78], Other Possible Types: char *
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char v8;  // [bp-0x60]
    void* v9;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    char *v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    char *v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x20]
    unsigned long long v18;  // rdx

    v9 = uucore::util_name();
    v10 = v18;
    v5 = &v9;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = &g_53d8f8;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint(&v0);
    v5 = 0;
    v6 = "0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs";
    v7 = 2;
    v8 = 1;
    v9 = 0;
    v10 = "00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs";
    v11 = 3;
    v12 = 1;
    v13 = &v5;
    v14 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = &v9;
    v16 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = &g_53d918;
    v1 = 3;
    v4 = 0;
    v2 = &v13;
    v3 = 2;
    return std::io::stdio::_eprint(&v0);
}
