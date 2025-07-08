
  fn uu_cat::write_to_end::hc5c9bc823008cc21(arg1: i64, arg2: u64, arg3: *mut i64) -> u64

{
    let mut var_28: i64 = arg1;
    let var_20: i64 = arg1 + arg2;
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h0aef01da5877f86a(&var_28);
    
    if rax_1 == 0
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg3, arg1, arg2));
        return arg2;
    }
    
    let mut rax_2: i64;
    let mut rdx_2: u64;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rdx, arg1, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg3, rax_2, rdx_2));
    rdx
}
