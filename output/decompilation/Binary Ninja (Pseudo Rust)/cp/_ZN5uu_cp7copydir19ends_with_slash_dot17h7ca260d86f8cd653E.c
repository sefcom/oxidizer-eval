
  fn uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(arg1: *mut c_void) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h28e4b529e1fbf8c2(arg1);
    let mut var_18: i64 = rax;
    let var_10: i64 = rdx;
    let mut var_30: ();
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0383ffa9f5ca7973(&var_30, &var_18);
    let var_28: i64;
    let var_20: i64;
    let rax_1: i32 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h706a83e6dc488ee6(
        var_28, var_20, "/.src/uu/cp/src/copydir.rsFailed…", 2);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_30);
    rax_1
}
