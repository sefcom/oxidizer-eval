long long uu_tac::uumain::uumain::h7e5f78fcf59dfdf1(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v18;  // rdx
    unsigned int v21;  // eax
    unsigned int v22;  // eax
    unsigned long long v23[3];  // rax
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15
    unsigned long long v26[2];  // rax
    unsigned long long v27;  // rax

    uu_tac::uu_app::hbfed87f2452b1325(&v14, a1, v18);
    clap_builder::builder::command::Command::try_get_matches_from::hd84351df1886689c(&v5, &v14, a0, a1);
    if (v0 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v1);
    v4 = *((long long *)&v9);
    *((int128_t *)&v3) = *((int128_t *)&v8);
    *((int128_t *)&v2) = *((int128_t *)&v7);
    v0 = *((long long *)&v5);
    v1 = *((long long *)&v6);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN6uu_tac7options6BEFORE17hd7f3ce1de04110beE, g_6c93b0);
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, _ZN6uu_tac7options5REGEX17h5156555b6dd4fcdeE, g_6c93c0);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hac99eb11d77675c2(&v14, &v0, _ZN6uu_tac7options9SEPARATOR17h10a4faf3cacfc3c0E, g_6c93d0);
    v23 = clap_builder::parser::error::MatchesError::unwrap::h51358feae5624240(_ZN6uu_tac7options9SEPARATOR17h10a4faf3cacfc3c0E, g_6c93d0, &v14);
    if (!v23)
    {
        v25 = "\nTry ' --help' for more information.\n";
        v24 = 1;
    }
    else
    {
        v24 = v23[2];
        v25 = (!v24 ? v23[1] : &g_4640a7);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6c888091aaf9ce31(&v14, &v0, _ZN6uu_tac7options4FILE17h29855ddd5738375dE, g_6c93e0);
    clap_builder::parser::error::MatchesError::unwrap::h67f432febd2aa2fd(&v5, _ZN6uu_tac7options4FILE17h29855ddd5738375dE, g_6c93e0, &v14);
    if (*((long long *)&v5))
    {
        *((int128_t *)&v13) = *((int128_t *)&v9);
        *((int128_t *)&v12) = *((int128_t *)&v8);
        *((int128_t *)&v11) = *((int128_t *)&v7);
        *((int128_t *)&v10) = *((int128_t *)&v5);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd27de0943c7920de(&v14, &v10, v18);
    }
    else
    {
        v26 = ::0x553ea0::alloc::alloc::Global::alloc_impl::hf61749d460433fff();
        if (!v26)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v26[0] = "-";
        v26[1] = 1;
        alloc::slice::hack::into_vec::h6b43ecff29235c60(&v14, v26, 1);
    }
    v27 = uu_tac::tac::h67bfcbcfb52995f3(*((long long *)&v15), *((long long *)&v16), v21, v22, v25, v24 + (v24 < 1));
    ::0x553aa0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h10c6afd0f4d6a2e3(&v14);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc7b7fca5a149a5ed(&v0);
    return v27;
}
