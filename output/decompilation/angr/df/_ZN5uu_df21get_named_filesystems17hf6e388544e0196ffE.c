long long uu_df::get_named_filesystems::hf6e388544e0196ff(unsigned long long a0[3], unsigned long a1)
{
    struct struct_0 **v0;  // [sp-0x390]
    unsigned long long v1;  // [sp-0x388]
    unsigned long v2;  // [sp-0x380]
    unsigned long long v3;  // [sp-0x378]
    struct struct_0 **v4;  // [bp-0x370]
    struct struct_0 **v5;  // [sp-0x370]
    unsigned long long v6;  // [sp-0x368]
    char *v7;  // [sp-0x360]
    unsigned long long v8;  // [sp-0x358]
    void* v9;  // [sp-0x350]
    unsigned long long v10;  // [sp-0x348]
    void* v11;  // [sp-0x340]
    char v12;  // [bp-0x338]
    char v13;  // [bp-0x330]
    char v14;  // [bp-0x328]
    unsigned long v15;  // [sp-0x318]
    unsigned long long v16;  // [sp-0x310]
    struct struct_0 **v17;  // [sp-0x308]
    unsigned long long v18;  // [sp-0x300]
    char *v19;  // [sp-0x2f8], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    unsigned long v20;  // [bp-0x2f0], Other Possible Types: unsigned int, unsigned long long
    void* v21;  // [sp-0x2e8]
    unsigned long v22;  // [sp-0x258]
    unsigned long long v23;  // [sp-0x250]
    unsigned long long v24;  // [sp-0x248]
    char v25;  // [bp-0x240]
    char v26;  // [bp-0x230]
    struct struct_0 **v27;  // [bp-0x228], Other Possible Types: unsigned long
    unsigned long v28;  // [sp-0x220], Other Possible Types: unsigned long long
    struct struct_0 **v29;  // [sp-0x218], Other Possible Types: unsigned long, unsigned long long
    unsigned int v30;  // [bp-0x210], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x208]
    char v32;  // [bp-0x138]
    char v33;  // [bp-0x118]
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rdx
    unsigned long long *v38;  // rax
    unsigned long long *v39;  // rbx
    int v40;  // ymm0
    unsigned long long v41;  // rsi
    struct struct_0 **v42;  // xmm0
    struct struct_0 **v43;  // xmm0
    unsigned long v44;  // rdx

    uucore::features::fsext::read_fs_list::h424e364609cbd5d3(&v27);
    v35 = v28;
    if (v22 == 0x8000000000000000)
    {
        a0[1] = v23;
        a0[2] = v24;
        a0[0] = 0x8000000000000000;
        return v35;
    }
    v22 = v27;
    v23 = v35;
    v24 = v29;
    uu_df::filter_mount_list::h552d57bf732d9983(&v17, &v22, v36);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hde82d0e33efa5e10(&v32, &v17);
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::hfc330947ec3cd1ff(&v12, &v32);
    v9 = 0;
    v10 = 8;
    v11 = 0;
    if (!*((long long *)&v14))
    {
        ::0x472f90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&v17);
        v29 = v19;
        *((int128_t *)&v27) = *((int128_t *)&v17);
        v30 = 1;
        *((double *)&v0) = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v27);
        v1 = &g_53ea20;
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v0));
        v4 = uucore::util_name::h60d842bf27b05e82();
        v6 = v44;
        v17 = &v4;
        v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
        v19 = &v0;
        v20 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
        v27 = &g_53e998;
        v28 = 3;
        v31 = 0;
        v29 = &v17;
        v30 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v27);
        ::0x472790::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(v0, v1);
        a0[2] = v11;
        *((int128_t *)&a0[0]) = *((int128_t *)&v9);
    }
    else
    {
        v15 = a1;
        v16 = a1 + v37 * 8;
        v38 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&v15);
        if (v38)
        {
            v39 = v38;
            do
            {
                uu_df::filesystem::Filesystem::from_path::h5b49a475fd8fdd25(&v27, *((long long *)&v13), *((long long *)&v14), v39);
                if (v27 != 0x8000000000000000)
                {
                    memcpy(&v33, &v27, 232);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::ha04b626b2435bc8e(&v9, &v33);
                }
                else
                {
                    std::fs::metadata::h2a3b352190f658b7(&v17, ::0x472ff0::_$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*(v39)), v37);
                    v41 = v18;
                    if (v17 == 2)
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(2, v41);
                        v4 = ::0x472ff0::_$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h241aa1449fb23990(*(v39));
                        v6 = v37;
                        v0 = &v4;
                        v1 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                        v17 = &g_53e9c8;
                        v18 = 2;
                        v21 = 0;
                        v19 = &v0;
                        v20 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h4b6e538973bc8efd(&v25, &v17);
                        v20 = 1;
                        v43 = *((int128_t *)&v25);
                        v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                        v17 = v43;
                        v19 = *((long long *)&v26);
                        *((double *)&v2) = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v17);
                        v3 = &g_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v2));
                        v0 = uucore::util_name::h60d842bf27b05e82();
                        v1 = v37;
                        v5 = &v0;
                        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        v7 = &v2;
                        v8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        v17 = &g_53e998;
                        v18 = 3;
                        v21 = 0;
                        v19 = &v4;
                        v20 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                        ::0x472790::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(v2, v3);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4224ce639deb08c(v17, v41);
                        ::0x472f90::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(&v4);
                        v19 = v7;
                        v42 = *((int128_t *)&v4);
                        v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                        v17 = v42;
                        v20 = 1;
                        *((double *)&v2) = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&v17);
                        v3 = &g_53ea20;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0((unsigned int)_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(v2));
                        v0 = uucore::util_name::h60d842bf27b05e82();
                        v1 = v37;
                        v5 = &v0;
                        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06ebc9b14758de04;
                        v7 = &v2;
                        v8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h05b4d573785fe419;
                        v17 = &g_53e998;
                        v18 = 3;
                        v21 = 0;
                        v19 = &v4;
                        v20 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v17);
                        ::0x472790::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hd39dd5b85cce0eef(v2, v3);
                    }
                }
            } while ((v39 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he6b535fc67a2ed40(&v15), v39));
        }
        a0[2] = v11;
        *((int128_t *)&a0[0]) = *((int128_t *)&v9);
    }
    v35 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::he92feecb328c252c(&v12);
    return v35;
}
