long long uu_basename::basename::h340d9775d596c5be(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    char v0;  // [bp-0xf0]
    char v1;  // [bp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xd0]
    char v5;  // [bp-0xc8]
    char v6;  // [bp-0x98]
    char v7;  // [sp-0x60]
    unsigned long long v10;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r8
    unsigned long long v15;  // r9
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long v19;  // rax
    unsigned long long v21;  // r13

    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, v12, a2);
    std::path::Path::components::h4f3217acf0fc8653(&v3, *((long long *)&v1), *((long long *)&v2));
    v7 = 10;
    core::iter::traits::iterator::Iterator::fold::h36bde6fb9f6f5e13(&v6, &v3, &v7, v13, v14, v15);
    if (v6 == 10)
    {
        a0[0] = 0;
        a0[1] = 1;
        a0[2] = 0;
    }
    else
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v3, std::path::Component::as_os_str::hd2d726e30ab45bf9(&v6), v10);
        if (*((long long *)&v3))
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v16 = *((long long *)&v4);
        v17 = *((long long *)&v5);
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h64ec9b3721162bb0(v16, v17, a3, a4))
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hec36aa0abd5fdd91(&v3, v16, v17);
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hec36aa0abd5fdd91(&v3, v19, v21);
        }
        a0[2] = *((long long *)&v5);
        *((int128_t *)&a0[0]) = *((int128_t *)&v3);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb898dae1dbb093ae(&v0);
    return a0;
}
