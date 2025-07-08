
  fn uu_dd::Output::new_stdout::h76c99dbdf4ef76d1(arg1: *mut i8, arg2: *mut c_void) -> *mut i8

{
    let mut r14: *mut c_void = arg2;
    std::io::stdio::stdout::h077da66234850927();
    let var_28: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_30: i8 = 0;
    let mut rax: i64;
    let mut rdx: *mut *mut c_void;
    rax = uu_dd::Dest::seek::hf206f28f02b500d6(&var_30, *r14.byte_offset(0x88));
    let mut var_20: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7b2fb4fd73e14a5(&var_20, rax, rdx);
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
        core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h3e1c9cbf5a8b743c(var_30, var_2c);
    }
    
    *arg1.byte_offset(0x10) = r14;
    arg1
}
