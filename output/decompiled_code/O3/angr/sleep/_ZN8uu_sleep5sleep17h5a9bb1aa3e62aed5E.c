long long uu_sleep::sleep::h5a9bb1aa3e62aed5(unsigned long long a0, unsigned long a1)
{
    char v0;  // [sp-0x89]
    char v1;  // [bp-0x88]
    unsigned int v2;  // [sp-0x70]
    char v3;  // [bp-0x68]
    unsigned int v6;  // edx

    v0 = 0;
    fundu::standard::parser::DurationParser::with_time_units::h819e4e224029609f(&v3, &g_413d4c, 4);
    if (!v0)
    {
        std::thread::sleep::hdad53e7e356cecc8(_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h4f3c55f5a02781ba(a0, a1 * 16 + a0, &v3, &v0), v6);
        return 0;
    }
    ::0x4ab7b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4cbe5d7d7f718c74(&v1, 1, 0);
    v2 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::hb2cad88d00ff623c(&v1);
}
