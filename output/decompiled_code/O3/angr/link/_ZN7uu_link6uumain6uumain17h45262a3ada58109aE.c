long long uu_link::uumain::uumain::h45262a3ada58109a(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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
    unsigned long long v19;  // r8
    unsigned long long v20;  // r9
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    int v26;  // xmm0
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    struct struct_0 *v30[2];  // rax
    unsigned long long v31[3];  // rcx
    unsigned long long v34[3];  // rax

    uu_link::uu_app::h8c6c98521a86a24e(&v11, a1, a2);
    clap_builder::builder::command::Command::try_get_matches_from::h066c7c93d2162a47(&v0, &v11, a0, a1, v19, v20);
    if (v6 == 0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v7);
    v10 = *((long long *)&v4);
    *((int128_t *)&v9) = *((int128_t *)&v3);
    *((int128_t *)&v8) = *((int128_t *)&v2);
    v6 = *((long long *)&v0);
    v7 = *((long long *)&v1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h120e9fd3de4d454f(&v11, &v6, _ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200);
    clap_builder::parser::error::MatchesError::unwrap::had88a321cb4048ba(&v0, _ZN7uu_link7options5FILES17haa8c3a37ec4fcbe2E, g_50c200, &v11);
    v23 = *((long long *)&v0);
    if (v23)
    {
        v24 = *((long long *)&v1);
        v26 = *((int128_t *)&v3);
        v27 = *((long long *)&v4);
        v28 = *((long long *)&v5);
    }
    else
    {
        v24 = "a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs";
        v23 = core::ops::function::FnOnce::call_once::h5106bbb4b638e43a;
        v28 = 0;
    }
    v11 = v23;
    v12 = v24;
    *((int128_t *)&v13) = *((int128_t *)&v2);
    v15 = v26;
    v16 = v27;
    v17 = v28;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h9d2e1812b0eb8590(&v0, &v11, v17);
    v29 = *((long long *)&v2);
    if (!(v29 && v29 != 1))
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v30 = *((long long *)&v1);
    v31 = v30[0];
    v34 = v30[1];
    v11 = v34[1];
    v12 = v34[2];
    v13 = v31[1];
    v14 = v31[2];
    ::0x4607a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$std..ffi..os_str..OsString$GT$$GT$::hab158a2c4b32ba65(&v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7efe79aefed125da(&v6);
    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h28cb617c0241e7b8(std::fs::hard_link::h27245533caa257e4(v13, v14, v11, v12), &v11);
}
