long long uu_pr::uumain::uumain::hf17caad61ffada1f(unsigned long long a0, unsigned long long a1)
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
    unsigned long v12;  // [sp-0x660]
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
    int v23;  // [sp-0x5b8], Other Possible Types: char, unsigned long
    void* v24;  // [sp-0x5b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v25;  // [sp-0x5b0]
    void* v26;  // [sp-0x5b0], Other Possible Types: int, unsigned long long
    int v27;  // [bp-0x5a8], Other Possible Types: char
    int v28;  // [sp-0x598]
    int v29;  // [bp-0x588], Other Possible Types: char
    int v30;  // [sp-0x468]
    unsigned long long v31;  // [sp-0x458]
    char v32;  // [bp-0x448]
    char v33;  // [bp-0x438]
    char v34;  // [bp-0x318]
    char v35;  // [bp-0x2f8]
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // ymm0
    int v40;  // ymm0
    void* v41;  // rbx
    int v42;  // xmm0
    unsigned long long v43;  // rax
    int v44;  // xmm0
    int v45;  // xmm0
    struct_0 *v46;  // rax
    int v47;  // xmm0
    int v48;  // xmm0
    unsigned long long v49;  // rbp
    unsigned long long v50;  // r9
    int v51;  // xmm0
    unsigned long long v52[2];  // rax
    int v53;  // xmm0

    uucore::Args::collect_ignore::h1f75fae5bd7a4821(&v5, a0, a1);
    uu_pr::recreate_arguments::hbe43c308ac861d0c(&v19, *((long long *)&v6), *((long long *)&v7));
    uu_pr::uu_app::h27293cf4b1de8d69(&v35);
    v31 = *((long long *)&v20);
    v37 = *((int128_t *)&v19);
    v30 = v37;
    clap_builder::builder::command::Command::try_get_matches_from_mut::h0d51c7aaa63022ba(&v23, &v35, &v30);
    if (v12 == 0x8000000000000000)
    {
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v13);
        ::0x5702f0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb4de78349db13b93(&v35);
        ::0x570590::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5b40a3057d327f5(&v5);
        return v41;
    }
    v16 = *((long long *)&v29);
    v38 = *((int128_t *)&v27);
    v40 = (v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
    v15 = v28;
    v14 = v38;
    v12 = v23;
    v13 = v25;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he9d5271e2c2f6830(&v23, &v12, "files -mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOO", 5);
    clap_builder::parser::error::MatchesError::unwrap::h9483f94352775eb3(&v30, "files -mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOO", 5, &v23);
    if (!(long long)v30 || (v42 = v30, *((int128_t *)&v29) = *((int128_t *)&v33), *((int128_t *)&v28) = *((int128_t *)&v32), *((int128_t *)&v27) = *((int128_t *)&v31), v23 = v42, _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3126b24b43ab7e31(&v0, &v23), v43 = *((long long *)&v0), v44 = *((int128_t *)&v1), v40 = (v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44, v17 = v44, v24 == 0x8000000000000000))
    {
        v24 = 0;
        v26 = 8;
        v26 = 0;
    }
    else
    {
        v45 = v17;
        v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
        v26 = v45;
        v24 = v43;
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed7d37a3b4c56c54(&v8, &v23);
    ::0x570230::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd9c35ea9e897c87d(&v23);
    if (!*((long long *)&v9))
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h6aa1a4bfc3ddda46(&v8, 0, "-mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMS", 1);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v12, "mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSG", 5))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h57e7793faa5c940a(&v34, &v8);
        alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::ha8d90c04fe27a3d5(&v22, &v34);
    }
    else
    {
        v46 = ::0x570ad0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v46)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 24); /* do not return */
        v47 = *((int128_t *)&v8);
        v40 = v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
        v46->field_10 = *((long long *)&v9);
        *((void*)&v46->field_0) = v47;
        alloc::slice::hack::into_vec::h92977b83cee8faee(&v22, v46, 1);
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he0633ba5e41a2d78(&v21, &v22);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08603e204509b18e(&v10, &v21);
    if (*((long long *)&v10) != 0x8000000000000000)
    {
        do
        {
            v4 = *((long long *)&v11);
            v48 = *((int128_t *)&v10);
            v3 = v48;
            v49 = (long long)(&v3)[8];
            alloc::str::join_generic_copy::h3936ba3902b6550c(&v23, *((long long *)&v6), *((long long *)&v7), " -mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOM", 1);
            v50 = (long long)(&v26)[8];
            v2 = (long long)(&v26)[8];
            v51 = *((int128_t *)&v24);
            v40 = (v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
            v0 = v51;
            uu_pr::build_options::h94d2c892cdb8648c(&v30, &v12, v49, v4, (long long)(&v0)[8], v50);
            ::0x5701b0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9f022ce4bf884c9d(&v0);
            if ((long long)v30 == 2)
            {
                v53 = (int128_t)(&v30)[8];
                *((int128_t *)&v2) = *((int128_t *)&(&v31)[1]);
                v0 = v53;
                uu_pr::print_error::hae74ddad01a055bb(&v12, &v0);
                v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::h11e50f787d698fda(&v0);
                goto LABEL_571257;
            }
            else
            {
                memcpy(&v23, &v30, 328);
                itertools::Itertools::exactly_one::h2b0e489c5cd32cfa(&v0, (long long)(&v3)[8], v4 * 16 + (long long)(&v3)[8]);
                if ((int)v0 != 2)
                {
                    uu_pr::mpr::h619b4b447614e91a();
                }
                else
                {
                    v52 = (long long)(&v0)[8];
                    uu_pr::pr::hece35f3a6aa3bef4(&v17, v52[0], v52[1], &v23);
                }
                if ((long long)v17 != 9223372036854775813)
                {
                    *((int128_t *)&v2) = *((int128_t *)&v18);
                    v0 = v17;
                    uu_pr::print_error::hae74ddad01a055bb(&v12, &v0);
                    core::ptr::drop_in_place$LT$uu_pr..PrError$GT$::h11e50f787d698fda(&v0);
                    v41 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                    core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h0aa4c9475356bf21(&v23);
LABEL_571257:
                    ::0x570230::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd9c35ea9e897c87d(&v3);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h4b9d711cf2b8be8b(&v21);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h320315631e9d3f1c(&v12);
                    ::0x5702f0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb4de78349db13b93(&v35);
                    ::0x570590::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5b40a3057d327f5(&v5);
                    return v41;
                }
            }
            core::ptr::drop_in_place$LT$uu_pr..OutputOptions$GT$::h0aa4c9475356bf21(&v23);
            ::0x570230::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd9c35ea9e897c87d(&v3);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h08603e204509b18e(&v10, &v21);
        } while (*((long long *)&v10) != 0x8000000000000000);
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$$GT$::h4b9d711cf2b8be8b(&v21);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h320315631e9d3f1c(&v12);
    ::0x5702f0::core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::hb4de78349db13b93(&v35);
    ::0x570590::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hd5b40a3057d327f5(&v5);
    return 0;
}
