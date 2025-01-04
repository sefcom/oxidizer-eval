long long uu_tee::uumain::uumain::h4f24f17b635a96b5(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x390], Other Possible Types: unsigned long, unsigned long long
    int v1;  // [sp-0x388], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x380]
    unsigned long v3;  // [sp-0x378], Other Possible Types: unsigned long long
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
    int v16;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v17;  // [sp-0x2d0]
    char v18;  // [sp-0x2cf]
    char v19;  // [sp-0x2ce]
    int v20;  // [sp-0x2c8]
    int v21;  // [sp-0x2b8]
    unsigned long long v23;  // r8
    unsigned long long v24;  // r9
    unsigned long long v27;  // rax
    int v30;  // xmm0
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax
    unsigned long long v33[3];  // rax
    unsigned long long v34;  // r14
    unsigned long long v35;  // r15
    unsigned long long v36;  // rax

    uu_tee::uu_app::hd12bc0652bb3e89d(&v15, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h11c1e228193462c3(&v8, &v15, a0, a1, v23, v24);
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
        v30 = *((int128_t *)&v8);
        *((int128_t *)&v21) = *((int128_t *)&v12);
        *((int128_t *)&v20) = *((int128_t *)&v11);
        *((int128_t *)&v16) = *((int128_t *)&v10);
        v15 = v30;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4a98ffca8b57971d(&v13, &v15, v31);
        v32 = *((long long *)&v13);
        *((int128_t *)&v1) = *((int128_t *)&v14);
        v0 = v32;
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
            v33 = clap_builder::parser::error::MatchesError::unwrap::h5d8204b5c404fdee("output-error", 12, &v15);
            if (!v33)
                goto LABEL_466b74;
            v34 = v33[1];
            v35 = v33[2];
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v34, v35, &g_40aaf4, 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v34, v35, "warn-nopipe", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v34, v35, "exit", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf4afa01266150c3c(v34, v35, "exit-nopipe", 11))
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
LABEL_466c4e:
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v3, "append", 6);
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v3, "ignore-interrupts", 17);
        *((int128_t *)&v15) = *((int128_t *)&v0);
        v16 = v2;
        v19 = 4;
        v36 = uu_tee::tee::hda7657f7329b70fc(&v15);
        v27 = (!v36 ? 0 : uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1));
        core::ptr::drop_in_place$LT$uu_tee..Options$GT$::h96fa9444c1876fc5(&v15);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h706c76a15fabed08(&v3);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc4231765db700f47(v36);
        return v27;
    }
}
