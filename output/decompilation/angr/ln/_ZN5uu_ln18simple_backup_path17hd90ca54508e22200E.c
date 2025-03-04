double uu_ln::simple_backup_path::hd90ca54508e22200(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    int v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x28]
    int v6;  // xmm0
    int v7;  // ymm0

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
    if (!*((long long *)&v0))
    {
        ::0x4b8830::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hfc9b5b21d7faec10(&v0, *((long long *)&v1), *((long long *)&v2));
        v4 = *((long long *)&v2);
        v6 = *((int128_t *)&v0);
        v3 = v6;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h4be0e8df4d8349af(&v3, core::slice::iter::Iter$LT$T$GT$::make_slice::ha8b4fec3fb47d555(a3, a4 + a3), a2);
        a0->field_10 = v4;
        *((void*)&a0->field_0) = v3;
        return (unsigned long long)((v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3);
    }
    core::option::unwrap_failed::h0e11329e76906eaa(&g_52d0d8); /* do not return */
}
