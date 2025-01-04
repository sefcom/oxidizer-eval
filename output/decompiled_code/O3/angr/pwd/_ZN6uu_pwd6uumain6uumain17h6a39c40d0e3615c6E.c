long long uu_pwd::uumain::uumain::h6a39c40d0e3615c6(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x370], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x368]
    int v2;  // [sp-0x360]
    int v3;  // [sp-0x350]
    unsigned long long v4;  // [sp-0x340]
    char v5;  // [bp-0x338]
    char v6;  // [bp-0x330]
    char v7;  // [bp-0x328]
    char v8;  // [bp-0x318]
    char v9;  // [bp-0x308]
    unsigned long v10;  // [sp-0x300], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x2f0]
    char v13;  // [bp-0x2e8]
    unsigned long long v15;  // r8
    unsigned long long v16;  // r9
    void* v19;  // rax
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx

    uu_pwd::uu_app::h4454d6573b8ab8c1(&v13, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h33e7466411a157e4(&v5, &v13, a0, a1, v15, v16);
    if (v0 == 0x8000000000000000)
    {
        v19 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v1);
        return v19;
    }
    v4 = *((long long *)&v9);
    *((int128_t *)&v3) = *((int128_t *)&v8);
    *((int128_t *)&v2) = *((int128_t *)&v7);
    v0 = *((long long *)&v5);
    v1 = *((long long *)&v6);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, "physicalNotFoundTimedOut", 8))
    {
LABEL_46027f:
        uu_pwd::physical_path::h5c5da6b14d972300(&v13);
    }
    else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v0, "logical", 7))
    {
LABEL_46029c:
        uu_pwd::logical_path::h67df90d7519c7ea2(&v13);
    }
    else
    {
        std::env::var::h23d362e75506305f(&v13, v20, v21);
        if (*((long long *)&v13))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hb3bbf00eaa3bcc22(&v13);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hb3bbf00eaa3bcc22(&v13);
            goto LABEL_46029c;
        }
        goto LABEL_46027f;
    }
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hff586d9334aa0b44(&v5, &v13);
    if (v10 != 0x8000000000000000)
    {
        v10 = *((long long *)&v5);
        v19 = *((long long *)&v6);
        v12 = *((long long *)&v7);
        v19 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h022d8ad013205a62(uucore::mods::display::println_verbatim::he333530693d8dcfe(&v10, v20, v21));
        if (!v19)
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hff8689e77a915942(&v0);
            return 0;
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hff8689e77a915942(&v0);
    return v19;
}
