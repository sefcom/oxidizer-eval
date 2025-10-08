long long fuel_core_version::write_version_to_file(unsigned long long a0[5], unsigned long long a1)
{
    unsigned long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned long v2;  // [bp-0xa8]
    char v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    char *v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    char *v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char *v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    char *v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    void* v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned long v19;  // r14

    v0 = a0[2];
    v1 = a0[3];
    v2 = a0[4];
    v6 = &v0;
    v7 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v8 = &v1;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v10 = &v2;
    v11 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v12 = &g_52fb68;
    v13 = 4;
    v16 = 0;
    v14 = &v6;
    v15 = 3;
    v3.map_or_else(&v12);
    v18 = std::fs::write(a1, v4, v5);
    v19 = (!v18 ? 0 : v18.from_std(&g_52fba8));
    core::ptr::drop_in_place<alloc::string::String>(v3, v4);
    core::ptr::drop_in_place<semver::Version>(a0);
    return v19;
}
