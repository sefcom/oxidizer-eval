
  fn alacritty::config::bindings::RawBinding::into_mouse_binding::h7a8cfac036ae1ccd(arg1: *mut i64, arg2: *mut i128) -> u64

{
    let rax: i16 = *arg2.byte_offset(0x58);
    
    if rax == 6
    {
        let var_18: i64 = arg2[6];
        let var_28: i128 = arg2[5];
        let var_38: i128 = arg2[4];
        let var_48: i128 = arg2[3];
        let var_58: i128 = arg2[2];
        let var_68: i128 = arg2[1];
        let mut var_78: i128 = *arg2;
        let result: u64 = alloc::boxed::Box$LT$T$GT$::new::he9b99f1ca761bae9(&var_78);
        arg1[1] = result;
        *arg1 = -0x7fffffffffffffcb;
        return result;
    }
    
    let rcx: i16 = *arg2.byte_offset(0x5a);
    let rdx: i32 = *arg2.byte_offset(0x5c);
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    *arg1.byte_offset(0x20) = arg2[2];
    *arg1.byte_offset(0x10) = zmm1;
    *arg1 = zmm0;
    let rdi_1: i16 = arg2[6];
    arg1[6] = rax;
    *arg1.byte_offset(0x32) = rcx;
    *arg1.byte_offset(0x34) = rdx;
    arg1[7] = rdi_1;
    /* tailcall */
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..bindings..BindingKey$GT$$GT$::h4838dee35b4ef80c(&arg2[3])
}
