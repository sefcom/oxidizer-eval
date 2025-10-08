
  fn uu_dd::Output::discard_cache::h1b6c721cbbbead38(arg1: i8, arg2: i32, arg3: i64, arg4: off64_t) -> i64

{
    let rax_1: i64 = _$LT$core..result..Result$LT$T$C$nix..errno..consts..Errno$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h3dc615e44788f3c8(uu_dd::Dest::discard_cache::hb821f426c899f381(arg1, arg2, arg3, arg4));
    let mut var_78: i64 = rax_1;
    let var_70: *mut *mut c_void = &data_53cab0;
    
    if rax_1 == 0
    {
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::haecb1dcee0b7efda(&var_78);
    }
    
    let mut var_88: i64 = rax_1;
    let var_80: *mut *mut c_void = &data_53cab0;
    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    let mut rax_2: i64;
    let mut rdx: i64;
    rax_2 = uucore::util_name::h074417a1e6395129();
    let mut var_68: i64 = rax_2;
    let var_60: i64 = rdx;
    let mut var_58: *mut i64 = &var_68;
    let var_50: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
    let var_48: *mut i64 = &var_88;
    let var_40: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h07fe195a9490a30f;
    let mut var_38: *mut c_void = &data_53dd50;
    let var_30: i64 = 3;
    let var_18: i64 = 0;
    let var_28: *mut *mut i64 = &var_58;
    let var_20: i64 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_38);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h2f8fd742369c2f2b(&var_88)
}
