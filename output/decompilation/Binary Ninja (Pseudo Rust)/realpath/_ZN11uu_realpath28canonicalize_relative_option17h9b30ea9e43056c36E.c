
  fn uu_realpath::canonicalize_relative_option::h9b30ea9e43056c36(arg1: *mut i64, arg2: *mut i64, arg3: i8, arg4: i8, arg5: i64 @ r12, arg6: i64 @ r15)

{
    let var_8: i64 = arg6;
    let var_20: i64 = arg5;
    let mut r13: i64;
    
    if *arg2 == -0x8000000000000000
    {
        r13 = -0x8000000000000000;
        'label_4b67c7:
        *arg1 = r13;
        arg1[1] = arg6;
        arg1[2] = arg5;
        return;
    }
    
    let rax_1: i64 = arg2[2];
    let var_68_1: i64 = rax_1;
    let mut var_78: i128 = *arg2;
    let mut var_40: ();
    uu_realpath::canonicalize_relative::h9315a0e677658306(&var_40, *var_78[8], rax_1, arg3, arg4);
    let mut var_58: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8dc0120961bddde7(&var_58, &var_40, &var_78);
    r13 = var_58;
    let var_50: i64;
    arg6 = var_50;
    let var_48: i64;
    arg5 = var_48;
    
    if r13 != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&var_78);
        goto 'label_4b67c7;
    }
    
    arg1[1] = arg6;
    arg1[2] = arg5;
    *arg1 = -0x7fffffffffffffff;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cc26ee4129f6434(&var_78);
}
