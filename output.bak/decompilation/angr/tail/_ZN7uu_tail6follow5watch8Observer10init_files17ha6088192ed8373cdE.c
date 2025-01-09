long long uu_tail::follow::watch::Observer::init_files::ha6088192ed8373cd(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    int v0;  // [sp-0xb8]
    unsigned long long v1;  // [sp-0xa8]
    int v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x88]
    unsigned long long v4;  // [sp-0x78]
    unsigned long long v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x60]
    unsigned long v8;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x50]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    int v13;  // ymm0
    struct_1 *v14;  // rax
    int v15;  // xmm0
    int v18;  // xmm0
    int v19;  // xmm0
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rcx
    void* v22;  // rax
    int v23;  // xmm0

    if (a0->field_0 == 3)
        return 0;
    v8 = a1;
    v9 = a2 * 48 + a1;
    v4 = a0 + 1;
    while (true)
    {
        v14 = ::0x504bd0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37bf687fdcd4f7ca(&v8);
        if (!v14)
            break;
        if (v14->field_18 == 0x8000000000000000)
            continue;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&v2, &v14->field_18);
        v1 = v3;
        v15 = v2;
        v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15;
        v0 = v15;
        if (!(char)std::path::Path::is_absolute::h3431a23d91045560((long long)(&v0)[8], v3))
        {
            std::env::current_dir::h8e5fbaefdf378c8c(&v2);
            if (v5 == 0x8000000000000000)
            {
                v22 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v6);
                ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
                return v22;
            }
            v5 = (long long)v2;
            v6 = (long long)(&v2)[8];
            v7 = v3;
            v3 = v1;
            v18 = v0;
            v2 = v18;
            std::path::Path::join::h568adc6ac393441e(&v10, v6, v7, &v2);
            v19 = *((int128_t *)&v10);
            v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19;
            v0 = v19;
            v1 = *((long long *)&v11);
            ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
        }
        v20 = (long long)(&v0)[8];
        v21 = v1;
        if ((char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_tailable::hfd31d73cfedfa97d((long long)(&v0)[8], v1))
        {
            v22 = uu_tail::follow::watch::WatcherRx::watch_with_parent::h1fadf41504d6de8e(a0->field_10, a0->field_18, v20, v21);
            if (v22)
            {
                ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
                return v22;
            }
        }
        else if (_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_orphan::h65c9528458cf452d(v20, v21))
        {
            v3 = v1;
            v23 = v0;
            v13 = v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
            v2 = v23;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h1444e8e90e3da7b6(v4, &v2);
            continue;
        }
        else if (!std::path::Path::parent::h65c9a340a6266f2d((long long)(&v0)[8], v1))
        {
            core::option::unwrap_failed::h0e11329e76906eaa(&g_5bbf20); /* do not return */
        }
        else
        {
            v22 = uu_tail::follow::watch::WatcherRx::watch::h12bff18e757f3bf5(a0->field_10, a0->field_18);
            if (v22)
            {
                ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
                return v22;
            }
        }
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
    }
}
