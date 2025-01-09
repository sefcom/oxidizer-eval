long long uu_tail::args::parse_obsolete::hfe2542368a23c75b(unsigned long long *a0, unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x86]
    unsigned int v4;  // eax
    unsigned long long v5;  // r12

    uu_tail::parse::parse_obsolete::h38d0198c01039e5a(&v1, a1);
    v4 = v2;
    if (v4 == 2)
    {
        v5 = v1;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, a1[1], a1[2]);
        goto *((int *)(4358892 + vvar_38{reg 112} * 4)) + 4358892;
    }
    else if (v4 != 3)
    {
        uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(a0, &v1, a2);
        return a0;
    }
    else
    {
        *(a0) = 5;
        return a0;
    }
}
