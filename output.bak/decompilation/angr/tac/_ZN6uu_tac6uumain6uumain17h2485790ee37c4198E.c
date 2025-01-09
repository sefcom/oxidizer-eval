long long uu_tac::uumain::uumain::h2485790ee37c4198(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x3b0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x3a8]
    int v2;  // [sp-0x3a0]
    int v3;  // [sp-0x390]
    unsigned long long v4;  // [sp-0x380]
    char v5;  // [bp-0x378]
    char v6;  // [bp-0x370]
    char v7;  // [bp-0x368]
    char v8;  // [bp-0x358]
    char v9;  // [bp-0x348]
    int v10;  // [sp-0x338]
    int v11;  // [sp-0x328]
    int v12;  // [sp-0x318]
    int v13;  // [sp-0x308]
    char v14;  // [bp-0x2f8]
    char v15;  // [bp-0x2f0]
    char v16;  // [bp-0x2e8]
    unsigned int v20;  // eax
    unsigned int v21;  // eax
    unsigned long long v22[3];  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25[2];  // rax
    unsigned long long v26;  // rax

    uu_tac::uu_app::h578904e159ae3f9f(&v14);
    clap_builder::builder::command::Command::try_get_matches_from::h4ad0fc13a933eb50(&v5, &v14, a0, a1);
    if (v0 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v1);
    v4 = *((long long *)&v9);
    *((int128_t *)&v3) = *((int128_t *)&v8);
    *((int128_t *)&v2) = *((int128_t *)&v7);
    v0 = *((long long *)&v5);
    v1 = *((long long *)&v6);
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN6uu_tac7options6BEFORE17h5ea3e93d3c7a2a31E, g_6c8d68);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, _ZN6uu_tac7options5REGEX17hba9800e3ae0d6749E, g_6c8d78);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb332f6936fb5da9f(&v14, &v0, _ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E, g_6c8d88);
    v22 = clap_builder::parser::error::MatchesError::unwrap::he549b6506d706f45(_ZN6uu_tac7options9SEPARATOR17h4e8a4f2b5dbc5554E, g_6c8d88, &v14);
    if (!v22)
    {
        v24 = "\nTry ' --help' for more information.\n";
        v23 = 1;
    }
    else
    {
        v23 = v22[2];
        v24 = (!v23 ? v22[1] : &g_463ca1);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6b583678377047fe(&v14, &v0, _ZN6uu_tac7options4FILE17ha26efb49879adcc6E, g_6c8d98);
    clap_builder::parser::error::MatchesError::unwrap::hbb9b448b81998103(&v5, _ZN6uu_tac7options4FILE17ha26efb49879adcc6E, g_6c8d98, &v14);
    if (*((long long *)&v5))
    {
        *((int128_t *)&v13) = *((int128_t *)&v9);
        *((int128_t *)&v12) = *((int128_t *)&v8);
        *((int128_t *)&v11) = *((int128_t *)&v7);
        *((int128_t *)&v10) = *((int128_t *)&v5);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h72f0db188805d051(&v14, &v10);
    }
    else
    {
        v25 = ::0x551fb0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v25)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(8, 16); /* do not return */
        v25[0] = "-";
        v25[1] = 1;
        alloc::slice::hack::into_vec::h3dd85526ca90bde5(&v14, v25, 1);
    }
    v26 = uu_tac::tac::h3cfa8e66554e074d(*((long long *)&v15), *((long long *)&v16), v20, v21, v24, v23 + (v23 < 1));
    ::0x551ba0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h3b403ca4fc6daa2d(&v14);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf06510748f9f349f(&v0);
    return v26;
}
