
  fn uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_c8: u64;
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(
        &var_c8);
    
    if *arg2.byte_offset(0xa) != 0
    {
        let var_7c_1: bool = arg3 != 0;
    }
    
    let rax: u64 = arg2[1];
    let mut rcx: u64 = *arg2;
    let temp0: i8 = *arg2.byte_offset(9);
    let mut rdx: u64 = 0xa;
    
    if temp0 == 0
    {
        rdx = rcx;
    }
    
    if temp0 == 0
    {
        rcx = rax;
    }
    
    let mut rsi: u64 = 4;
    
    if temp0 != 0
    {
        rsi = rax;
    }
    
    var_c8 = rsi;
    let var_c0: u64 = rcx;
    let mut var_78: i128;
    
    if arg3 == 0
    {
        _$LT$uu_tail..paths..Input$u20$as$u20$core..default..Default$GT$::default::hd997c7035054d831(&var_78);
    }
    else
    {
        uu_tail::paths::Input::from::h6db62654b008023a(&var_78, arg3);
    }
    
    let var_58: i128;
    let var_28: i128 = var_58;
    let var_68: i128;
    let var_38: i128 = var_68;
    let mut var_48: i128 = var_78;
    let mut var_b0: ();
    alloc::vec::Vec$LT$T$C$A$GT$::push::h8fc9b727b1446556(&var_b0, &var_48);
    let var_88: i128;
    arg1[4] = var_88;
    let zmm0_1: i128 = var_c8;
    let var_98: i128;
    arg1[3] = var_98;
    let var_a8: i128;
    arg1[2] = var_a8;
    arg1[1] = rdx;
    *arg1 = zmm0_1;
    arg1
}
