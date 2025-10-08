long long uu_touch::prepend_century(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x7c]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    char *v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    char *v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    char *v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    void* v11;  // [bp-0x28]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v1 = a1;
    v2 = a2;
    v13 = a1.get(a2);
    if (!v13)
        core::str::slice_error_fail(a1, a2, 0, 2, &g_679ed8); /* do not return */
    v14 = ::0x530460::core::num::<impl u32>::from_ascii_radix(v13);
    if (!((char)v14 & 1))
    {
        v0 = 19 + ((unsigned int)(v14 >> 32) < 69);
        v3 = &v0;
        v4 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v5 = &v1;
        v6 = <&T as core::fmt::Display>::fmt;
        v7 = &g_4574b0;
        v8 = 2;
        v11 = 0;
        v9 = &v3;
        v10 = 2;
        return a0.map_or_else(&v7);
    }
    a0[1] = uu_touch::prepend_century::{{closure}}(a1, a2);
    a0[2] = &g_679e10;
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
