long long uu_mktemp::exec::h4964a5bb0e6c4200(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x78]
    unsigned long long v1;  // [sp-0x70]
    unsigned long long v2[3];  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    unsigned long v5;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x40]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    char v11;  // [bp+0x18]
    unsigned long long v12;  // rdx
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    if (!v11)
    {
        v1 = v1;
        v0 = v0;
        uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(v2, a1, a2, a3, a4, a5);
    }
    else
    {
        v1 = v1;
        v0 = v0;
        uu_mktemp::make_temp_dir::h59267eff7d377883(v2, a1, a2, a3, a4, a5);
    }
    if (v5 == 0x8000000000000000)
    {
        a0[1] = v6;
        a0[2] = v7;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v5 = v2[0];
    v6 = *((long long *)&v3);
    v7 = *((long long *)&v4);
    v17 = std::path::Path::file_name::h79ecbb7850a9c7f3(v6, v7, v12, v16);
    if (!v17)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(v2, v17, v18);
    if (!v2[0])
    {
        std::path::Path::join::hac25b276bfec4f36(&v8, a1, a2, *((long long *)&v3), *((long long *)&v4));
        a0[2] = *((long long *)&v9);
        *((int128_t *)&a0[0]) = *((int128_t *)&v8);
        ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&v5);
        return a0;
    }
}
