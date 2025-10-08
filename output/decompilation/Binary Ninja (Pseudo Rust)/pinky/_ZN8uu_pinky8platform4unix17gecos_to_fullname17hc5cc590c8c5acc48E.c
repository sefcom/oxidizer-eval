
  fn uu_pinky::platform::unix::gecos_to_fullname::hc5cc590c8c5acc48(arg1: *mut i64, arg2: *mut c_void)

{
    if 0 + -(*arg2.byte_offset(0x18))
    {
        *arg1 = -0x8000000000000000;
        return;
    }
    
    let mut var_68: ();
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, 
        arg2.byte_offset(0x18));
    let var_60: i64;
    let mut r15_1: i64 = var_60;
    let var_58: i64;
    let mut r12_1: i64 = var_58;
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::find::h292770a8336ea6cd(r15_1, r12_1);
    
    if (rax_1 & 1) != 0
    {
        alloc::string::String::truncate::h4c9243e558c5f483(&var_68, rdx_1);
        r15_1 = var_60;
        r12_1 = var_58;
    }
    
    let mut var_50: ();
    _$LT$str$u20$as$u20$uu_pinky..Capitalize$GT$::capitalize::h521abc1e5369276e(&var_50, 
        *arg2.byte_offset(8), *arg2.byte_offset(0x10));
    let var_48: *mut i8;
    let var_40: *mut c_void;
    let mut var_38: i128;
    alloc::str::_$LT$impl$u20$str$GT$::replace::h9f65d83c61adc3df(&var_38, r15_1, r12_1, var_48, 
        var_40);
    let var_28: i64;
    arg1[2] = var_28;
    *arg1 = var_38;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_50);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_68);
}
