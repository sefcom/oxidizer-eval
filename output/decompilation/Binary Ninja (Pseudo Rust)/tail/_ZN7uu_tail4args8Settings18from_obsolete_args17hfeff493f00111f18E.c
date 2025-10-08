
  fn uu_tail::args::Settings::from_obsolete_args::hfeff493f00111f18(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_98: u64;
    _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hab317295196880fb(
        &var_98);
    
    if *arg2.byte_offset(0xa) != 0
    {
        let var_4c_1: bool = arg3 != 0;
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
    
    var_98 = rsi;
    let var_90: u64 = rcx;
    let mut var_48: ();
    
    if arg3 == 0
    {
        _$LT$uu_tail..paths..Input$u20$as$u20$core..default..Default$GT$::default::h20cf20ae0b612e7e(&var_48);
    }
    else
    {
        uu_tail::paths::Input::from::hacbfb0c241154464(&var_48, arg3);
    }
    
    let mut var_80: ();
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0d41b2d489ee0555(&var_80, &var_48);
    let var_58: i128;
    arg1[4] = var_58;
    let zmm0: i128 = var_98;
    let var_68: i128;
    arg1[3] = var_68;
    let var_78: i128;
    arg1[2] = var_78;
    arg1[1] = rdx;
    *arg1 = zmm0;
    arg1
}
