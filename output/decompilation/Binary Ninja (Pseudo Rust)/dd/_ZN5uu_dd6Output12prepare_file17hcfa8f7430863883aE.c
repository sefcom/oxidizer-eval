
  fn uu_dd::Output::prepare_file::hcfa8f7430863883a(arg1: *mut i8, arg2: i32, arg3: *mut c_void) -> i64

{
    let mut rbx: *mut c_void = arg3;
    let var_2f: i8 = *arg3.byte_offset(0x90) ^ 1;
    let mut var_30: i8 = 1;
    let mut rax_1: i8;
    let mut rdx: i64;
    rax_1 = uu_dd::Dest::seek::h5a64bc595251d974(&var_30, *arg3.byte_offset(0x88));
    let mut result_1: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h503797b426a911f8(&result_1, rax_1, rdx);
    let mut result: i64 = result_1;
    
    if result == 0
    {
        *arg1 = var_30;
    }
    else
    {
        let var_18: *mut c_void;
        rbx = var_18;
        *arg1.byte_offset(8) = result;
        *arg1 = 4;
        result = core::ptr::drop_in_place$LT$uu_dd..Dest$GT$::h46074e24ca5324af(var_30, arg2);
    }
    
    *arg1.byte_offset(0x10) = rbx;
    result
}
