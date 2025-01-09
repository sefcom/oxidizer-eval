long long uu_whoami::uumain::uumain::h6c0ddbda8c01a844(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x368]
    unsigned long long v2;  // [sp-0x360]
    unsigned long v3;  // [sp-0x358], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x350]
    int v5;  // [sp-0x348]
    int v6;  // [sp-0x338]
    unsigned long long v7;  // [sp-0x328]
    char v8;  // [bp-0x320]
    char v9;  // [bp-0x318]
    char v10;  // [bp-0x310]
    char v11;  // [bp-0x300]
    char v12;  // [bp-0x2f0]
    char v13;  // [bp-0x2e8]
    char v14;  // [bp-0x2e0]
    char v15;  // [bp-0x2d8]
    unsigned long long v19;  // rax

    uu_whoami::uu_app::h74b0fb3ed938f565(&v13);
    clap_builder::builder::command::Command::try_get_matches_from::hc9ef77e42fd4ef1d(&v8, &v13, a0, a1);
    if (v3 == 0x8000000000000000)
    {
        v19 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v4);
        return v19;
    }
    v7 = *((long long *)&v12);
    *((int128_t *)&v6) = *((int128_t *)&v11);
    *((int128_t *)&v5) = *((int128_t *)&v10);
    v3 = *((long long *)&v8);
    v4 = *((long long *)&v9);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h61cf24ab013da276(&v3);
    uu_whoami::whoami::h4c4b8e85df7041a6(&v13);
    v19 = *((long long *)&v14);
    if (v0 != 0x8000000000000000)
    {
        v0 = *((long long *)&v13);
        v1 = v19;
        v2 = *((long long *)&v15);
        v19 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h986f92b3628ea713(uucore::mods::display::println_verbatim::h0dd006cf780b5f2c(&v0));
        return v19;
    }
    return v19;
}
