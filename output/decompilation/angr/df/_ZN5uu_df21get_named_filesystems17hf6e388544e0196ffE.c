long long uu_df::get_named_filesystems::hf6e388544e0196ff(unsigned long long a0[3], unsigned long a1)
{
    struct struct_0 **v0;  // [sp-0x390]
    unsigned long long v1;  // [sp-0x388]
    unsigned long v2;  // [sp-0x380], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x378]
    struct struct_0 **v4;  // [bp-0x370]
    unsigned long long v5;  // [sp-0x368]
    char *v6;  // [sp-0x360]
    unsigned long long v7;  // [sp-0x358]
    void* v8;  // [sp-0x350]
    unsigned long long v9;  // [sp-0x348]
    void* v10;  // [sp-0x340]
    char v11;  // [bp-0x338]
    char v12;  // [bp-0x330]
    char v13;  // [bp-0x328]
    unsigned long v14;  // [sp-0x318], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x310]
    struct struct_0 **v16;  // [bp-0x308]
    unsigned long long v17;  // [sp-0x300]
    char *v18;  // [sp-0x2f8], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    unsigned long v19;  // [bp-0x2f0], Other Possible Types: unsigned int, unsigned long long
    void* v20;  // [sp-0x2e8]
    unsigned long v21;  // [sp-0x258], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x250]
    unsigned long long v23;  // [sp-0x248]
    char v24;  // [bp-0x240]
    char v25;  // [bp-0x230]
    struct struct_0 **v26;  // [bp-0x228], Other Possible Types: unsigned long
    unsigned long v27;  // [sp-0x220], Other Possible Types: unsigned long long
    struct struct_0 **v28;  // [sp-0x218], Other Possible Types: unsigned long, unsigned long long
    unsigned int v29;  // [bp-0x210], Other Possible Types: unsigned long long
    void* v30;  // [sp-0x208]
    char v31;  // [bp-0x138]
    char v32;  // [bp-0x118]
    unsigned long long v34;  // rax
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rdx
    unsigned long long *v37;  // rax
    int v38;  // ymm0
    unsigned long long v39;  // rsi
    struct struct_0 **v40;  // xmm0
    struct struct_0 **v41;  // xmm0
    unsigned long v42;  // rdx

    uucore::features::fsext::read_fs_list::h424e364609cbd5d3(&v26);
    v34 = v27;
    if (v21 == 0x8000000000000000)
    {
        a0[1] = v22;
        a0[2] = v23;
        a0[0] = 0x8000000000000000;
        return v34;
    }
    v21 = v26;
    v22 = v34;
    v23 = v28;
    uu_df::filter_mount_list::h552d57bf732d9983(&v16, &v21, v35);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hde82d0e33efa5e10(&v31, &v16);
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::hfc330947ec3cd1ff(&v11, &v31);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if (!*((long long *)&v13))
    {
        ::0x472f90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&v16);
        v28 = v18;
        *((int128_t *)&v26) = *((int128_t *)&v16);
        v29 = 1;
        *((double *)&v0) = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v26);
        v1 = &g_53ea20;
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v0));
        v4 = uucore::util_name::h60d842bf27b05e82();
        v5 = v42;
        v16 = &v4;
        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
        v18 = &v0;
        v19 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
        v26 = &g_53e998;
        v27 = 3;
        v30 = 0;
        v28 = &v16;
        v29 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v26);
        ::0x472790::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(v0, v1);
        a0[2] = v10;
        *((int128_t *)&a0[0]) = *((int128_t *)&v8);
    }
    else
    {
        v14 = a1;
        v15 = a1 + v36 * 8;
        v37 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&v14);
        if (v37)
        {
            do
            {
                uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(&v26, *((long long *)&v12), *((long long *)&v13), v37);
                if (v26 != 0x8000000000000000)
                {
                    memcpy(&v32, &v26, 232);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::ha04b626b2435bc8e(&v8, &v32);
                }
                else
                {
                    std::fs::metadata::h2a3b352190f658b7(&v16, ::0x472ff0::_$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*(v37)), v36);
                    v39 = v17;
                    if (v16 != 2)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(v16, v39);
                        ::0x472f90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&v4);
                        v18 = v6;
                        v40 = *((int128_t *)&v4);
                        v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                        v16 = v40;
                        v19 = 1;
                        *((double *)&v2) = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v16);
                        v3 = &g_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v2));
                        v0 = uucore::util_name::h60d842bf27b05e82();
                        v1 = v36;
                        v4 = &v0;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        v6 = &v2;
                        v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        v16 = &g_53e998;
                        v17 = 3;
                        v20 = 0;
                        v18 = &v4;
                        v19 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v16);
                        ::0x472790::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(v2, v3);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(2, v39);
                        v4 = ::0x472ff0::_$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*(v37));
                        v5 = v36;
                        v0 = &v4;
                        v1 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v16 = &g_53e9c8;
                        v17 = 2;
                        v20 = 0;
                        v18 = &v0;
                        v19 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h4b6e538973bc8efd();
                        v19 = 1;
                        v41 = *((int128_t *)&v24);
                        v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                        v16 = v41;
                        v18 = *((long long *)&v25);
                        *((double *)&v2) = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v16);
                        v3 = &g_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v2));
                        v0 = uucore::util_name::h60d842bf27b05e82();
                        v1 = v36;
                        v4 = &v0;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        v6 = &v2;
                        v7 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        v16 = &g_53e998;
                        v17 = 3;
                        v20 = 0;
                        v18 = &v4;
                        v19 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v16);
                        ::0x472790::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(v2, v3);
                    }
                }
            } while ((v37 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&v14), v37));
        }
        a0[2] = v10;
        *((int128_t *)&a0[0]) = *((int128_t *)&v8);
    }
    v34 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::he92feecb328c252c(&v11);
    return v34;
}
