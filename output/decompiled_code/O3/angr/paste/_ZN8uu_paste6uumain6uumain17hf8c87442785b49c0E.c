long long uu_paste::uumain::uumain::hf8c87442785b49c0(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3a0]
    char v1;  // [bp-0x398]
    char v2;  // [bp-0x390]
    char v3;  // [bp-0x380]
    char v4;  // [bp-0x370]
    unsigned long v5;  // [sp-0x360], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x358]
    int v7;  // [sp-0x350]
    int v8;  // [sp-0x340]
    unsigned long long v9;  // [sp-0x330]
    int v10;  // [sp-0x328]
    int v11;  // [sp-0x318]
    int v12;  // [sp-0x308]
    int v13;  // [sp-0x2f8]
    int v14;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v15;  // [sp-0x2d8]
    unsigned long long v17;  // rdx
    unsigned long long v21[3];  // r14
    unsigned long long v25;  // rax

    uu_paste::uu_app::h5cabeb27f4ea1bb8(&v14, a1, v17);
    clap_builder::builder::command::Command::try_get_matches_from::h040aa36cfdf40afb(&v0, &v14, a0, a1);
    if (v5 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v6);
    v9 = *((long long *)&v4);
    *((int128_t *)&v8) = *((int128_t *)&v3);
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v5 = *((long long *)&v0);
    v6 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3466bc8bff7bea3f(&v14, &v5, "delimiters", 10);
    v21 = clap_builder::parser::error::MatchesError::unwrap::hf8f28035014ce91d("delimiters", 10, &v14);
    if (!v21)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h50184b3c5c29c56d(&v14, &v5, "filei128", 4);
    clap_builder::parser::error::MatchesError::unwrap::hb46892457acb5049(&v0, "filei128", 4, &v14);
    if (*((long long *)&v0))
    {
        *((int128_t *)&v13) = *((int128_t *)&v4);
        *((int128_t *)&v12) = *((int128_t *)&v3);
        *((int128_t *)&v11) = *((int128_t *)&v2);
        *((int128_t *)&v10) = *((int128_t *)&v0);
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h5ecc65267478d551(&v0, &v10, v17);
        v15 = *((long long *)&v2);
        *((int128_t *)&v14) = *((int128_t *)&v0);
        v25 = uu_paste::paste::h88c82a43492050ac(&v14, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v5, "serial", 6), v21[1], v21[2], ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v5, "zero-terminated", 15) ? 0 : 10));
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h33ec72a6d7054b1b(&v5);
        return v25;
    }
}
