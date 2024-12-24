long long uu_pwd::uumain::uumain::h539b4f1574d55d7b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
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
    void* v17;  // rax
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx

    uu_pwd::uu_app::hdbe99ceb54e893f3(&v13, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h71a1f8a6f1dd6e40(&v5, &v13, a0, a1);
    if (v0 == 0x8000000000000000)
    {
        v17 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v1);
        return v17;
    }
    v4 = *((long long *)&v9);
    *((int128_t *)&v3) = *((int128_t *)&v8);
    *((int128_t *)&v2) = *((int128_t *)&v7);
    v0 = *((long long *)&v5);
    v1 = *((long long *)&v6);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, "physicalNotFoundTimedOut", 8))
    {
LABEL_46086f:
        uu_pwd::physical_path::hde30494958a93efd(&v13);
    }
    else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v0, "logical", 7))
    {
LABEL_46088c:
        uu_pwd::logical_path::hc05a9d0175befc85(&v13);
    }
    else
    {
        std::env::var::h7c23a59214840e39(&v13, v18, v19);
        if (*((long long *)&v13))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hbcd6b629379de765(&v13);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hbcd6b629379de765(&v13);
            goto LABEL_46088c;
        }
        goto LABEL_46086f;
    }
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h825d75ce1781f590(&v5, &v13);
    if (v10 != 0x8000000000000000)
    {
        v10 = *((long long *)&v5);
        v17 = *((long long *)&v6);
        v12 = *((long long *)&v7);
        v17 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haea7d9d33ab405bb(uucore::mods::display::println_verbatim::h90c50c40d0e6e4fd(&v10, v18, v19));
        if (!v17)
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hebe3ead99f321327(&v0);
            return 0;
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hebe3ead99f321327(&v0);
    return v17;
}
