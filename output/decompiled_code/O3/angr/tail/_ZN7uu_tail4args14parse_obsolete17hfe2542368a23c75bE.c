int uu_tail::args::parse_obsolete::hfe2542368a23c75b()
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x86]
    unsigned long long v4[3];  // rsi
    unsigned int v5;  // eax
    unsigned long long v6;  // r12
    unsigned long long *v7;  // rdi
    unsigned long long v9;  // rdx

    uu_tail::parse::parse_obsolete::h38d0198c01039e5a(&v1, v4);
    v5 = v2;
    if (v5 == 2)
    {
        v6 = v1;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, v4[1], v4[2]);
        goto *((int *)(4358892 + vvar_35{reg 112} * 4)) + 4358892;
    }
    else
    {
        if (v5 == 3)
            *(v7) = 5;
        else
            uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(v7, &v1, v9);
        return;
    }
}
