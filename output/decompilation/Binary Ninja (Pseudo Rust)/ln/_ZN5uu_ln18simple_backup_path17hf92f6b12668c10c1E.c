
  fn uu_ln::simple_backup_path::hf92f6b12668c10c1(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64, arg5: i64) -> u64

{
    let mut var_38: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_38, arg2, arg3);
    
    if var_38 == 1
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let var_30: i64;
    let result: u64;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3685ff12e9f7df8a(&var_38, var_30, result);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h456c924d25b0d073(&var_38, arg4, arg5 + arg4);
    arg1[1] = result;
    *arg1 = var_38;
    result
}
