
  uint64_t uu_cat::write_to_end::hc5c9bc823008cc21(int64_t arg1, uint64_t arg2, int64_t* arg3)

{
    int64_t var_28 = arg1;
    int64_t var_20 = arg1 + arg2;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h0aef01da5877f86a(&var_28);
    
    if (!rax_1)
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg3, arg1, arg2));
        return arg2;
    }
    
    int64_t rax_2;
    uint64_t rdx_2;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rdx, arg1, arg2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0fc6b3beec18547f(
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        arg3, rax_2, rdx_2));
    return rdx;
}
