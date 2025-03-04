long long uu_ptx::uumain::uumain::h70d69a58c41fd313(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x4e0]
    char v1;  // [bp-0x4d8]
    unsigned long v2;  // [sp-0x4d0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x4c8], Other Possible Types: unsigned long
    int v4;  // [sp-0x4c8], Other Possible Types: unsigned long long
    char v5;  // [bp-0x4c0]
    unsigned long v6;  // [sp-0x4b8], Other Possible Types: unsigned long long
    char v7;  // [bp-0x4b0]
    char v8;  // [bp-0x4a0]
    unsigned long v9;  // [sp-0x490]
    unsigned long long v10;  // [sp-0x488]
    int v11;  // [sp-0x480]
    int v12;  // [sp-0x470]
    unsigned long long v13;  // [sp-0x460]
    int v14;  // [bp-0x458], Other Possible Types: unsigned long
    unsigned long long v15;  // [sp-0x450]
    unsigned long long v16;  // [sp-0x448]
    int v17;  // [sp-0x440]
    int v18;  // [sp-0x430]
    int v19;  // [sp-0x420]
    int v20;  // [sp-0x410]
    unsigned long long v21;  // [sp-0x400]
    char v22;  // [sp-0x3f0], Other Possible Types: unsigned long
    unsigned long v23;  // [sp-0x3e8], Other Possible Types: unsigned long long
    char v24;  // [sp-0x3e0], Other Possible Types: unsigned long long
    int v25;  // [sp-0x3d8]
    char v26;  // [bp-0x3d0]
    int v27;  // [sp-0x3c8]
    char v28;  // [bp-0x3c0]
    int v29;  // [bp-0x3b8], Other Possible Types: char
    int v30;  // [sp-0x3a8]
    int v31;  // [sp-0x398]
    int v32;  // [sp-0x388]
    unsigned long long v33;  // [sp-0x378]
    unsigned long v34;  // [sp-0x370]
    unsigned long long v35;  // [sp-0x368]
    unsigned long long v36;  // [sp-0x360]
    int v37;  // [sp-0x358]
    unsigned long long v38;  // [sp-0x348]
    char v39;  // [bp-0x340]
    int v40;  // [sp-0x328]
    int v41;  // [sp-0x318]
    int v42;  // [sp-0x308]
    unsigned long long v43;  // [sp-0x2f8]
    unsigned long long v44;  // [sp-0x2f0]
    char v45;  // [bp-0x2e8]
    char v46;  // [bp-0x2d8]
    char v47;  // [bp-0x2c8]
    char v48;  // [bp-0x2b8]
    char v49;  // [bp-0x2b0]
    char v50;  // [bp-0x2a0]
    char v51;  // [bp-0x290]
    char v52;  // [bp-0x280]
    char v53;  // [bp-0x270]
    unsigned long long v55;  // rbx
    unsigned long long v56;  // rdx
    struct_0 *v57;  // rax
    struct_0 *v58;  // r14
    int v59;  // xmm0
    struct_1 *v64;  // rax

    uu_ptx::uu_app::h769fde6fd203379a(&v45);
    clap_builder::builder::command::Command::try_get_matches_from::h2025ffa7a5bdc906(&v22, &v45, a0, a1);
    if (v9 == 0x8000000000000000)
    {
        v55 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v10);
        return v55;
    }
    v13 = *((long long *)&v28);
    *((int128_t *)&v12) = *((int128_t *)&v26);
    *((int128_t *)&v11) = *((int128_t *)&v24);
    v9 = v22;
    v10 = v23;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h864bac169c66e408(&v45, &v9, _ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618);
    clap_builder::parser::error::MatchesError::unwrap::h699c379ce761fce9(&v22, _ZN6uu_ptx7options4FILE17h4728e06c059c85afE, g_6ee618, &v45);
    if (v22)
    {
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h83e32bfe53941955(&v45, &v22, v56);
        *((int128_t *)&v40) = *((int128_t *)&v45);
        *((int128_t *)&v41) = *((int128_t *)&v46);
        *((int128_t *)&v42) = *((int128_t *)&v47);
        v43 = *((long long *)&v48);
        v44 = *((long long *)&v29);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h54a09cbba16345a6(&v0, &v40);
    }
    else
    {
        v57 = ::0x562220::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v57)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v58 = v57;
        ::0x561f70::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h74d88cca8ed314cc(&v45);
        v16 = *((long long *)&v46);
        v59 = *((int128_t *)&v45);
        v14 = v59;
        v58->field_10 = v16;
        *((void*)&v58->field_0) = v59;
        alloc::slice::hack::into_vec::ha6afe10c25aac0c3(&v0, v58, 1);
    }
    uu_ptx::get_config::hbc4f2f006b9116e7(&v45, &v9);
    v55 = *((long long *)&(&v45)[8]);
    if (v14 != 0x8000000000000000)
    {
        v21 = *((long long *)&v51);
        *((int128_t *)&v20) = *((int128_t *)&v50);
        *((int128_t *)&v19) = *((int128_t *)&v49);
        *((int128_t *)&v18) = *((int128_t *)&(&v47)[8]);
        *((int128_t *)&v17) = *((int128_t *)&(&v46)[8]);
        v14 = *((long long *)&v45);
        v15 = v55;
        v16 = *((long long *)&v46);
        uu_ptx::WordFilter::new::h834513af9e48d5ee(&v45, &v9);
        v55 = *((long long *)&(&v45)[8]);
        if (v22 != 0x8000000000000000)
        {
            v33 = *((long long *)&v53);
            *((int128_t *)&v32) = *((int128_t *)&v52);
            *((int128_t *)&v31) = *((int128_t *)&v51);
            *((int128_t *)&v30) = *((int128_t *)&v50);
            *((int128_t *)&v29) = *((int128_t *)&v49);
            *((int128_t *)&v27) = *((int128_t *)&(&v47)[8]);
            *((int128_t *)&v25) = *((int128_t *)&(&v46)[8]);
            v22 = *((long long *)&v45);
            v23 = v55;
            v24 = *((long long *)&v46);
            uu_ptx::read_input::h3799c9cd7e5fae81(&v45, *((long long *)&v1), v2, &v14);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc396743c958a8c80(&v3, &v45);
            v55 = *((long long *)&v5);
            if (!v34)
            {
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h81a74b3f80d3fda1(&v22);
            }
            else
            {
                v38 = *((long long *)&v8);
                *((int128_t *)&v37) = *((int128_t *)&v7);
                v34 = v3;
                v35 = v55;
                v36 = v6;
                uu_ptx::create_word_set::ha43c71debbb1b6c6(&v39, &v14, &v22, &v34);
                if ((char)v21 || v2 != 2)
                {
                    ::0x561f70::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h74d88cca8ed314cc(&v45);
                    v6 = *((long long *)&v46);
                    *((int128_t *)&v4) = *((int128_t *)&v45);
                }
                else
                {
                    v2 = 1;
                    v64 = *((long long *)&v1);
                    if (v4 == 0x8000000000000000)
                        core::option::unwrap_failed::h0e11329e76906eaa(&g_6eadf0); /* do not return */
                    v4 = v64->field_18;
                    *((uint128_t *)&v4) = v64->field_20;
                }
                v55 = uu_ptx::write_traditional_output::h994b7c7d26d6c70f(&v14, &v34, &v39, (long long)(&v4)[8], v6);
                ::0x561ba0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9bf6ad007f06787b(&v3);
                core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$uu_ptx..WordRef$GT$$GT$::h769ae90a68da11f0(&v39);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h39bd43f06bcbad41(&v34);
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h81a74b3f80d3fda1(&v22);
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&v14);
                ::0x561cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3045b61d51b3b09(&v9);
                return v55;
            }
        }
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h6e90df535937af8f(&v14);
    }
    ::0x561cf0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h958462a3e0e95c8d(&v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc3045b61d51b3b09(&v9);
    return v55;
}
