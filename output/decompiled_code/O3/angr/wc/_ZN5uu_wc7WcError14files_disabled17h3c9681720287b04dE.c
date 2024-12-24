double uu_wc::WcError::files_disabled::h3c9681720287b04d(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    int v3;  // [bp-0x28], Other Possible Types: char
    unsigned long long v4;  // [sp-0x18]
    int v6;  // xmm0
    int v7;  // ymm0

    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v0, a1, a2);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        v4 = *((long long *)&v2);
        v6 = *((int128_t *)&v0);
        v3 = v6;
    }
    else
    {
        ::0x4b7f90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h811963de1977264a(&v3, *((long long *)&v1), *((long long *)&v2));
    }
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
    *((void*)&(&a0->field_0)[1]) = v3;
    a0->field_0 = 9223372036854775809;
    return (unsigned long long)(v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3);
}
