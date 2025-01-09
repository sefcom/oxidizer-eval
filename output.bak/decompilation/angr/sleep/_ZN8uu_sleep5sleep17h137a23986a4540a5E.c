long long uu_sleep::sleep::h137a23986a4540a5(unsigned long long a0, unsigned long a1)
{
    char v0;  // [sp-0x89]
    char v1;  // [bp-0x88]
    unsigned int v2;  // [sp-0x70]
    char v3;  // [bp-0x68]
    unsigned int v6;  // edx

    v0 = 0;
    fundu::standard::parser::DurationParser::with_time_units::hbe13b4e07c1ddf4b(&v3, &g_40ab78, 4);
    if (!v0)
    {
        std::thread::sleep::hdad53e7e356cecc8(_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h372e90875fe935f3(a0, a1 * 16 + a0, &v3, &v0), v6);
        return 0;
    }
    ::0x4ab800::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb47bd66474e52f21(&v1, 1, 0);
    v2 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::h4f6840875b47ef13(&v1);
}
