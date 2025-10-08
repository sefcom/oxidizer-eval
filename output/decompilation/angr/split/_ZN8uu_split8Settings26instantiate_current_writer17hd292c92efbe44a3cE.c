long long uu_split::Settings::instantiate_current_writer(unsigned long long a0[2], unsigned long long a1[20], unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char *v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    char *v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    void* v8;  // [bp-0x58]
    char v9;  // [bp-0x48]
    unsigned long long v11;  // rax
    unsigned long v12;  // rsi

    v0 = a2;
    v1 = a3;
    if (!(char)uu_split::platform::unix::paths_refer_to_same_file(a1[15], a1[16], a2, a3))
    {
        v12 = (a1[17] == 0x8000000000000000 ? 0 : a1[18]);
        return uu_split::platform::unix::instantiate_current_writer(a0, (a1[17] == 0x8000000000000000 ? 0 : a1[18]), a1[19], a2, a3, a4);
    }
    v2 = &v0;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = &g_50aea8;
    v5 = 2;
    v8 = 0;
    v6 = &v2;
    v7 = 1;
    v9.map_or_else(0, &v4);
    v11 = 40._new(v9.new(), &g_50ad88);
    a0[1] = v11;
    a0[0] = 0x8000000000000000;
    return v11;
}
