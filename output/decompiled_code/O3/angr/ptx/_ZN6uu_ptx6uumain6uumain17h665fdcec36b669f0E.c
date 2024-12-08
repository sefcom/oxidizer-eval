long long uu_ptx::uumain::uumain::h665fdcec36b669f0(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x4e0]
    char v1;  // [bp-0x4d8]
    unsigned long v2;  // [sp-0x4d0], Other Possible Types: unsigned long long
    int v3;  // [bp-0x4c8], Other Possible Types: char, unsigned long, unsigned long long
    int v4;  // [bp-0x4c0], Other Possible Types: char
    unsigned long v5;  // [sp-0x4b8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x4b0]
    char v7;  // [bp-0x4a0]
    unsigned long v8;  // [sp-0x490], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x488]
    int v10;  // [sp-0x480]
    int v11;  // [sp-0x470]
    unsigned long long v12;  // [sp-0x460]
    int v13;  // [bp-0x458], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v14;  // [sp-0x450]
    unsigned long long v15;  // [sp-0x448]
    int v16;  // [sp-0x440]
    int v17;  // [sp-0x430]
    int v18;  // [sp-0x420]
    int v19;  // [sp-0x410]
    unsigned long long v20;  // [sp-0x400]
    char v21;  // [bp-0x3f0], Other Possible Types: unsigned long long, unsigned long
    unsigned long v22;  // [sp-0x3e8], Other Possible Types: unsigned long long
    char v23;  // [bp-0x3e0], Other Possible Types: unsigned long long
    int v24;  // [sp-0x3d8]
    char v25;  // [bp-0x3d0]
    int v26;  // [sp-0x3c8]
    char v27;  // [bp-0x3c0]
    int v28;  // [bp-0x3b8], Other Possible Types: char
    int v29;  // [sp-0x3a8]
    int v30;  // [sp-0x398]
    int v31;  // [sp-0x388]
    unsigned long long v32;  // [sp-0x378]
    unsigned long v33;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v34;  // [sp-0x368]
    unsigned long long v35;  // [sp-0x360]
    int v36;  // [sp-0x358]
    unsigned long long v37;  // [sp-0x348]
    char v38;  // [bp-0x340]
    int v39;  // [sp-0x328]
    int v40;  // [sp-0x318]
    int v41;  // [sp-0x308]
    unsigned long long v42;  // [sp-0x2f8]
    unsigned long long v43;  // [sp-0x2f0]
    char v44;  // [bp-0x2e8]
    char v45;  // [bp-0x2d8]
    char v46;  // [bp-0x2c8]
    char v47;  // [bp-0x2b8]
    char v48;  // [bp-0x2b0]
    char v49;  // [bp-0x2a0]
    char v50;  // [bp-0x290]
    char v51;  // [bp-0x280]
    char v52;  // [bp-0x270]
    unsigned long long v54;  // rax
    unsigned long long v55;  // rdx
    struct_1 *v56;  // rax
    struct_1 *v57;  // r14
    int v58;  // xmm0
    unsigned long long v63;  // r8
    unsigned long long v64;  // r9
    struct_0 *v65;  // rax

    uu_ptx::uu_app::h0419ecd87ad242fb(&v44, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::hbba8330033d52674(&v21, &v44, a0, a1);
    if (v8 == 0x8000000000000000)
    {
        v54 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v9);
        return v54;
    }
    v12 = *((long long *)&v27);
    *((int128_t *)&v11) = *((int128_t *)&v25);
    *((int128_t *)&v10) = *((int128_t *)&v23);
    v8 = v21;
    v9 = v22;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7ed6cb78310e4dbc(&v44, &v8, _ZN6uu_ptx7options4FILE17h74a90e30f8df2756E, g_6ef0d0);
    clap_builder::parser::error::MatchesError::unwrap::hb599bc28595e5d87(&v21, _ZN6uu_ptx7options4FILE17h74a90e30f8df2756E, g_6ef0d0, &v44);
    if (v21)
    {
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4318f86dfd7726ac(&v44, &v21, v55);
        *((int128_t *)&v39) = *((int128_t *)&v44);
        *((int128_t *)&v40) = *((int128_t *)&v45);
        *((int128_t *)&v41) = *((int128_t *)&v46);
        v42 = *((long long *)&v47);
        v43 = *((long long *)&v28);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h900be07a8bd1ace3(&v0, &v39, v55);
    }
    else
    {
        v56 = ::0x562820::alloc::alloc::Global::alloc_impl::hf61749d460433fff(24);
        if (!v56)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v57 = v56;
        ::0x562570::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7c04fc29d35964c9(&v44);
        v15 = *((long long *)&v45);
        v58 = *((int128_t *)&v44);
        v13 = v58;
        v57->field_10 = v15;
        *((void*)&v57->field_0) = v58;
        alloc::slice::hack::into_vec::ha53fd02fd64bb338(&v0, v57, 1);
    }
    uu_ptx::get_config::h79c9bc47f90796d5(&v44, &v8);
    v54 = *((long long *)&(&v44)[8]);
    if (v13 != 0x8000000000000000)
    {
        v20 = *((long long *)&v50);
        *((int128_t *)&v19) = *((int128_t *)&v49);
        *((int128_t *)&v18) = *((int128_t *)&v48);
        *((int128_t *)&v17) = *((int128_t *)&(&v46)[8]);
        *((int128_t *)&v16) = *((int128_t *)&(&v45)[8]);
        v13 = *((long long *)&v44);
        v14 = v54;
        v15 = *((long long *)&v45);
        uu_ptx::WordFilter::new::h2c7dfb1fa5a73e69(&v44, &v8, &v13);
        v54 = *((long long *)&(&v44)[8]);
        if (v21 != 0x8000000000000000)
        {
            v32 = *((long long *)&v52);
            *((int128_t *)&v31) = *((int128_t *)&v51);
            *((int128_t *)&v30) = *((int128_t *)&v50);
            *((int128_t *)&v29) = *((int128_t *)&v49);
            *((int128_t *)&v28) = *((int128_t *)&v48);
            *((int128_t *)&v26) = *((int128_t *)&(&v46)[8]);
            *((int128_t *)&v24) = *((int128_t *)&(&v45)[8]);
            v21 = *((long long *)&v44);
            v22 = v54;
            v23 = *((long long *)&v45);
            uu_ptx::read_input::h2b63c76840371f87(&v44, *((long long *)&v1), v2, &v13);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h73f81fa64237ff3d(&v3, &v44);
            v54 = *((long long *)&v4);
            if (!v33)
            {
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h4410fe369765602e(&v21);
            }
            else
            {
                v37 = *((long long *)&v7);
                *((int128_t *)&v36) = *((int128_t *)&v6);
                v33 = v3;
                v34 = v54;
                v35 = v5;
                uu_ptx::create_word_set::h489d7533499e0631(&v38, &v13, &v21, &v33, v63, v64);
                if ((char)v20 || v2 != 2)
                {
                    ::0x562570::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7c04fc29d35964c9(&v44);
                    v5 = *((long long *)&v45);
                    *((int128_t *)&v3) = *((int128_t *)&v44);
                }
                else
                {
                    v2 = 1;
                    v65 = *((long long *)&v1);
                    if (v3 == 0x8000000000000000)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    v3 = v65->field_18;
                    *((uint128_t *)&v4) = v65->field_20;
                }
                v54 = uu_ptx::write_traditional_output::h7209b014ae0ba1e5(&v13, &v33, &v38, (long long)(&v3)[8], v5, v64);
                ::0x5621a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14ee6c166913aa28(&v3);
                core::ptr::drop_in_place$LT$alloc..collections..btree..set..BTreeSet$LT$uu_ptx..WordRef$GT$$GT$::h7d0b65e26da5a8e0(&v38);
                core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$uu_ptx..FileContent$GT$$GT$::h8d09ed1d0a814ce4(&v33);
                core::ptr::drop_in_place$LT$uu_ptx..WordFilter$GT$::h4410fe369765602e(&v21);
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h9d250b0337586625(&v13);
                ::0x5622f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hccec06f2476f73e9(&v0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h95da3f31d4fe5de5(&v8);
                return v54;
            }
        }
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h9d250b0337586625(&v13);
    }
    ::0x5622f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hccec06f2476f73e9(&v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h95da3f31d4fe5de5(&v8);
    return v54;
}
