
  fn uu_env::ignore_signal::hb651b27965f7f812(arg1: i32) -> *mut i128

{
    let mut var_98: i32;
    let rcx: __sighandler_t;
    nix::sys::signal::signal::haa2dccad64099f8c(&var_98, arg1, 1, rcx);
    
    if var_98 != 4
    {
        return nullptr;
    }
    
    let mut var_9c: i32 = arg1;
    let var_90: i32;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::hd335e127646dbdc2(var_90);
    let mut var_88: i64 = rax;
    let var_80_1: i64 = rdx_1;
    let mut var_78: *mut i32 = &var_9c;
    let var_70_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
    let var_68_1: *mut i64 = &var_88;
    let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
    let mut var_58: *mut *mut [i8; 0x86] = &data_548c58;
    let var_50_1: i64 = 2;
    let var_38_1: i64 = 0;
    let var_48_1: *mut *mut i32 = &var_78;
    let var_40_1: i64 = 2;
    let mut var_28: ();
    core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(&var_28, &var_58);
    let var_10_1: i32 = 0x7d;
    alloc::boxed::Box$LT$T$GT$::new::h48315bbd00cc7109(&var_28)
}
