long long uu_link::uumain::uumain::hd42744fb890154a2(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x360]
    char v1;  // [bp-0x358]
    char v2;  // [bp-0x350]
    char v3;  // [bp-0x340]
    char v4;  // [bp-0x330]
    char v5;  // [bp-0x328]
    unsigned long v6;  // [sp-0x320], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x318]
    int v8;  // [sp-0x310]
    int v9;  // [sp-0x300]
    unsigned long long v10;  // [sp-0x2f0]
    char v11;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x2e0]
    int v13;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x2d0]
    int v15;  // [sp-0x2c8]
    unsigned long long v16;  // [sp-0x2b8]
    unsigned long long v17;  // [sp-0x2b0]
    unsigned long long v19;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rcx
    int v25;  // xmm0
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    struct struct_0 *v29[2];  // rax
    unsigned long long v30[3];  // rcx
    unsigned long long v33[3];  // rax

    uu_link::uu_app::h5326923514635d79(&v11, a1, v19);
    clap_builder::builder::command::Command::try_get_matches_from::h9834aadc186b86c5(&v0, &v11, a0, a1);
    if (v6 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v7);
    v10 = *((long long *)&v4);
    *((int128_t *)&v9) = *((int128_t *)&v3);
    *((int128_t *)&v8) = *((int128_t *)&v2);
    v6 = *((long long *)&v0);
    v7 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he852db9112cc0c6c(&v11, &v6, _ZN7uu_link7options5FILES17h0bea30281c60cba1E, g_50d7a0);
    clap_builder::parser::error::MatchesError::unwrap::hbbedda4bfacac8c4(&v0, _ZN7uu_link7options5FILES17h0bea30281c60cba1E, g_50d7a0, &v11);
    v22 = *((long long *)&v0);
    if (v22)
    {
        v23 = *((long long *)&v1);
        v25 = *((int128_t *)&v3);
        v26 = *((long long *)&v4);
        v27 = *((long long *)&v5);
    }
    else
    {
        v23 = "&";
        v22 = core::ops::function::FnOnce::call_once::h3efecf5dc421424d;
        v27 = 0;
    }
    v11 = v22;
    v12 = v23;
    *((int128_t *)&v13) = *((int128_t *)&v2);
    v15 = v25;
    v16 = v26;
    v17 = v27;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha971673206dbb621(&v0, &v11, v17);
    v28 = *((long long *)&v2);
    if (!(v28 && v28 != 1))
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v29 = *((long long *)&v1);
    v30 = v29[0];
    v33 = v29[1];
    v11 = v33[1];
    v12 = v33[2];
    v13 = v30[1];
    v14 = v30[2];
    ::0x460c20::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::h8ba32288028713af(&v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3df121e3379476e3(&v6);
    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hddcf0dfcb27ff689(std::fs::hard_link::hf4668cc95a296180(v13, v14, v11, v12), &v11);
}
