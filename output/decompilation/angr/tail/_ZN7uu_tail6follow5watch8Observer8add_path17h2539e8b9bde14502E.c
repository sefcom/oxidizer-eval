long long uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x280]
    char v1;  // [bp-0x278]
    char v2;  // [bp-0x270]
    char v3;  // [bp-0x260]
    char v4;  // [bp-0x258]
    char v5;  // [bp-0x250]
    unsigned long v6;  // [sp-0x188]
    unsigned long v7;  // [sp-0x180]
    unsigned long long v8;  // [sp-0x178]
    char v9;  // [bp-0xd8]
    char v10;  // [bp+0x10]
    unsigned long long v14;  // rbp
    unsigned long long v15;  // r14
    unsigned long long v16;  // r12

    if (a0->field_8e == 2)
    {
        ::0x5040e0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(a5, a6);
    }
    else
    {
        if ((char)std::path::Path::is_absolute::h3431a23d91045560(a1, a2))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a1, a2);
        }
        else
        {
            std::env::current_dir::h8e5fbaefdf378c8c(&v3);
            if (v6 == 0x8000000000000000)
            {
                ::0x5040e0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(a5, a6);
                return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v7);
            }
            v6 = *((long long *)&v3);
            v7 = *((long long *)&v4);
            v8 = *((long long *)&v5);
            std::path::Path::join::hfe8bd1517fdb9512(&v0, v7, v8, a1, a2);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v6);
        }
        v14 = *((long long *)&v1);
        v15 = *((long long *)&v2);
        std::fs::metadata::h5a76b0b01e9dc15d(&v3, v14, v15);
        v16 = *((long long *)&v3);
        if (v16 != 2)
        {
            memcpy(&v9, &v4, 168);
        }
        else
        {
            ::0x5040c0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v3);
            v14 = *((long long *)&v1);
            v15 = *((long long *)&v2);
        }
        v6 = v16;
        memcpy(&v7, &v9, 168);
        uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(&v3, a5, a6, &v6, a3, a4);
        uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(&a0->padding_0[56], v14, v15, &v3, v10);
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&v0);
    }
    return 0;
}
