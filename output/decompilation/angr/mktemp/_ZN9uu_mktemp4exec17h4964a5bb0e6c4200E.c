long long uu_mktemp::exec::h4964a5bb0e6c4200(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned int a6, unsigned int a7, char a8)
{
    unsigned long long v0[3];  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    unsigned long v3;  // [sp-0x50]
    unsigned long long v4;  // [sp-0x48]
    unsigned long long v5;  // [sp-0x40]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdi

    if (!a8)
        uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(v0, a1, a2, a3, a4, a5, a6, a7);
    else
        uu_mktemp::make_temp_dir::h59267eff7d377883(v0, a1, a2, a3, a4, a5, a6, a7);
    if (v3 == 0x8000000000000000)
    {
        a0[1] = v4;
        a0[2] = v5;
        a0[0] = 0x8000000000000000;
        return a0;
    }
    v3 = v0[0];
    v4 = *((long long *)&v1);
    v5 = *((long long *)&v2);
    v11 = std::path::Path::file_name::h79ecbb7850a9c7f3(v4, v5);
    if (!v11)
    {
        v12 = &g_536b60;
    }
    else
    {
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(v0, v11, a2);
        if (!v0[0])
        {
            std::path::Path::join::hac25b276bfec4f36(&v6, a1, a2, *((long long *)&v1), *((long long *)&v2));
            a0[2] = *((long long *)&v7);
            *((int128_t *)&a0[0]) = *((int128_t *)&v6);
            ::0x4bcbd0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&v3);
            return a0;
        }
        v12 = &g_536b78;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(v12); /* do not return */
}
