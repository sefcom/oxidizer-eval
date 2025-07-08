
  uint64_t uu_cp::copydir::ends_with_slash_dot::h7ca260d86f8cd653(void* arg1)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h28e4b529e1fbf8c2(arg1);
    int64_t var_18 = rax;
    int64_t var_10 = rdx;
    void var_30;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0383ffa9f5ca7973(&var_30, &var_18);
    int64_t var_28;
    int64_t var_20;
    int32_t rax_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h706a83e6dc488ee6(
        var_28, var_20, "/.src/uu/cp/src/copydir.rsFailed…", 2);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_30);
    return rax_1;
}
