long long uu_stty::control_char_to_string(unsigned long long a0, char a1)
{
    unsigned int v0;  // [bp-0x84]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    char *v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    void* v15;  // [bp-0x10]
    char v17;  // al
    unsigned long long v18;  // rcx
    unsigned int v19;  // edx

    if (!a1)
        return a0.to_vec("<undef>", 7);
    v17 = a1 & 127;
    v18 = 1;
    *((int *)&v1) = (a1 >= 0 ? 1 : "M-^ = min = ; time = ;\neraseeofeolswtchstartrprntweraselnextdiscard:");
    v2 = a1 >> 6 & 2;
    if (v17 < 32)
    {
        v17 |= 64;
        v19 = &g_41b212;
    }
    else if (v17 == 127)
    {
        v19 = &g_41b212;
        v17 = 63;
    }
    else
    {
        v19 = 1;
        v18 = 0;
    }
    v3 = v19;
    v4 = v18;
    v0 = v17;
    v5 = &v1;
    v6 = <&T as core::fmt::Display>::fmt;
    v7 = &v3;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = &v0;
    v10 = <char as core::fmt::Display>::fmt;
    v11 = &g_41b1e0;
    v12 = 3;
    v15 = 0;
    v13 = &v5;
    v14 = 3;
    return a0.map_or_else(&v11);
}
