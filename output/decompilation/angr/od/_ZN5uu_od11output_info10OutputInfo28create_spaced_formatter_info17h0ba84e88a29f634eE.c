long long uu_od::output_info::OutputInfo::create_spaced_formatter_info(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char *v4;  // [bp-0x10]
    char *v5;  // [bp-0x8]

    v0 = a3;
    v1 = a4;
    v2 = a1;
    v3 = a1 + a2 * 40;
    v4 = &v0;
    v5 = &v1;
    return a0.from_iter(&v2, &g_596400);
}
