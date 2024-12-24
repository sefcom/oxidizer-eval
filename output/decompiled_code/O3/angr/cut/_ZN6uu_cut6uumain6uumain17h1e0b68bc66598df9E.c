long long uu_cut::uumain::uumain::h1e0b68bc66598df9(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3)
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
    unsigned long long v63;  // rsi
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rcx
    unsigned long long v66;  // rax
    unsigned int v67;  // ebx
    char v68;  // r13b
    unsigned long long v69;  // rax
    unsigned long long v70;  // r14
    unsigned long long v71[3];  // r15
    unsigned long long v72[3];  // r12
    unsigned long long v73[3];  // rax
    int v74;  // xmm1
    int v75;  // xmm2
    int v76;  // xmm3
    char v78;  // r14b
    char v79;  // al
    unsigned long long v80;  // rax
    unsigned long long v81;  // rcx
    unsigned long long v85;  // rdx
    int v86;  // xmm0
    int v87;  // xmm1

    core::iter::traits::iterator::Iterator::collect::h8319baed75e3dac0(&v31, a0, a1);
    v60 = *((long long *)&v32);
    v61 = *((long long *)&v33);
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v51, "-d=", 3);
    v12 = v53;
    v10 = v51;
    ::0x46cca0::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8cf5b238f91e1ac6(&v10);
    uu_cut::uu_app::h43a3856a9c2da992(&v51, v63, v64);
    v3 = *((long long *)&v33);
    *((int128_t *)&v1) = *((int128_t *)&v31);
    clap_builder::builder::command::Command::try_get_matches_from::ha7f247dfcac55253(&v10, &v51, &v1, v65);
    if (v19 == 0x8000000000000000)
    {
        v66 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v20);
        return v66;
    }
    v23 = *((long long *)&v15);
    v22 = v14;
    *((int128_t *)&v21) = *((int128_t *)&v12);
    v19 = v10;
    v20 = v11;
    v67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, "complement", 10);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, "only-delimited", 14);
    uu_cut::get_delimiters::hdad5abdff54f05cf(&v51, &v19, (unsigned int)_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hb1131a5094d287d1(&v10, v60, v61));
    v66 = *((long long *)&v52);
    if ((long long)v51)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he3d1dc17c7cdba4e(&v19);
        return v66;
    }
    v30 = v53;
    v17 = *((long long *)&v54);
    v18 = *((long long *)&v55);
    v68 = ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, "zero-terminated", 15) ? 0 : 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h4469e5b4c59ad243(&v24, &v19, "bytes", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h4469e5b4c59ad243(&v1, &v19, "characters", 10);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h4469e5b4c59ad243(&v10, &v19, "fields", 6);
    v53 = v26;
    v51 = v24;
    *((int128_t *)&v54) = (int128_t)v1;
    v56 = v3;
    *((int128_t *)&v57) = (int128_t)v10;
    v69 = v12;
    v58 = v69;
    v38 = v51;
    v43 = v57;
    v44 = v69;
    v39 = v53;
    v40 = (long long)v54;
    v41 = (long long)(&v54)[8];
    v42 = v56;
    v36 = 0;
    v37 = 3;
    v70 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h399f2370c6e971a0(&v36, v63, v64);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haaec95360776ceea(&v51, &v19, "bytes", 5);
    v71 = clap_builder::parser::error::MatchesError::unwrap::hd6ffd99417a29016("bytes", 5, &v51);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haaec95360776ceea(&v51, &v19, "characters", 10);
    v72 = clap_builder::parser::error::MatchesError::unwrap::hd6ffd99417a29016("characters", 10, &v51);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haaec95360776ceea(&v51, &v19, "fields", 6);
    v73 = clap_builder::parser::error::MatchesError::unwrap::hd6ffd99417a29016("fields", 6, &v51);
    if (!v70)
    {
LABEL_46e541:
        ::0x46d080::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hbe38dd3da47b5763(&v51, "invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)", 73);
        goto LABEL_46e55a;
    }
    if (v70 != 1)
    {
        ::0x46d080::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hbe38dd3da47b5763(&v51, "invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)", 86);
LABEL_46e55a:
        v4 = v53;
        v2 = v51;
        v1 = 3;
LABEL_46e57d:
        *((int128_t *)&v16) = (int128_t)(&v8)[8];
        *((int128_t *)&v15) = *((int128_t *)&v7);
        *((int128_t *)&v14) = *((int128_t *)&v5);
        v12 = v3;
        v13 = v4;
        v10 = v1;
        v11 = v2;
        v78 = 0;
        goto LABEL_46e5d1;
    }
    if (v71)
    {
        if (!(!v72) || !(!v73))
            goto LABEL_46e541;
        uu_cut::list_to_ranges::h1e226e8019998500(&v51, v71[1], v71[2], v67);
        if (!(!v72) || !(!v73))
            goto LABEL_46e45f;
        v9 = (long long)v54;
        *((int128_t *)&v8) = (int128_t)(&v51)[8];
        v2 = v17;
        v3 = v18;
        v6 = 2;
        v7 = v68;
        v1 = 0;
        if (0 == 3)
            goto LABEL_46e57d;
    }
    else if (!v72)
    {
        if (!v73)
            goto LABEL_46e541;
        uu_cut::list_to_ranges::h1e226e8019998500(&v51, v73[1], v73[2], v67);
        if (!(!v72) || !(!v73))
            goto LABEL_46e45f;
        v9 = (long long)v54;
        *((int128_t *)&v8) = (int128_t)(&v51)[8];
        v2 = v17;
        v3 = v18;
        v4 = v66;
        v5 = v30;
        v6 = v0;
        v7 = v68;
        v1 = 2;
        if (2 == 3)
            goto LABEL_46e57d;
    }
    else
    {
        if (!(!v72) || !(!v73))
            goto LABEL_46e541;
        uu_cut::list_to_ranges::h1e226e8019998500(&v51, v72[1], v72[2], v67);
        if ((long long)v51)
        {
LABEL_46e45f:
            v4 = (long long)v54;
            *((int128_t *)&v2) = (int128_t)(&v51)[8];
            v1 = 3;
            if (3 == 3)
                goto LABEL_46e57d;
        }
        else
        {
            v9 = (long long)v54;
            *((int128_t *)&v8) = (int128_t)(&v51)[8];
            v2 = v17;
            v3 = v18;
            v6 = 2;
            v7 = v68;
            v1 = 1;
            if (1 == 3)
                goto LABEL_46e57d;
        }
    }
    v74 = (int128_t)(&v2)[8];
    v75 = *((int128_t *)&v5);
    v76 = *((int128_t *)&v7);
    *((int128_t *)&v51) = *((int128_t *)&v1);
    *((int128_t *)&v58) = (int128_t)(&v8)[8];
    v57 = v76;
    v55 = v75;
    v53 = v74;
    if (!(long long)v51)
    {
        if (!(!v72) || !(!v73))
            goto LABEL_46e804;
        if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, "whitespace-delimited", 20))
        {
            v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, "only-delimited", 14);
            goto LABEL_46e8df;
        }
LABEL_46e844:
        ::0x46d080::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hbe38dd3da47b5763(&v24, "invalid input: The '-w' option only usable if printing a sequence of fields", 75);
        goto LABEL_46e8fc;
    }
    else
    {
        if (!(!v72) || !(!v73))
            goto LABEL_46e92e;
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v19, "delimiter", 9))
        {
LABEL_46e804:
            ::0x46d080::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hbe38dd3da47b5763(&v24, "invalid input: The '--delimiter' ('-d') option only usable if printing a sequence of fields", 91);
            goto LABEL_46e8fc;
        }
        if (!(!v72) || !(!v73))
            goto LABEL_46e844;
        v79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v19, "only-delimited", 14);
LABEL_46e8df:
        if (!v79)
        {
LABEL_46e92e:
            *((int128_t *)&v16) = (int128_t)v58;
            v15 = v57;
            *((int128_t *)&v14) = (int128_t)v55;
            *((int128_t *)&v12) = (int128_t)v53;
            v10 = v51;
        }
        else
        {
            ::0x46d080::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hbe38dd3da47b5763(&v24, "invalid input: The '--only-delimited' ('-s') option only usable if printing a sequence of fields", 96);
LABEL_46e8fc:
            v13 = v26;
            v11 = v24;
            v10 = 3;
            core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h39108f761fc2bc44(&v51);
        }
    }
    v78 = v70 | -0x100 | 1;
LABEL_46e5d1:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h2f0e91331136b3f1(&v51, &v19, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::h880473b85f3da13d(&v24, "filei128", 4, &v51);
    v80 = (long long)v24;
    if (v80)
    {
        v81 = *((long long *)&v25);
        v85 = *((long long *)&v29);
    }
    else
    {
        v81 = "&";
        v80 = core::ops::function::FnOnce::call_once::h6ec245c920b7210a;
        v85 = 0;
    }
    v45 = v80;
    v46 = v81;
    *((int128_t *)&v47) = *((int128_t *)&v26);
    *((int128_t *)&v48) = *((int128_t *)&v27);
    v49 = *((long long *)&v28);
    v50 = v85;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h4cb97559495ed172(&v34, &v45, v50);
    if ((int)v10 != 3)
    {
        v58 = v16;
        v86 = (int128_t)v10;
        v87 = (int128_t)v12;
        v57 = v15;
        v55 = v14;
        v53 = v87;
        v51 = v86;
        v26 = *((long long *)&v35);
        *((int128_t *)&v24) = *((int128_t *)&v34);
        uu_cut::cut_files::h0dd24b8b966a7b9e(&v24, &v51);
        core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h39108f761fc2bc44(&v51);
        v66 = 0;
        if (!(!v72) || !(!v73))
            goto LABEL_46e7b3;
    }
    else
    {
        v53 = v13;
        *((int128_t *)&v51) = (int128_t)(&v10)[8];
        v54 = 1;
        v66 = alloc::boxed::Box$LT$T$GT$::new::h04edd8b6be7c0dad(&v51);
        ::0x46ccd0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h34a0052b677dcf4f(&v34);
        if ((v1 == 3 & v78))
        {
LABEL_46e7b3:
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cut..Mode$C$alloc..string..String$GT$$GT$::h772590b81cc6d45b(&v1);
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he3d1dc17c7cdba4e(&v19);
    return v66;
}
