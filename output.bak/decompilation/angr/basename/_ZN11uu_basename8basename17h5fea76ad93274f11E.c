long long uu_basename::basename::h5fea76ad93274f11(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
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
    unsigned long long v11;  // 4096
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // rax
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax

    if (v10)
        v11 = v10;
    else
        v11 = a2;
    if (v10)
        v13 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hb231c32269780afc(a1, a2);
    else
        v13 = a1;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, v13, v11);
    std::path::Path::components::h4f3217acf0fc8653(&v3, *((long long *)&v1), *((long long *)&v2));
    v7 = 10;
    core::iter::traits::iterator::Iterator::fold::h49107edc7661eb2f(&v6, &v3, &v7);
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
            core::option::unwrap_failed::h0e11329e76906eaa(&g_50eaf0); /* do not return */
        v14 = *((long long *)&v4);
        v15 = *((long long *)&v5);
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hff29a2f68c8cbe60(v14, v15, a3, a4))
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc3b515191c06e2ad(&v3, v14, v15);
        }
        else
        {
            v16 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(a3, a4, v14, v15);
            if (!v16)
                v17 = v15;
            else
                v17 = v10;
            if (v16)
                v18 = v16;
            else
                v18 = v14;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc3b515191c06e2ad(&v3, v18, v17);
        }
        a0[2] = *((long long *)&v5);
        *((int128_t *)&a0[0]) = *((int128_t *)&v3);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9a5db94baa57db22();
    return a0;
}
