int uu_tail::args::parse_obsolete::hed17c66d4ef02e92()
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x86]
    unsigned long long v4[3];  // rsi
    unsigned int v5;  // eax
    unsigned long long v6;  // r12
    unsigned long long *v7;  // rdi
    unsigned long long v9;  // rdx

    uu_tail::parse::parse_obsolete::h55ed70209ceceae1(&v1, v4);
    v5 = v2;
    if (v5 == 2)
    {
        v6 = v1;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, v4[1], v4[2]);
        goto *((int *)(4359796 + 4 * vvar_35{reg 112})) + 4359796;
    }
    else
    {
        if (v5 == 3)
            *(v7) = 5;
        else
            uu_tail::args::Settings::from_obsolete_args::h0e65a321efdd482a(v7, &v1, v9);
        return;
    }
}
