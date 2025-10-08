
  fn uu_realpath::canonicalize_relative_option::hbda6f1f43c1a9622(arg1: *mut i64, arg2: *mut i64, arg3: i8, arg4: i8, arg5: i64 @ rbp, arg6: i64 @ r12) -> i64

{
    let var_8: i64 = arg5;
    let var_28: i64 = arg6;
    let r14: i64 = *arg2;
    let mut result: i64 = -(r14);
    let mut r13: i64;
    
    if -(r14) != -0x8000000000000000
    {
        let r13_1: i64 = arg2[1];
        let mut var_48: ();
        uu_realpath::canonicalize_relative::ha3a23c9727c26a2f(&var_48, r13_1, arg2[2], arg3, arg4);
        let mut var_60: i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9ab56ab1f2cee605(&var_60, &var_48);
        r13 = var_60;
        let var_58: i64;
        arg6 = var_58;
        let var_50: i64;
        arg5 = var_50;
        
        if r13 == -0x8000000000000000
        {
            arg1[1] = arg6;
            arg1[2] = arg5;
            *arg1 = -0x7fffffffffffffff;
            /* tailcall */
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb5b343c2ee7576a0(r14, 
                r13_1);
        }
        
        result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb5b343c2ee7576a0(r14, r13_1);
    }
    else
    {
        r13 = -0x8000000000000000;
    }
    
    *arg1 = r13;
    arg1[1] = arg6;
    arg1[2] = arg5;
    result
}
