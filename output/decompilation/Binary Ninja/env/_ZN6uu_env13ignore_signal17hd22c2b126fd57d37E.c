
  uint64_t uu_env::ignore_signal::hd22c2b126fd57d37(int32_t arg1)

{
    int32_t var_98;
    __sighandler_t rcx;
    nix::sys::signal::signal::h36b1180493a8e0aa(&var_98, arg1, 1, rcx);
    
    if (var_98 != 4)
        return 0;
    
    int32_t var_9c = arg1;
    char var_90;
    int64_t rax;
    int64_t rdx;
    rax = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::h315f9aa16cfc7fce(var_90);
    int64_t var_88 = rax;
    int64_t var_80 = rdx;
    int32_t* var_78 = &var_9c;
    uint64_t (* var_70)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    int64_t* var_68 = &var_88;
    int64_t (* var_60)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
    char const (** const var_58)[0xe8] = &data_510ce8;
    int64_t var_50 = 2;
    int64_t var_38 = 0;
    int32_t** var_48 = &var_78;
    int64_t var_40 = 2;
    void var_28;
    core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_28, &var_58);
    int32_t var_10 = 0x7d;
    return alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_28);
}
