long long uu_ls::dired::print_dired_output(struct_0 *a0, unsigned long long a1[6], unsigned long long a2)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    char *v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    void* v6;  // [bp-0x20]
    unsigned long long v8;  // rax

    v8 = a2.flush();
    if (v8)
        return v8.from();
    if (a1[2])
        uu_ls::dired::print_positions("//DIRED////SUBDIRED//--dired-D", 9, a1[1], a1[2]);
    if (a0->field_ee)
        uu_ls::dired::print_positions("//SUBDIRED//--dired-D", 12, a1[4], a1[5]);
    v0 = &a0[1].padding_0[13];
    v1 = <uucore::features::quoting_style::QuotingStyle as core::fmt::Display>::fmt;
    v2 = &g_6866c0;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    std::io::stdio::_print(&v2);
    return 0;
}
