long long uu_hostname::uumain::uumain::hd29ed1ca8d950a5e(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long long v15;  // rax
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rcx

    uu_hostname::uu_app::hb6e249c122554ffe(&v5, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h87cf345e6a930018(&v0, &v5, a0, a1, v11, v12);
    if (v5 != 0x8000000000000000)
    {
        v9 = *((long long *)&v4);
        *((int128_t *)&v8) = *((int128_t *)&v3);
        *((int128_t *)&v7) = *((int128_t *)&v2);
        v5 = *((long long *)&v0);
        v6 = *((long long *)&v1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hfe4358f699f5b9c3(&v0, &v5, _ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E, g_5181f0);
        v15 = clap_builder::parser::error::MatchesError::unwrap::hcb60a1c181f5a1cb(_ZN11uu_hostname8OPT_HOST17hfa1a143c3d8b3f66E, g_5181f0, &v0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb1b2c5783d635b8f(&v5);
        return (!v15 ? uu_hostname::display_hostname::hb7e83080e266b2ca(&v5, v16, v17, v18, v11) : _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha754b84eb7781c97(hostname::set::h6e7654145cf08af4(v15, v16, v17)));
    }
    return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v6);
}
