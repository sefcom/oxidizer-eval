long long uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0xb0]
    unsigned long long v2;  // [sp-0xa8]
    int v3;  // [sp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [sp-0x90], Other Possible Types: unsigned long long
    struct struct_0 **v5;  // [sp-0x88], Other Possible Types: unsigned long long, unsigned long
    unsigned int v6;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v7;  // [sp-0x78]
    int v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x58]
    char *v10;  // [sp-0x50]
    unsigned long long v11;  // [sp-0x48]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x30]
    unsigned long long v15;  // r15
    unsigned long long v16;  // rdx
    void* v17;  // rax
    unsigned long long v19;  // r15
    unsigned long long v20;  // rdi

    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a2, a3);
    if ((char)std::path::Path::is_file::h82f08f46fb8d8099(v1, v2))
    {
        v15 = std::path::Path::parent::h65c9a340a6266f2d(v1, v2);
        if (!v15)
        {
            *((int128_t *)&v8) = *((int128_t *)&v1);
            v10 = &v8;
            v11 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v3 = &g_5bbd68;
            v4 = 1;
            v7 = 0;
            v5 = &v10;
            v6 = 1;
            ::0x5041c0::core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60();
            v6 = 1;
            *((int128_t *)&v3) = *((int128_t *)&v12);
            v5 = *((long long *)&v13);
            ::0x5045f0::alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&v3);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
            return v17;
        }
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v15, v16))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, v15, v16);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
            v2 = v5;
        }
        else
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, ".cannot watch parent directory of ", 1);
            v9 = v5;
            *((int128_t *)&v8) = (int128_t)v3;
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
            v2 = v9;
        }
        *((int128_t *)&v0) = (int128_t)v3;
    }
    if (!(char)std::path::Path::is_absolute::h3431a23d91045560(v1, v2))
    {
        std::fs::canonicalize::hd214f5c614fa2ecb(&v3, v1, v2);
        v19 = v3;
        v20 = v4;
        if (v19 == 0x8000000000000000)
        {
            v17 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v20);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
            return v17;
        }
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
        v0 = v19;
        v1 = v20;
        v2 = v5;
    }
    v17 = uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(a0, a1);
    if (v17)
    {
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
        return v17;
    }
    ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
    return 0;
}
