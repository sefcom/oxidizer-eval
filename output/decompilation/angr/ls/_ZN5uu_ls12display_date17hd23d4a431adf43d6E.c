long long uu_ls::display_date(unsigned int a0, void* a1, unsigned int a2, unsigned int a3, unsigned long long a4)
{
    char v0;  // [bp-0x78]
    int v1;  // [bp-0x70]
    char v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x50]
    unsigned int v4[1][3];  // [bp-0x48]
    char v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v8;  // rdx

    uu_ls::get_time(&v0, a0, a1);
    if (!(v0 & 1))
    {
        a4.spec_extend("???_-.:~/", "_-.:~/", &g_69f830);
        return 0;
    }
    v6 = v3;
    memcpy(&v5, &v2, 16);
    *((void*)&v4[0]) = v1;
    if (!(unsigned long long)a1 + 184.format(&v4, a4, a2, a3))
        return 0;
    return uu_ls::display_date::{{closure}}(v8);
}
