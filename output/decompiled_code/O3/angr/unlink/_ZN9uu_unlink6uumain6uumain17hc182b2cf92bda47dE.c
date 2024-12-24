long long uu_unlink::uumain::uumain::hc182b2cf92bda47d(unsigned long long a0, unsigned long long a1)
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
    unsigned long long v11;  // rdx
    unsigned long long v14[3];  // rax
    unsigned long long v15;  // rbx
    unsigned long long v17;  // rax

    uu_unlink::uu_app::hacbc311e73179456(&v5, a1, v11);
    clap_builder::builder::command::Command::try_get_matches_from::h79b92f887e746caa(&v0, &v5, a0, a1);
    if (v5 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v6);
    v9 = *((long long *)&v4);
    *((int128_t *)&v8) = *((int128_t *)&v3);
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v5 = *((long long *)&v0);
    v6 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb1184ede7ccf5cde(&v0, &v5, _ZN9uu_unlink8OPT_PATH17h07f8b005cd9cf2edE, g_50c670);
    v14 = clap_builder::parser::error::MatchesError::unwrap::he1dc3bf379c89c26(_ZN9uu_unlink8OPT_PATH17h07f8b005cd9cf2edE, g_50c670, &v0);
    if (v14)
    {
        v15 = v14[1];
        v17 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h671c8a970977bc01(std::fs::remove_file::h671072479ef37431(v15, v14[2], v11), v15);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hdb8f261510e82dcd(&v5);
        return v17;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
