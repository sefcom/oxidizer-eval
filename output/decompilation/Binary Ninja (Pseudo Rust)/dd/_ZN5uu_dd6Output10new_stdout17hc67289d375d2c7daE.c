
  fn uu_dd::Output::new_stdout::hc67289d375d2c7da(arg1: *mut i8, arg2: *mut c_void) -> *mut i8

{
    let mut r14: *mut c_void = arg2;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let var_28: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_30: i8 = 0;
    let mut rax: i8;
    let mut rdx: i64;
    rax = uu_dd::Dest::seek::h5a64bc595251d974(&var_30, *r14.byte_offset(0x88));
    let mut var_20: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h202423c1371f09a8(&var_20, rax, rdx);
    let rax_1: i64 = var_20;
    
    if rax_1 == 0
    {
        *arg1 = var_30;
    }
    else
    {
        let var_18: *mut c_void;
        r14 = var_18;
        *arg1.byte_offset(8) = rax_1;
        *arg1 = 4;
        let var_2c: i32;
        core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_30, var_2c);
    }
    
    *arg1.byte_offset(0x10) = r14;
    arg1
}
