long long uu_hostname::uumain::uumain::hdade65dbc2a53a48(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
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
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rcx
    unsigned long long v17;  // r8

    uu_hostname::uu_app::h94591511a1d0dd5c(&v5, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h388f4f350c9a9d7e(&v0, &v5, a0, a1);
    if (v5 != 0x8000000000000000)
    {
        v9 = *((long long *)&v4);
        *((int128_t *)&v8) = *((int128_t *)&v3);
        *((int128_t *)&v7) = *((int128_t *)&v2);
        v5 = *((long long *)&v0);
        v6 = *((long long *)&v1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h936b12bac6a0d337(&v0, &v5, _ZN11uu_hostname8OPT_HOST17hcfee6ede35908551E, g_519370);
        v13 = clap_builder::parser::error::MatchesError::unwrap::heff314f85a981dfb(_ZN11uu_hostname8OPT_HOST17hcfee6ede35908551E, g_519370, &v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2c8051e66678b87e(&v5);
        return (!v13 ? uu_hostname::display_hostname::h67f7737a55dec468(&v5, v14, v15, v16, v17) : _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a0ae3d4cb8efac6(hostname::set::h08308d134f8edf02(v13, v14, v15)));
    }
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v6);
}
