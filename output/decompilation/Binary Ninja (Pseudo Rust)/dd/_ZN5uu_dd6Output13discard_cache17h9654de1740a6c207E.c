
  fn uu_dd::Output::discard_cache::h9654de1740a6c207(arg1: *mut i32, arg2: i64, arg3: off64_t) -> *mut i128

{
    let result: *mut i128 = _$LT$core..result..Result$LT$T$C$nix..errno..consts..Errno$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he363b563d49dfbc5(uu_dd::Dest::discard_cache::h93c1738e4adad1fb(*arg1, arg1[1], arg2, 
        arg3));
    
    if result == 0
    {
        return result;
    }
    
    let mut result_1: *mut i128 = result;
    let var_70_1: *mut *mut c_void = &data_5620d8;
    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    let mut rax_2: i64;
    let mut rdx_1: i64;
    rax_2 = uucore::util_name::h60d842bf27b05e82();
    let mut var_68: i64 = rax_2;
    let var_60_1: i64 = rdx_1;
    let mut var_58: *mut i64 = &var_68;
    let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
    let var_48_1: *mut *mut i128 = &result_1;
    let var_40_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc9ea8a505475b34b;
    let mut var_38: *mut c_void = &data_561070;
    let var_30_1: i64 = 3;
    let var_18_1: i64 = 0;
    let var_28_1: *mut *mut i64 = &var_58;
    let var_20_1: i64 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_38);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hef88782da503643c(result_1, var_70_1)
}
