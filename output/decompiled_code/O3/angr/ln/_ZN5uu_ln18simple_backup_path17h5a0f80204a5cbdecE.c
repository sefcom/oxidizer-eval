double uu_ln::simple_backup_path::h5a0f80204a5cbdec(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    int v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x28]
    int v6;  // xmm0
    unsigned long long v7;  // rdx
    int v8;  // ymm0

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
    if (!*((long long *)&v0))
    {
        ::0x4b8510::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9c66d43f18d0910b(&v0, *((long long *)&v1), *((long long *)&v2));
        v4 = *((long long *)&v2);
        v6 = *((int128_t *)&v0);
        v3 = v6;
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h57d6578587c5cd4e(&v3, core::slice::iter::Iter$LT$T$GT$::make_slice::he277e19a8f1fc4b2(a3, a4 + a3), v7);
        a0->field_10 = v4;
        *((void*)&a0->field_0) = v3;
        return (unsigned long long)(v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v3);
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
