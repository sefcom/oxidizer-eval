long long uu_tee::uumain::uumain::h4f24f17b635a96b5(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x390], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0x388], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x380]
    unsigned long v3;  // [sp-0x378]
    unsigned long long v4;  // [sp-0x370]
    int v5;  // [sp-0x368]
    int v6;  // [sp-0x358]
    unsigned long long v7;  // [sp-0x348]
    char v8;  // [bp-0x340]
    char v9;  // [bp-0x338]
    char v10;  // [bp-0x330]
    char v11;  // [bp-0x320]
    char v12;  // [bp-0x310]
    char v13;  // [bp-0x300]
    char v14;  // [bp-0x2f8]
    int v15;  // [bp-0x2e8], Other Possible Types: char
    int v16;  // [sp-0x2e8]
    int v17;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v18;  // [sp-0x2d0]
    char v19;  // [sp-0x2cf]
    char v20;  // [sp-0x2ce]
    int v21;  // [sp-0x2c8]
    int v22;  // [sp-0x2b8]
    unsigned long long v27;  // r14
    int v29;  // xmm0
    unsigned long long v30;  // rax
    unsigned long long v31[3];  // rax
    unsigned long long v32;  // r14
    unsigned long long v33;  // r15
    unsigned long long v34;  // rax

    uu_tee::uu_app::hd12bc0652bb3e89d(&v15);
    clap_builder::builder::command::Command::try_get_matches_from::h11c1e228193462c3(&v8, &v15, a0, a1);
    if (v3 == 0x8000000000000000)
    {
        v27 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v4);
        return v27;
    }
    v7 = *((long long *)&v12);
    *((int128_t *)&v6) = *((int128_t *)&v11);
    *((int128_t *)&v5) = *((int128_t *)&v10);
    v3 = *((long long *)&v8);
    v4 = *((long long *)&v9);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5619aa58ea2d0a49(&v15, &v3);
    clap_builder::parser::error::MatchesError::unwrap::h12e60ca066924c5f(&v8, "filei128", 4, &v15);
    if (!*((long long *)&v8))
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    else
    {
        v29 = *((int128_t *)&v8);
        *((int128_t *)&v22) = *((int128_t *)&v12);
        *((int128_t *)&v21) = *((int128_t *)&v11);
        *((int128_t *)&v17) = *((int128_t *)&v10);
        v15 = v29;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4a98ffca8b57971d(&v13, &v15);
        v30 = *((long long *)&v13);
        *((int128_t *)&v1) = *((int128_t *)&v14);
        v0 = v30;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v3, "ignore-pipe-errors", 18))
    {
LABEL_466b74:
        goto LABEL_466c4e;
    }
    else
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&v3, "output-error", 12))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::had8f468e20909500(&v15, &v3);
            v31 = clap_builder::parser::error::MatchesError::unwrap::h5d8204b5c404fdee("output-error", 12, &v15);
            if (!v31)
                goto LABEL_466b74;
            v32 = v31[1];
            v33 = v31[2];
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v32, v33, &g_40aaf4, 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v32, v33, "warn-nopipe", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v32, v33, "exit", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v32, v33, "exit-nopipe", 11))
                core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreachable code", 40, &g_51d090); /* do not return */
        }
LABEL_466c4e:
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v3, "append", 6);
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v3, "ignore-interrupts", 17);
        *((int128_t *)&v16) = *((int128_t *)&v0);
        v17 = v2;
        v20 = 4;
        v34 = uu_tee::tee::hda7657f7329b70fc(&v15);
        v27 = (!v34 ? 0 : uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1));
        core::ptr::drop_in_place$LT$uu_tee..Options$GT$::h96fa9444c1876fc5(&v15);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h706c76a15fabed08(&v3);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc4231765db700f47(v34);
        return v27;
    }
}
