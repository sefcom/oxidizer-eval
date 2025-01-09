long long uu_cut::uumain::uumain::h8ce111ea4964ca5a(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x4f9]
    int v1;  // [bp-0x4f8], Other Possible Types: unsigned long, unsigned long long
    int v2;  // [sp-0x4f0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x4e8]
    unsigned long long v4;  // [sp-0x4e0]
    unsigned long v5;  // [sp-0x4d8], Other Possible Types: unsigned long long
    char v6;  // [sp-0x4d0]
    char v7;  // [sp-0x4c8]
    int v8;  // [sp-0x4c0]
    unsigned long long v9;  // [sp-0x4b0]
    int v10;  // [bp-0x4a8], Other Possible Types: unsigned long, unsigned long long
    int v11;  // [sp-0x4a0], Other Possible Types: unsigned long, unsigned long long
    int v12;  // [sp-0x498], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0x490]
    int v14;  // [sp-0x488]
    int v15;  // [bp-0x478], Other Possible Types: char
    int v16;  // [sp-0x468]
    unsigned long long v17;  // [sp-0x450]
    unsigned long long v18;  // [sp-0x448]
    unsigned long v19;  // [sp-0x440], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x438]
    int v21;  // [sp-0x430]
    int v22;  // [sp-0x420]
    unsigned long long v23;  // [sp-0x410]
    int v24;  // [bp-0x408], Other Possible Types: char
    char v25;  // [bp-0x400]
    unsigned long long v26;  // [sp-0x3f8], Other Possible Types: unsigned long
    char v27;  // [bp-0x3e8]
    char v28;  // [bp-0x3d8]
    char v29;  // [bp-0x3d0]
    unsigned long long v30;  // [sp-0x3c8]
    char v31;  // [bp-0x3c0]
    char v32;  // [bp-0x3b8]
    char v33;  // [bp-0x3b0]
    char v34;  // [bp-0x3a8]
    char v35;  // [bp-0x398]
    void* v36;  // [sp-0x390]
    unsigned long long v37;  // [sp-0x388]
    int v38;  // [sp-0x380]
    unsigned long long v39;  // [sp-0x370]
    unsigned long long v40;  // [sp-0x368]
    unsigned long long v41;  // [sp-0x360]
    unsigned long long v42;  // [sp-0x358]
    int v43;  // [sp-0x350]
    unsigned long long v44;  // [sp-0x340]
    unsigned long v45;  // [sp-0x338], Other Possible Types: unsigned long long
    unsigned long long v46;  // [sp-0x330]
    int v47;  // [sp-0x328]
    int v48;  // [sp-0x318]
    unsigned long long v49;  // [sp-0x308]
    unsigned long long v50;  // [sp-0x300]
    int v51;  // [bp-0x2f8], Other Possible Types: char
    char v52;  // [bp-0x2f0]
    int v53;  // [sp-0x2e8], Other Possible Types: unsigned long, unsigned long long
    int v54;  // [bp-0x2e0], Other Possible Types: char, unsigned int
    int v55;  // [bp-0x2d8], Other Possible Types: char
    unsigned long long v56;  // [sp-0x2d0]
    int v57;  // [sp-0x2c8]
    int v58;  // [bp-0x2b8], Other Possible Types: unsigned long
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r14
    unsigned long long v63;  // rax
    unsigned int v64;  // ebx
    char v65;  // r13b
    unsigned long long v66;  // rax
    unsigned long long v67;  // r14
    unsigned long long v68[3];  // r15
    unsigned long long v69[3];  // r12
    unsigned long long v70[3];  // rax
    int v71;  // xmm1
    int v72;  // xmm2
    int v73;  // xmm3
    char v75;  // r14b
    char v76;  // al
    unsigned long long v77;  // rax
    unsigned long long v78;  // rcx
    unsigned long long v82;  // rdx
    int v83;  // xmm0
    int v84;  // xmm1

    core::iter::traits::iterator::Iterator::collect::h3592e60cc608e8cf(&v31, a0, a1);
    v60 = *((long long *)&v32);
    v61 = *((long long *)&v33);
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v51, "-d=", 3);
    v12 = v53;
    v10 = v51;
    ::0x46c8d0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h0ce505c2541a0b8c();
    uu_cut::uu_app::h2a5a44b0da1a04d9(&v51);
    v3 = *((long long *)&v33);
    *((int128_t *)&v1) = *((int128_t *)&v31);
    clap_builder::builder::command::Command::try_get_matches_from::ha127b255a9c1dd02(&v10, &v51, &v1);
    if (v19 == 0x8000000000000000)
    {
        v63 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v20);
        return v63;
    }
    v23 = *((long long *)&v15);
    v22 = v14;
    *((int128_t *)&v21) = *((int128_t *)&v12);
    v19 = v10;
    v20 = v11;
    v64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "complement", 10);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "only-delimited", 14);
    uu_cut::get_delimiters::h4e08f74774217561(&v51, &v19, (unsigned int)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::heb992d0e50da3b83(&v10, v60, v61));
    v63 = *((long long *)&v52);
    if ((long long)v51)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7dca4eb4492c61a8(&v19);
        return v63;
    }
    v30 = v53;
    v17 = *((long long *)&v54);
    v18 = *((long long *)&v55);
    v65 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "zero-terminated", 15) ? 0 : 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&v24, &v19, "bytes", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&v1, &v19, "characters", 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&v10, &v19, "fields", 6);
    v53 = v26;
    v51 = v24;
    *((int128_t *)&v54) = (int128_t)v1;
    v56 = v3;
    *((int128_t *)&v57) = (int128_t)v10;
    v66 = v12;
    v58 = v66;
    v38 = v51;
    v43 = v57;
    v44 = v66;
    v39 = v53;
    v40 = (long long)v54;
    v41 = (long long)(&v54)[8];
    v42 = v56;
    v36 = 0;
    v37 = 3;
    v67 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hbe7d04904877bd26(&v36);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h08a81984e3b547a9(&v51, &v19, "bytes", 5);
    v68 = clap_builder::parser::error::MatchesError::unwrap::h28b9693eeb3d6f42("bytes", 5, &v51);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h08a81984e3b547a9(&v51, &v19, "characters", 10);
    v69 = clap_builder::parser::error::MatchesError::unwrap::h28b9693eeb3d6f42("characters", 10, &v51);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h08a81984e3b547a9(&v51, &v19, "fields", 6);
    v70 = clap_builder::parser::error::MatchesError::unwrap::h28b9693eeb3d6f42("fields", 6, &v51);
    if (!v67)
    {
LABEL_46e171:
        ::0x46ccb0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(&v51, "invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)", 73);
        goto LABEL_46e18a;
    }
    if (v67 != 1)
    {
        ::0x46ccb0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(&v51, "invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)", 86);
LABEL_46e18a:
        v4 = v53;
        v2 = v51;
        v1 = 3;
LABEL_46e1ad:
        *((int128_t *)&v16) = (int128_t)(&v8)[8];
        *((int128_t *)&v15) = *((int128_t *)&v7);
        *((int128_t *)&v14) = *((int128_t *)&v5);
        v12 = v3;
        v13 = v4;
        v10 = v1;
        v11 = v2;
        v75 = 0;
        goto LABEL_46e201;
    }
    if (v68)
    {
        if (!(!v69) || !(!v70))
            goto LABEL_46e171;
        uu_cut::list_to_ranges::h582948f175afb12b(&v51, v68[1], v68[2], v64);
        if (!(!v69) || !(!v70))
            goto LABEL_46e08f;
        v9 = (long long)v54;
        *((int128_t *)&v8) = (int128_t)(&v51)[8];
        v2 = v17;
        v3 = v18;
        v6 = 2;
        v7 = v65;
        v1 = 0;
        if (0)
            goto LABEL_46e1ad;
    }
    else if (!v69)
    {
        if (!v70)
            goto LABEL_46e171;
        uu_cut::list_to_ranges::h582948f175afb12b(&v51, v70[1], v70[2], v64);
        if (!(!v69) || !(!v70))
            goto LABEL_46e08f;
        v9 = (long long)v54;
        *((int128_t *)&v8) = (int128_t)(&v51)[8];
        v2 = v17;
        v3 = v18;
        v4 = v63;
        v5 = v30;
        v6 = v0;
        v7 = v65;
        v1 = 2;
        if (0)
            goto LABEL_46e1ad;
    }
    else
    {
        if (!(!v69) || !(!v70))
            goto LABEL_46e171;
        uu_cut::list_to_ranges::h582948f175afb12b(&v51, v69[1], v69[2], v64);
        if ((long long)v51)
        {
LABEL_46e08f:
            v4 = (long long)v54;
            *((int128_t *)&v2) = (int128_t)(&v51)[8];
            v1 = 3;
            if (1)
                goto LABEL_46e1ad;
        }
        else
        {
            v9 = (long long)v54;
            *((int128_t *)&v8) = (int128_t)(&v51)[8];
            v2 = v17;
            v3 = v18;
            v6 = 2;
            v7 = v65;
            v1 = 1;
            if (0)
                goto LABEL_46e1ad;
        }
    }
    v71 = (int128_t)(&v2)[8];
    v72 = *((int128_t *)&v5);
    v73 = *((int128_t *)&v7);
    *((int128_t *)&v51) = *((int128_t *)&v1);
    *((int128_t *)&v58) = (int128_t)(&v8)[8];
    v57 = v73;
    v55 = v72;
    v53 = v71;
    if (!(long long)v51)
    {
        if (!(!v69) || !(!v70))
            goto LABEL_46e434;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "whitespace-delimited", 20))
        {
            v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "only-delimited", 14);
            goto LABEL_46e50f;
        }
LABEL_46e474:
        ::0x46ccb0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(&v24, "invalid input: The '-w' option only usable if printing a sequence of fields", 75);
        goto LABEL_46e52c;
    }
    else
    {
        if (!(!v69) || !(!v70))
            goto LABEL_46e55e;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v19, "delimiter", 9))
        {
LABEL_46e434:
            ::0x46ccb0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(&v24, "invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields", 91);
            goto LABEL_46e52c;
        }
        if (!(!v69) || !(!v70))
            goto LABEL_46e474;
        v76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v19, "only-delimited", 14);
LABEL_46e50f:
        if (!v76)
        {
LABEL_46e55e:
            *((int128_t *)&v16) = (int128_t)v58;
            v15 = v57;
            *((int128_t *)&v14) = (int128_t)v55;
            *((int128_t *)&v12) = (int128_t)v53;
            v10 = v51;
        }
        else
        {
            ::0x46ccb0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(&v24, "invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields", 96);
LABEL_46e52c:
            v13 = v26;
            v11 = v24;
            v10 = 3;
            core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h012887aa3a2d3236(&v51);
        }
    }
    v75 = v67 | -0x100 | 1;
LABEL_46e201:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd27ad47b10d3116b(&v51, &v19, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h157cac7a5e829d88(&v24, "filei128", 4, &v51);
    v77 = (long long)v24;
    if (v77)
    {
        v78 = *((long long *)&v25);
        v82 = *((long long *)&v29);
    }
    else
    {
        v78 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v77 = core::ops::function::FnOnce::call_once::h8685605c798c8ada;
        v82 = 0;
    }
    v45 = v77;
    v46 = v78;
    *((int128_t *)&v47) = *((int128_t *)&v26);
    *((int128_t *)&v48) = *((int128_t *)&v27);
    v49 = *((long long *)&v28);
    v50 = v82;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hefa5de3fd746afc1(&v34, &v45);
    if ((int)v10 != 3)
    {
        v58 = v16;
        v83 = (int128_t)v10;
        v84 = (int128_t)v12;
        v57 = v15;
        v55 = v14;
        v53 = v84;
        v51 = v83;
        v26 = *((long long *)&v35);
        *((int128_t *)&v24) = *((int128_t *)&v34);
        uu_cut::cut_files::hab9ba34aeaa70600(&v24, &v51);
        core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h012887aa3a2d3236(&v51);
        v63 = 0;
        if (!(!v69) || !(!v70))
            goto LABEL_46e3e3;
    }
    else
    {
        v53 = v13;
        *((int128_t *)&v51) = (int128_t)(&v10)[8];
        v54 = 1;
        v63 = alloc::boxed::Box$LT$T$GT$::new::he00dbd81f49dede4(&v51);
        ::0x46c900::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb84bbc8583b20163(&v34);
        if ((v1 == 3 & v75))
        {
LABEL_46e3e3:
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cut..Mode$C$alloc..string..String$GT$$GT$::h05eb4e2af90d0fdc(&v1);
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7dca4eb4492c61a8(&v19);
    return v63;
}
