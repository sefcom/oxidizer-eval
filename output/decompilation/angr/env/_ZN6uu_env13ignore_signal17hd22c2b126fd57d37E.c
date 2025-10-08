long long uu_env::ignore_signal(unsigned int a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x9c]
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    char *v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    char *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    char *v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    void* v13;  // [bp-0x38]
    char v14;  // [bp-0x28]
    unsigned int v15;  // [bp-0x10]
    unsigned long long v17;  // rdx

    nix::sys::signal::signal(&v1, a0, 1, a3);
    if (*((int *)&v1) != 4)
        return 0;
    v0 = a0;
    v3 = *((int *)&v2).desc();
    v4 = v17;
    v5 = &v0;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v7 = &v3;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &g_510ce8;
    v10 = 2;
    v13 = 0;
    v11 = &v5;
    v12 = 2;
    v14.map_or_else(&v9);
    v15 = 125;
    return v14.new();
}
