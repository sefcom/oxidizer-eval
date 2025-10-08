
  fn uu_env::ignore_signal::hd22c2b126fd57d37(arg1: i32) -> u64

{
    let mut var_98: i32;
    let rcx: __sighandler_t;
    nix::sys::signal::signal::h36b1180493a8e0aa(&var_98, arg1, 1, rcx);
    
    if var_98 != 4
    {
        return 0;
    }
    
    let mut var_9c: i32 = arg1;
    let var_90: i8;
    let mut rax: i64;
    let mut rdx: i64;
    rax = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::h315f9aa16cfc7fce(var_90);
    let mut var_88: i64 = rax;
    let var_80: i64 = rdx;
    let mut var_78: *mut i32 = &var_9c;
    let var_70: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
    let var_68: *mut i64 = &var_88;
    let var_60: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
    let mut var_58: *mut *mut [i8; 0xe8] = &data_510ce8;
    let var_50: i64 = 2;
    let var_38: i64 = 0;
    let var_48: *mut *mut i32 = &var_78;
    let var_40: i64 = 2;
    let mut var_28: ();
    core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_28, &var_58);
    let var_10: i32 = 0x7d;
    alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_28)
}
