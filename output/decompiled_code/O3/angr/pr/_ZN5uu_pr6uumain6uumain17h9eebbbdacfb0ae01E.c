long long uu_pr::uumain::uumain::h9eebbbdacfb0ae01(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x6f8], Other Possible Types: char
    char v1;  // [bp-0x6f0]
    int v2;  // [bp-0x6e8], Other Possible Types: unsigned long long
    int v3;  // [sp-0x6c8]
    unsigned long long v4;  // [sp-0x6b8]
    char v5;  // [bp-0x6a8]
    char v6;  // [bp-0x6a0]
    char v7;  // [bp-0x698]
    char v8;  // [bp-0x690]
    char v9;  // [bp-0x680]
    char v10;  // [bp-0x678]
    char v11;  // [bp-0x668]
    unsigned long v12;  // [sp-0x660], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x658]
    int v14;  // [sp-0x650]
    int v15;  // [sp-0x640]
    unsigned long long v16;  // [sp-0x630]
    int v17;  // [sp-0x628]
    char v18;  // [bp-0x618]
    char v19;  // [bp-0x608]
    char v20;  // [bp-0x5f8]
    char v21;  // [bp-0x5f0]
    char v22;  // [bp-0x5d0]
    int v23;  // [bp-0x5b8], Other Possible Types: void*, char, unsigned long long, unsigned long
    int v24;  // [sp-0x5b0], Other Possible Types: unsigned long, unsigned long long
    int v25;  // [bp-0x5a8], Other Possible Types: void*, char
    int v26;  // [sp-0x598]
    int v27;  // [bp-0x588], Other Possible Types: char
    int v28;  // [sp-0x468]
    unsigned long long v29;  // [sp-0x458]
    char v30;  // [bp-0x448]
    char v31;  // [bp-0x438]
    char v32;  // [bp-0x318]
    char v33;  // [bp-0x2f8]
    unsigned long long v35;  // rcx
    unsigned long long v36;  // r8
    unsigned long long v37;  // r9
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rdx
    int v40;  // xmm0
    void* v41;  // rax
    int v42;  // xmm0
    int v43;  // ymm0
    int v44;  // ymm0
    int v45;  // xmm0
    unsigned long long v46;  // rax
    int v47;  // xmm0
    int v48;  // xmm0
    struct_0 *v49;  // rax
    int v50;  // xmm0
    int v51;  // xmm0
    unsigned long long v52;  // rbp
    unsigned long long v53;  // r9
    int v54;  // xmm0
    unsigned long long v55[2];  // rax
    int v56;  // xmm0

    uucore::Args::collect_ignore::hbbefa76f0d447d5a(&v5, a0, a1);
    uu_pr::recreate_arguments::h1e1d1dd306553996(&v19, *((long long *)&v6), *((long long *)&v7), v35, v36, v37);
    uu_pr::uu_app::h8fe6cda82b850488(&v33, v38, v39);
    v29 = *((long long *)&v20);
    v40 = *((int128_t *)&v19);
    v28 = v40;
    clap_builder::builder::command::Command::try_get_matches_from_mut::hd0b5035aac6f25ca(&v23, &v33, &v28, v35);
    if (v12 == 0x8000000000000000)
    {
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v13);
        ::0x56f570::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h49c465a12c0215c4(&v33);
        ::0x56f810::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7497a0ee80241ef4(&v5);
        return v41;
    }
    v16 = *((long long *)&v27);
    v42 = *((int128_t *)&v25);
    v44 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
    v15 = v26;
    v14 = v42;
    v12 = v23;
    v13 = v24;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5dcf7c12188283f8(&v23, &v12, "files-merge UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOO", 5);
    clap_builder::parser::error::MatchesError::unwrap::h6fc90392f425ead6(&v28, "files-merge UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOO", 5, &v23);
    if (!(long long)v28 || (v45 = v28, *((int128_t *)&v27) = *((int128_t *)&v31), *((int128_t *)&v26) = *((int128_t *)&v30), *((int128_t *)&v25) = *((int128_t *)&v29), v23 = v45, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hdb520232681c7559(&v0, &v23, v39), v46 = *((long long *)&v0), v47 = *((int128_t *)&v1), v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47, v17 = v47, v23 == 0x8000000000000000))
    {
        v23 = 0;
        v24 = 8;
        v25 = 0;
    }
    else
    {
        v48 = v17;
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
        v24 = v48;
        v23 = v46;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6e3756057523b773(&v8, &v23);
    ::0x56f4b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hfaab624d0099d8ac(&v23);
    if (!*((long long *)&v9))
        alloc::vec::Vec$LT$T$C$A$GT$::insert::hb06ce8354fc25c00(&v8, 0, "-merge UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOM", 1);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v12, "merge UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMS", 5))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h4d4dfc862c2dae5d(&v32, &v8);
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h5aff0efb0bb021b0(&v22, &v32);
    }
    else
    {
        v49 = ::0x56fd50::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v49)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v50 = *((int128_t *)&v8);
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
        v49->field_10 = *((long long *)&v9);
        *((void*)&v49->field_0) = v50;
        alloc::slice::hack::into_vec::ha65faade053cb77b(&v22, v49, 1);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3bdbacfd1cae63ce(&v21, &v22);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b2b2dd8a8bf9207(&v10, &v21);
    if (*((long long *)&v10) != 0x8000000000000000)
    {
        do
        {
            v4 = *((long long *)&v11);
            v51 = *((int128_t *)&v10);
            v3 = v51;
            v52 = (long long)(&v3)[8];
            alloc::str::join_generic_copy::h3c74bfe5b674073e(&v23, *((long long *)&v6), *((long long *)&v7), " UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDR", 1);
            v53 = (long long)(&v24)[8];
            v2 = (long long)(&v24)[8];
            v54 = *((int128_t *)&v23);
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
            v0 = v54;
            uu_pr::build_options::hdf6b1094f6368828(&v28, &v12, v52, v4, (long long)(&v0)[8], v53);
            ::0x56f430::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h59748ee4b760d30b(&v0);
            if ((long long)v28 == 2)
            {
                v56 = (int128_t)(&v28)[8];
                *((int128_t *)&v2) = *((int128_t *)&(&v29)[1]);
                v0 = v56;
                uu_pr::print_error::he2b35fe8eb576522(&v12, &v0);
                v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1);
                core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::h9da4f8285d858b69(&v0);
                goto LABEL_5704d8;
            }
            else
            {
                memcpy(&v23, &v28, 328);
                itertools::Itertools::exactly_one::h63e43bbbda8ca80b(&v0, (long long)(&v3)[8], v4 * 16 + (long long)(&v3)[8]);
                if ((int)v0 == 2)
                {
                    v55 = (long long)(&v0)[8];
                    uu_pr::pr::hbd43fbe2870272cf(&v17, v55[0], v55[1], &v23);
                }
                else
                {
                    uu_pr::mpr::h72b8ce4a4d107f3b(&v17, (long long)(&v3)[8], v4, &v23);
                }
                if ((long long)v17 != 9223372036854775813)
                {
                    *((int128_t *)&v2) = *((int128_t *)&v18);
                    v0 = v17;
                    uu_pr::print_error::he2b35fe8eb576522(&v12, &v0);
                    core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::h9da4f8285d858b69(&v0);
                    v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1);
                    core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h76400fc00dead658(&v23);
LABEL_5704d8:
                    ::0x56f4b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hfaab624d0099d8ac(&v3);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h097c87cbea8042df(&v21);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h686075683bd85429(&v12);
                    ::0x56f570::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h49c465a12c0215c4(&v33);
                    ::0x56f810::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7497a0ee80241ef4(&v5);
                    return v41;
                }
            }
            core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h76400fc00dead658(&v23);
            ::0x56f4b0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hfaab624d0099d8ac(&v3);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8b2b2dd8a8bf9207(&v10, &v21);
        } while (*((long long *)&v10) != 0x8000000000000000);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h097c87cbea8042df(&v21);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h686075683bd85429(&v12);
    ::0x56f570::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h49c465a12c0215c4(&v33);
    ::0x56f810::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h7497a0ee80241ef4(&v5);
    return 0;
}
