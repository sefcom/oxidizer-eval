long long uu_unlink::uumain::uumain::h07e5eaf89cff3dc3(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x318]
    char v1;  // [bp-0x310]
    char v2;  // [bp-0x308]
    char v3;  // [bp-0x2f8]
    char v4;  // [bp-0x2e8]
    char v5;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x2d8]
    int v7;  // [sp-0x2d0]
    int v8;  // [sp-0x2c0]
    unsigned long long v9;  // [sp-0x2b0]
    unsigned long long v13[3];  // rax
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r14

    uu_unlink::uu_app::hdbcae0fc1396218f(&v5);
    clap_builder::builder::command::Command::try_get_matches_from::ha818702dab301bbf(&v0, &v5, a0, a1);
    if (v5 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v6);
    v9 = *((long long *)&v4);
    *((int128_t *)&v8) = *((int128_t *)&v3);
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v5 = *((long long *)&v0);
    v6 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h58b3520effad2bf6(&v0, &v5, _ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E, g_50ac98);
    v13 = clap_builder::parser::error::MatchesError::unwrap::h40baddc8e029e47e(_ZN9uu_unlink8OPT_PATH17h6cccbb55871a7469E, g_50ac98, &v0);
    if (v13)
    {
        v14 = v13[1];
        v15 = v13[2];
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5aacfee888f9a35c(&v5);
        return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h611ae2e89287ed88(std::fs::remove_file::hbd709b316fa4f879(v14, v15), v14, v15);
    }
    core::option::unwrap_failed::h0e11329e76906eaa(&g_508630); /* do not return */
}
