long long uu_comm::uumain::uumain::hd07bb5cb783534dd(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x438]
    char v1;  // [bp-0x430]
    char v2;  // [bp-0x428]
    char v3;  // [bp-0x418]
    char v4;  // [bp-0x408]
    char v5;  // [bp-0x3f8]
    char v6;  // [bp-0x3f0]
    char v7;  // [bp-0x3e8]
    unsigned long v8;  // [sp-0x3e0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x3d8]
    int v10;  // [sp-0x3d0]
    int v11;  // [sp-0x3c0]
    unsigned long long v12;  // [sp-0x3b0]
    unsigned long v13;  // [sp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x3a0]
    int v15;  // [sp-0x398]
    int v16;  // [sp-0x388]
    char v17;  // [sp-0x378]
    unsigned int v18;  // [bp-0x377]
    unsigned int v19;  // [sp-0x374]
    unsigned long v20;  // [bp-0x370]
    unsigned long long v21;  // [sp-0x368]
    int v22;  // [sp-0x360]
    int v23;  // [sp-0x350]
    char v24;  // [sp-0x340]
    unsigned int v25;  // [bp-0x33f]
    unsigned int v26;  // [sp-0x33c]
    unsigned long v27;  // [sp-0x338], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x330]
    int v29;  // [sp-0x328]
    int v30;  // [sp-0x318]
    int v31;  // [sp-0x308]
    int v32;  // [sp-0x2f8]
    int v33;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v34;  // [sp-0x2d8]
    unsigned int v35;  // [sp-0x2d0]
    unsigned long long v39;  // rax
    unsigned long long v41[3];  // rbx
    unsigned long long v42[3];  // r14
    unsigned int v43;  // ebp
    char v44;  // al
    unsigned long long v45;  // rcx
    char v46;  // al
    unsigned long long v47;  // rbx
    unsigned long long v48;  // r14
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rcx
    unsigned long long v52[3];  // rax
    unsigned long long v53[3];  // rcx
    unsigned long long v54[3];  // rax
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r14
    char v57;  // al

    uu_comm::uu_app::ha6c652ac8df11865(&v33, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h53526b6703d0467b(&v0, &v33, a0, a1);
    if (v8 == 0x8000000000000000)
    {
        v39 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v9);
        return v39;
    }
    v12 = *((long long *)&v4);
    *((int128_t *)&v11) = *((int128_t *)&v3);
    *((int128_t *)&v10) = *((int128_t *)&v2);
    v8 = *((long long *)&v0);
    v9 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce6c288fedebb544(&v33, &v8, "FILE1", 5);
    v41 = clap_builder::parser::error::MatchesError::unwrap::h97be6f3b7f51ba89("FILE1", 5, &v33);
    if (!v41)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce6c288fedebb544(&v33, &v8, "FILE2", 5);
    v42 = clap_builder::parser::error::MatchesError::unwrap::h97be6f3b7f51ba89("FILE2", 5, &v33);
    if (v42)
    {
        v43 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v8, "zero-terminated", 15) ? 0 : 10);
        uu_comm::open_file::he2f4406dcd44f5f5(&v33, v41[1], v41[2], v43);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha3669787977011fc(&v0, &v33, v41);
        v44 = v4;
        v39 = *((long long *)&v0);
        v45 = *((long long *)&v1);
        if (v17 != 11)
        {
            *((int128_t *)&v16) = *((int128_t *)&v3);
            *((int128_t *)&v15) = *((int128_t *)&v2);
            v18 = *((int *)&(&v4)[1]);
            v19 = *((int *)&(&v4)[4]);
            v13 = v39;
            v14 = v45;
            v17 = v44;
            uu_comm::open_file::he2f4406dcd44f5f5(&v33, v42[1], v42[2], v43);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h333d9779081ba83e(&v0, &v33, v42);
            v46 = v4;
            v47 = *((long long *)&v0);
            v48 = *((long long *)&v1);
            if (v24 != 11)
            {
                *((int128_t *)&v23) = *((int128_t *)&v3);
                *((int128_t *)&v22) = *((int128_t *)&v2);
                v25 = *((int *)&(&v4)[1]);
                v26 = *((int *)&(&v4)[4]);
                v39 = v47;
                v21 = v48;
                v24 = v46;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h24fd000ef11150c2(&v33, &v8, "output-delimiterPermissionDenied", 16);
                clap_builder::parser::error::MatchesError::unwrap::h04dd569e38f606c4(&v0, "output-delimiterPermissionDenied", 16, &v33);
                if (!*((long long *)&v0))
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                *((int128_t *)&v32) = *((int128_t *)&v4);
                *((int128_t *)&v31) = *((int128_t *)&v3);
                *((int128_t *)&v30) = *((int128_t *)&v2);
                *((int128_t *)&v29) = *((int128_t *)&v0);
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h349f0ef49bcba905(&v5, &v29, v49);
                v50 = *((long long *)&v7);
                if (!v50)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                v51 = *((long long *)&v6);
                v27 = v51 + 24;
                v28 = v51 + v50 * 24;
                do
                {
                    v52 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h95a69d36af4a9080(&v27);
                    if (!v52)
                    {
                        if (*((long long *)&v7))
                        {
                            v54 = *((long long *)&v6);
                            v55 = v54[1];
                            v56 = v54[2];
                            v57 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha1a7951143d015a8(v55, v56, 1, 0);
                            if (v57)
                                v55 = &g_41429c;
                            if (v57)
                                v56 = 1;
                            uu_comm::comm::hb602e027eef2e655(&v13, &v20, v55, v56, &v8);
                            ::0x463480::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3132c80679b5f6ab(&v5);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(&v20);
                            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(&v13);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2fd4c7b1b897f9b8(&v8);
                            return 0;
                        }
                        else
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        }
                    }
                    if (!*((long long *)&v7))
                        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                    v53 = *((long long *)&v6);
                } while ((char)alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hb77978741638b557(v52[1], v52[2], v53[1], v53[2]));
                ::0x4636d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a897266881acf00(&v0);
                v34 = *((long long *)&v2);
                *((int128_t *)&v33) = *((int128_t *)&v0);
                v35 = 1;
                v39 = alloc::boxed::Box$LT$T$GT$::new::h9f840935a3110626(&v33);
                ::0x463480::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h3132c80679b5f6ab(&v5);
                core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(&v20);
            }
            core::ptr::drop_in_place$LT$uu_comm..LineReader$GT$::h53489cac618c2b5d(&v13);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2fd4c7b1b897f9b8(&v8);
        return v39;
    }
}
