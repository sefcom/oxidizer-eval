int uu_join::uumain::uumain::h2dbb66702847aae5()
{
    unsigned long v0;  // [sp-0x560], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x558]
    unsigned long long v2;  // [sp-0x550]
    int v3;  // [sp-0x548]
    int v4;  // [sp-0x538]
    int v5;  // [sp-0x528]
    int v6;  // [sp-0x518]
    unsigned long long v7;  // [sp-0x508]
    unsigned long v8;  // [sp-0x4e8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x4e0]
    int v10;  // [sp-0x4d8]
    int v11;  // [sp-0x4c8]
    unsigned long long v12;  // [sp-0x4b8]
    int v13;  // [bp-0x450], Other Possible Types: char
    char v14;  // [bp-0x448]
    unsigned long v15;  // [sp-0x440], Other Possible Types: unsigned long long
    char v16;  // [bp-0x438], Other Possible Types: unsigned int
    char v17;  // [bp-0x428]
    char v18;  // [bp-0x418]
    char v19;  // [bp-0x408]
    char v20;  // [bp-0x3f8]
    char v21;  // [bp-0x170]
    char v22;  // [bp-0x168]
    char v23;  // [bp-0x160]
    char v24;  // [bp-0x150]
    char v25;  // [bp-0x140]
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rdi
    unsigned long long v34[3];  // rbx
    unsigned long long v35[3];  // r15
    unsigned long long v36;  // r12

    uu_join::uu_app::h136523cc6220f14a(&v13, v27, v28);
    clap_builder::builder::command::Command::try_get_matches_from::h67b09380d9556246(&v21, &v13, v29, v27);
    if (v8 == 0x8000000000000000)
    {
        uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v9);
        return;
    }
    v12 = *((long long *)&v25);
    *((int128_t *)&v11) = *((int128_t *)&v24);
    *((int128_t *)&v10) = *((int128_t *)&v23);
    v8 = *((long long *)&v21);
    v9 = *((long long *)&v22);
    uu_join::parse_settings::h465ee708981d3a32(&v13, &v8);
    if (v0 == 0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h146d156dd3c3c8d7(&v8);
        return;
    }
    v7 = *((long long *)&v20);
    *((int128_t *)&v6) = *((int128_t *)&v19);
    *((int128_t *)&v5) = *((int128_t *)&v18);
    *((int128_t *)&v4) = *((int128_t *)&v17);
    *((int128_t *)&v3) = *((int128_t *)&v16);
    v0 = *((long long *)&v13);
    v1 = *((long long *)&v14);
    v2 = v15;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc62e221813a07056(&v13, &v8, "file1", 5);
    v34 = clap_builder::parser::error::MatchesError::unwrap::hbbbba8e40b7035ba("file1", 5, &v13);
    if (!v34)
    {
        goto LABEL_47577f;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc62e221813a07056(&v13, &v8, "file2", 5);
        v35 = clap_builder::parser::error::MatchesError::unwrap::hbbbba8e40b7035ba("file2", 5, &v13);
        if (!v35)
        {
LABEL_47577f:
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
        else if (!((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha02ff381e42bd8e9(v34[1], v34[2], "-", 1)) || !((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha02ff381e42bd8e9(v35[1], v35[2], "-", 1)))
        {
            v36 = 0x8000000000000000 ^ (long long)(&v4)[8];
            if (v36 >= 4)
                v36 = 1;
            goto *((int *)(4240936 + vvar_52{reg 16} * 4)) + 4240936;
        }
        else
        {
            ::0x46c9b0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h473c134ecb2ded95(&v21);
            v15 = *((long long *)&v23);
            *((int128_t *)&v13) = *((int128_t *)&v21);
            v16 = 1;
            alloc::boxed::Box$LT$T$GT$::new::h8362ece1cd56a70b(&v13);
            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::he5a5257a387e1512(&v0);
        }
    }
}
