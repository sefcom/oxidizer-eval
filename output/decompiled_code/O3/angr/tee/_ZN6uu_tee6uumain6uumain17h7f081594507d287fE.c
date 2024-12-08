long long uu_tee::uumain::uumain::h7f081594507d287f(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [sp-0x398], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x390]
    unsigned long long v2;  // [sp-0x388]
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
    char v14;  // [bp-0x2f0]
    int v15;  // [bp-0x2e8], Other Possible Types: char
    int v16;  // [bp-0x2d8], Other Possible Types: unsigned long long
    char v17;  // [sp-0x2d0]
    char v18;  // [sp-0x2cf]
    char v19;  // [sp-0x2ce]
    int v20;  // [sp-0x2c8]
    int v21;  // [sp-0x2b8]
    unsigned long long v23;  // rdx
    unsigned long long v26;  // rax
    int v29;  // xmm0
    unsigned long long v30[3];  // rax
    unsigned long long v31;  // r14
    unsigned long long v32;  // r15
    unsigned long long v33;  // rax

    uu_tee::uu_app::h92ab44adc07c904b(&v15, a1, v23);
    clap_builder::builder::command::Command::try_get_matches_from::h2caf9630cfc2123f(&v8, &v15, a0, a1);
    if (v3 == 0x8000000000000000)
    {
        v26 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v4);
        return v26;
    }
    v7 = *((long long *)&v12);
    *((int128_t *)&v6) = *((int128_t *)&v11);
    *((int128_t *)&v5) = *((int128_t *)&v10);
    v3 = *((long long *)&v8);
    v4 = *((long long *)&v9);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbe9fa238e612060c(&v15, &v3);
    clap_builder::parser::error::MatchesError::unwrap::ha8cfb70febb03f5c(&v8, "filei128", 4, &v15);
    if (!*((long long *)&v8))
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
    }
    else
    {
        v29 = *((int128_t *)&v8);
        *((int128_t *)&v21) = *((int128_t *)&v12);
        *((int128_t *)&v20) = *((int128_t *)&v11);
        *((int128_t *)&v16) = *((int128_t *)&v10);
        v15 = v29;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hd6fb55c32d449c35(&v13, &v15, v23);
        *((int128_t *)&v0) = *((int128_t *)&v13);
        v2 = *((long long *)&v14);
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v3, "ignore-pipe-errors", 18))
    {
LABEL_469262:
        goto LABEL_46933c;
    }
    else
    {
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(&v3, "output-error", 12))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0b0fc15e7fe9aacc(&v15, &v3);
            v30 = clap_builder::parser::error::MatchesError::unwrap::h4318f3971bc0b74c("output-error", 12, &v15);
            if (!v30)
                goto LABEL_469262;
            v31 = v30[1];
            v32 = v30[2];
            if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4a54972766a2187b(v31, v32, &g_41459c, 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4a54972766a2187b(v31, v32, "warn-nopipe", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4a54972766a2187b(v31, v32, "exit", 4) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4a54972766a2187b(v31, v32, "exit-nopipe", 11))
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
LABEL_46933c:
        v17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v3, "append", 6);
        v18 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v3, "ignore-interrupts", 17);
        *((int128_t *)&v15) = *((int128_t *)&v0);
        v16 = v2;
        v19 = 4;
        v33 = uu_tee::tee::h5df91d09048e292c(&v15);
        v26 = (!v33 ? 0 : uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h42be6d6e2087a7b3(1));
        core::ptr::drop_in_place$LT$uu_tee..Options$GT$::h261df7e183c52cc3(&v15);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9385bdac2fa0546c(&v3);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h926b2313fdc5f3f0(v33);
        return v26;
    }
}
