
  fn uu_numfmt::uumain::he5d270763546e61d(arg1: i64) -> u64

{
    core::result::Result$LT$T$C$E$GT$::expect::hada264d8931b89d1(
        uucore::disable_rust_signal_handlers::hcf33f4a6d6e443c4());
    let mut rax_1: u64;
    let mut rdx: *mut i64;
    rax_1 = uu_numfmt::uumain::uumain::h7a36dd360fce0307(arg1);
    
    if rax_1 == 0
    {
        /* tailcall */
        return uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
    }
    
    let mut var_90: u64 = rax_1;
    let mut var_28: *mut u64 = &var_90;
    let var_20: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h1241721a1cd07fd4;
    let mut var_80: *mut c_void = &data_4198c0;
    let var_78: i64 = 1;
    let var_60: i64 = 0;
    let var_70: *mut *mut u64 = &var_28;
    let var_68: i64 = 1;
    let mut var_50: i128;
    core::option::Option$LT$T$GT$::map_or_else::h05153684b171c193(&var_50, &var_80);
    var_28 = var_50;
    let var_40: u64;
    let var_18: u64 = var_40;
    let mut var_38: *mut i128;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha6d370ac452f0a35(var_20, var_40, 1, 0) == 0
    {
        let mut rax_3: i64;
        let mut rdx_1: i64;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_50 = rax_3;
        *var_50[8] = rdx_1;
        var_38 = &var_50;
        let var_30_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h97691ae48d37b1eb;
        var_80 = &data_501868;
        let var_78_1: i64 = 2;
        let var_60_1: i64 = 0;
        let var_70_1: *mut *mut i128 = &var_38;
        let var_68_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
        var_50 = &var_28;
        *var_50[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_80 = &data_501888;
        let var_78_2: i64 = 2;
        let var_60_2: i64 = 0;
        let var_70_2: *mut i128 = &var_50;
        let var_68_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
    }
    
    if rdx[0xc](var_90) != 0
    {
        let mut rax_6: i64;
        let mut rdx_2: i64;
        rax_6 = uucore::execution_phrase::hf0e80cb4793732ad();
        var_50 = rax_6;
        *var_50[8] = rdx_2;
        var_38 = &var_50;
        let var_30_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h97691ae48d37b1eb;
        var_80 = &data_5018a8;
        let var_78_3: i64 = 2;
        let var_60_3: i64 = 0;
        let var_70_3: *mut *mut i128 = &var_38;
        let var_68_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
    }
    
    let rax_8: i32 = rdx[0xb](var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc2a262c10a1490f(&var_28);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h0855b8f2974e583a(var_90, rdx);
    rax_8
}
