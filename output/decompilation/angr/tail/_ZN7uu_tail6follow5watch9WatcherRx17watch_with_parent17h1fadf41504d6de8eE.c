long long uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0xb0]
    unsigned long long v2;  // [sp-0xa8]
    unsigned long long v3;  // [sp-0xa8]
    int v4;  // [sp-0x98], Other Possible Types: unsigned long
    unsigned long v5;  // [sp-0x90], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [sp-0x88], Other Possible Types: unsigned long long, unsigned long
    unsigned int v7;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v8;  // [sp-0x78]
    int v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x58]
    char *v11;  // [sp-0x50]
    unsigned long long v12;  // [sp-0x48]
    char v13;  // [bp-0x40]
    char v14;  // [bp-0x30]
    unsigned long long v16;  // r15
    unsigned long long v17;  // rdx
    void* v18;  // rbx
    unsigned long long v20;  // r15

    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a2, a3);
    if ((char)std::path::Path::is_file::h82f08f46fb8d8099(v1, v3))
    {
        v16 = std::path::Path::parent::h65c9a340a6266f2d(v1, v3);
        if (!v16)
        {
            *((int128_t *)&v9) = *((int128_t *)&v1);
            v11 = &v9;
            v12 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v4 = &g_5bbd68;
            v5 = 1;
            v8 = 0;
            v6 = &v11;
            v7 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&v13, &v4);
            v7 = 1;
            *((int128_t *)&v4) = *((int128_t *)&v13);
            v6 = *((long long *)&v14);
            ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v4);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
            return v18;
        }
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v16, v17))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v4, v16, v17);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
            v2 = v6;
        }
        else
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v4, ".cannot watch parent directory of ", 1);
            v10 = v6;
            *((int128_t *)&v9) = (int128_t)v4;
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
            v2 = v10;
        }
        *((int128_t *)&v0) = (int128_t)v4;
    }
    if (!(char)std::path::Path::is_absolute::h3431a23d91045560(v1, v2))
    {
        std::fs::canonicalize::hd214f5c614fa2ecb(&v4, v1, v2);
        v20 = v4;
        if (v20 == 0x8000000000000000)
        {
            v18 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v1);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
            return v18;
        }
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
        v0 = v20;
        v1 = v5;
        v3 = v6;
    }
    v18 = uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(a0, a1);
    if (v18)
    {
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
        return v18;
    }
    ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
    return 0;
}
