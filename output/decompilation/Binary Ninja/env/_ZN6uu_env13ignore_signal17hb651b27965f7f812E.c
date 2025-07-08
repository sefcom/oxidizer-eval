
  int128_t* uu_env::ignore_signal::hb651b27965f7f812(int32_t arg1)

{
    int32_t var_98;
    __sighandler_t rcx;
    nix::sys::signal::signal::haa2dccad64099f8c(&var_98, arg1, 1, rcx);
    
    if (var_98 != 4)
        return nullptr;
    
    int32_t var_9c = arg1;
    int32_t var_90;
    int64_t rax;
    int64_t rdx_1;
    rax = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::hd335e127646dbdc2(var_90);
    int64_t var_88 = rax;
    int64_t var_80_1 = rdx_1;
    int32_t* var_78 = &var_9c;
    uint64_t (* var_70_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
    int64_t* var_68_1 = &var_88;
    int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    char const (** const var_58)[0x86] = &data_548c58;
    int64_t var_50_1 = 2;
    int64_t var_38_1 = 0;
    int32_t** var_48_1 = &var_78;
    int64_t var_40_1 = 2;
    void var_28;
    core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_28, &var_58);
    int32_t var_10_1 = 0x7d;
    return alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_28);
}
