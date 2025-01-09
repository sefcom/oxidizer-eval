long long uu_tail::paths::path_is_tailable::h49529ca9961beb32(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v6;  // rsi

    v3 = std::path::Path::is_file::h82f08f46fb8d8099(a0, a1);
    v4 = v3 | -0x100 | 1;
    if ((char)v3)
        return v4;
    std::fs::metadata::h5a76b0b01e9dc15d(&v0, a0, a1);
    v6 = *((long long *)&v1);
    if (*((long long *)&v0) == 2)
    {
        ::0x510000::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(2, v6);
        return 0;
    }
    ::0x510000::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(*((long long *)&v0), v6);
    std::fs::metadata::h5a76b0b01e9dc15d(&v0, a0, a1);
    v4 = core::result::Result$LT$T$C$E$GT$::map_or::hd585a8198f0cbe88(&v0);
    return v4;
}
